#include <stdio.h>
#include <stdlib.h>
int findword(char base[][99],char goal[99],int x,int y,int t,int a)
{
    int i,c=0;
    if(c!=1)
    {
        c=horizontalcalculation(base,goal,x,y,t,a);
    }
    if(c!=1)
    {
        c=verticalcalculation(base,goal,x,y,t,a);
    }
    if(c!=1)
    {
        c=leftsidecalculation(base,goal,x,y,t,a);
    }
    if(c!=1)
    {
        c=rightsidecalculation(base,goal,x,y,t,a);
    }
    if(c==1)
    {
        return 1;
    }
    else
        return 0;
}
