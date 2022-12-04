#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char result[99];
typedef struct stack
{
    int top;
    char arr[100];
} stack;
void reset(stack *s)
{
    s->top=-1;
}
void push(stack* s,char k)
{
    s->top++;
    s->arr[s->top];
}
void pop(stack* s)
{
    s->arr[s->top];
    s->top--;
}
char change(char object)
{
    if(object>'a' && object<'z')
    {
        object-=32;
    }
    else if(object>'A' && object<'Z')
    {
        object+=32;
    }
    return object;
}
void emphasize(char speech[99],int k)
{
    stack s;
    int n;
    for(int i=0;i<k;i++)
    {
        if(s.top%2==1)
        {
            speech[i]=change(speech[i]);
        }
        if(speech[i]=='(')
        {
            push(&s,speech[i]);
        }
        else if(speech[i]==')')
        {
            pop(&s);
        }
        else
        {
            result[n++]=speech[i];
        }
    }
}
int main()
{
    FILE *input=fopen("INPUT.TXT","r");
    FILE *output=fopen("OUTPUT.TXT","w");
    stack s;
    reset(&s);
    char speech[99];
    fgets(speech,99,input);
    emphasize(speech,strlen(speech));
    printf("%s",result);
    return 0;
}
