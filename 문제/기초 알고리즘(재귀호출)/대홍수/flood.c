#include <stdio.h>
#include <stdlib.h>

int flood(int n,int x,int y,int c[][n],int result)
{
    int i,j,side=0,k=0;
    c[x][y]=2;
    if(c[x-1][y]==0 && x>0)
    {
        result=flood(n,x-1,y,c,result);
    }
    if(c[x+1][y]==0 && x<n)
    {
        result=flood(n,x+1,y,c,result);
    }
    if(c[x][y-1]==0 && y>0)
    {
        result=flood(n,x,y-1,c,result);
    }
    if(c[x][y+1]==0 && y<n)
    {
        result=flood(n,x,y+1,c,result);
    }
}
