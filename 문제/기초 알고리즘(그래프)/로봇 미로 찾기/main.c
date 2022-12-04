#include <stdio.h>
#include <stdlib.h>
const int miro[11][11];
int road(int miro[][11],int x,int y,int r)
{
    int n;
    r++;
    n=miro[x][y+1];
    if(miro[x][y+1]!=1)
    {
        road(miro,x,y+1,r);
    }
    if(miro[x+1][y]!=1 && miro[x+1][y]<n)
    {
        n=miro[x+1][y];
        road(miro,x+1,y,r);
    }
    if(miro[x][y-1]!=1 && miro[x][y-1]<n)
    {
        n=miro[x][y-1];
        road(miro,x,y-1,r);
    }
    if(miro[x-1][y]!=1 && miro[x-1][y]<n)
    {
        n=miro[x][y-1];
        road(miro,x-1,y,r);
    }
    return r;
}
int maze(int miro[][11],int x,int y,int n)
{
    n++;
    int i,j;
    if(miro[x+1][y]==0)
    {
        miro[x+1][y]=n;
    }
    if(miro[x-1][y]==0)
    {
        miro[x-1][y]=n;
    }
    if(miro[x][y+1]==0)
    {
        miro[x][y+1]=n;
    }
    if(miro[x][y-1]==0)
    {
        miro[x][y-1]=n;
    }
}
int outline(int miro[][11],int x1,int x2,int y1,int y2)
{
    miro[x1-1][y1-1]=2;
    //miro[x2-1][y2-1]=99;
    int i;
    for(i=0;i<10;i++)
    {
        miro[x1-2][i]=1;
        miro[x2][i]=1;
        miro[i][y1-2]=1;
        miro[i][y2]=1;
    }
    return miro;
}
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int i,j,x1,y1,x2,y2,n=1,y=0;
    int result=0;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            fscanf(in,"%d",&miro[i][j]);
        }
    }
    fscanf(in,"%d %d",&x1,&y1);
    fscanf(in,"%d %d",&x2,&y2);
    outline(miro,x1,x2,y1,y2);
    while(y<12)
    {
        n++;
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                printf("%3d",miro[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                if(miro[i][j]==n)
                {
                    maze(miro,i,j,n);
                }
            }
        }
        y++;
    }
    printf("%d",miro[x2-1][y2-1]-1);
    return 0;
}
