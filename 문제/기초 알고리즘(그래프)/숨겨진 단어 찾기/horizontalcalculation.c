#include <stdio.h>
#include <stdlib.h>
char horizontal[99];
int horizontalcalculation(char base[][99],char goal[99],int x,int y,int t,int a)
{
    int i,hc=0;
    for(i=0;i<a;i++)
    {
        horizontal[i]=base[x][i];
        hc=check(horizontal,goal);
        if(hc==1)
        {
            printf("%d %d %d %d\n",x+1,y+1,x+1,i+1);
            return 1;
        }
    }
}
