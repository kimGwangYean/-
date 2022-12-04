#include <stdio.h>
#include <stdlib.h>
int board[99][99];
int maximum=0;
int maximize(int count)
{
    if(count>maximum)
    {
        maximum=count;
    }
}
int moving(int n,int m, int x, int y,int count)
{
    count+=board[x][y];
    if(y<m-1)
    {
        if(x==0)
        {
            moving(n,m,n-1,y+1,count);
        }
        else
        {
            moving(n,m,x-1,y+1,count);
        }
        moving(n,m,x,y+1,count);
        if(x==n)
        {
            moving(n,m,0,y+1,count);
        }
        else
        {
            moving(n,m,x+1,y+1,count);
        }
    }
    else
        maximize(count);
}
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n,m,k,i,j,result=0;
    fscanf(in,"%d %d %d",&n,&m,&k);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            fscanf(in,"%d",&board[i][j]);
        }
    }
    result=moving(n,m,0,0,0);
    printf("%d",maximum);
    return 0;
}
