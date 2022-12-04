#include <stdio.h>
#include <stdlib.h>
char leftside[99];
int leftsidecalculation(char base[][99],char goal[99],int x,int y,int t,int a)
{
    int i,lc=0;
    for(i=0;i<t;i++)
    {
        leftside[i]=base[x+i][y-i];
        lc=check(leftside,goal);
        if(lc==1)
        {
            printf("%d %d %d %d \n",x+1,y+1,x+1+i,y+1-i);
            return 1;
        }
    }
}
