#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n,i,j,x,y,result=0,count=0;
    fscanf(in,"%d",&n);
    fscanf(in,"%d %d",&x,&y);
    int c[n][n];
    y--;    x--;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            fscanf(in,"%d",&c[i][j]);
        }
    }
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(c[i][j]==2)
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
