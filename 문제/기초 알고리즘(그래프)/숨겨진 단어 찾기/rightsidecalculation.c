#include <stdio.h>
#include <stdlib.h>
char rightside[99];
int rightsidecalculation(char base[][99],char goal[99],int x,int y,int t,int a)
{
    int i,rc=0;
    for(i=0;i<t;i++)
        {
            rightside[i]=base[x+i][y+i];
            rc=check(rightside,goal);
            if(rc==1)
            {
                printf("%d %d %d %d \n",x+1,y+1,x+1+i,y+1+i);
                return 1;
            }
        }
}
