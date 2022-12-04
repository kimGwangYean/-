#include <stdio.h>
#include <stdlib.h>
int clocknumber(int cn)
{
    int c=0,k=1111;
    //printf("%d",cn);
    while(1)
    {

        //printf("%d ",k);
        //printf("%d\n",c);
        if(cn==k)
        {
            break;
        }
        if((k+1)%10==0)
        {
            k+=2;
        }
        else
            k++;
        c++;
    }
    return c;
}
