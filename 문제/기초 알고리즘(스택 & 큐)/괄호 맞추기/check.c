#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int check(char *gwal)
{
    int k,i,check=0;
    k=strlen(gwal)-1;
    int *back;
    back=(int*)malloc(sizeof(int)*k);
    for(i=0;i<k;i++)
    {

        if(gwal[i]=='(')
        {
            check++;
        }
        else if(gwal[i]==')')
        {
            check--;
        }
        if(check>(k/2))
        {
            printf("WRONG EXPRESSION");
            check=0;
            break;
        }
        else if(check<0)
        {
            printf("WRONG EXPRESSION");
            check=0;
            break;
        }
    }
    if(check!=0)
    {
        printf("WRONG EXPRESSION");
    }
    else
    {
        back=num(gwal);
    }
    return back;
}
