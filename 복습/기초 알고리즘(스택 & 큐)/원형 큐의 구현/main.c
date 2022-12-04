#include <stdio.h>
#include <stdlib.h>
int size;
typedef int element;
typedef struct
{
	element data;
	struct ListNode *link;
}ListNode;
void print_list(ListNode* head)
{
    ListNode *p;
    if(head==NULL)
        return;
    p=head->link;
    do{
      printf("%c ",p->data);
      p=p->link;
    } while (p!=head);
    printf("%c\n",p->data);

}
ListNode *insert_first(ListNode *head,element data)
{
    ListNode *node=(ListNode *)malloc(sizeof(ListNode));
    node->data=data;
    if(head==NULL)
    {
        head=node;
        node->link=head;
    }
    else
    {
        node->link=head->link;
        head->link=node;
    }
    return head;
}
ListNode *insert_last(ListNode *head,element data)
{
    ListNode *node=(ListNode *)malloc(sizeof(ListNode));
    node->data=data;
    if(head==NULL)
    {
        head=node;
        node->link=head;
    }
    else
    {
        node->link=head->link;
        head->link=node;
        head=node;
    }
    return head;
}
void inp(element data)
{
    ListNode *node=(ListNode *)malloc(sizeof(ListNode));
    node->data=data;
}
ListNode *head build()
{
    ListNode *head=NULL;
    for(int i=0;i<size;i++)
    {
        head=insert_last(head,'*');
    }
    print_list(head);
    return head;
}
void circle()
{
    int input[99],n;
    ListNode *head=NULL;
    scanf("%s",input);
    if(strcmp(input,"remove")==0)
    {

    }
    else if(strcmp(input,"insert")==0)
    {
        scanf("%d",&n);
        print_list(head);
    }
    if(strcmp(input,"exit")==0)
    {
        printf("Bye.");
    }
    else
        circle();
}
int main()
{
    ListNode *head=NULL;
    printf("Queue size =? ");
    scanf("%d",&size);
    head=build();
    circle(head);
    return 0;
}
