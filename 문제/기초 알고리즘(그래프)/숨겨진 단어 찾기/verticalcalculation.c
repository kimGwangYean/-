#include <stdio.h>
#include <stdlib.h>
char vertical[99];
int verticalcalculation(char base[][99],char goal[99],int x,int y,int t,int a)
{
    int i,vc=0;
    for(i=0;i<t;i++)
    {
        vertical[i]=base[i][y];
        vc=check(vertical,goal);
        if(vc==1)
        {
            printf("%d %d %d %d \n",x+1,y+1,i+1,y+1);
            return 1;
        }
    }
}
