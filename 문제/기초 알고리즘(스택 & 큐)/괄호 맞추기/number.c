#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int num(char *ho)
{
    int k,i,check=0,t=1,c=0;
    k=strlen(ho)-1;
    int *number;
    number=(int*)malloc(sizeof(int)*k);
    for(i=0;i<k;i++)
    {
        number[i]=0;
    }
    for(i=0;i<k;i++)
    {

        if(ho[i]==')')
        {
            number[i]=t;
            if(ho[i-1]=='(')
            {
                number[i-1]=t;
            }
            t++;
        }
        else
        {
            c++;
        }
    }
    i=0;
    while(i<k)
    {
        if(number[i]==0)
        {
            number[i]=c;
            c--;
        }
        i++;
    }
    return number;
}
