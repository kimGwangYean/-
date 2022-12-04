#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char stack[10];
int isEmpty(int *top)
{
    if(top==-1)
    {
        return 1;
    }
    else
        return 0;
}
int isFull(int *top)
{
    if(top==9)
    {
        return 1;
    }
    else
        return 0;
}
void push(char chr,int *top)
{
    if (isFull(*top)==0)
        stack[++(*top)]=chr;
}
char pop(int *top)
{
    //printf("%c",stack[*top]);
    if (isEmpty(*top)==0);
       return stack[(*top)--];
}
int main()
{
    FILE *in=fopen("INPUT.TXT.","r");
    FILE *out=fopen("OUPTUT.TXT","w");
    int top=-1,*result;
    char d;
    char ho[100];
    fgets(ho,100,in);
    int k=strlen(ho)-1,i;
    for(i=0;i<k;i++)
    {
        if(ho[i]=='(')
        {
            push(ho[i],&top);
        }
        else if(ho[i]==')')
        {
            d=pop(&top);
        }
    }
    if(top==-1)
    {
        result=num(ho);
        for(i=0;i<k;i++)
        {
            fprintf(out,"%d ",result[i]);
        }
    }
    else
        fprintf(out,"WRONOG EXPRESSION");
    return 0;
}
