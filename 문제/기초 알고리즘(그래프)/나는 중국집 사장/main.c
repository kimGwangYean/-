#include <stdio.h>
#include <stdlib.h>
int road(int target,int current,int n,int roadmap[][99])
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(i==target && roadmap[current][i]==1)
        {
            return 2;
        }
        else if(i==target && roadmap[current][i]==0)
        {
            return 2;
           road(target--,current,n,roadmap);
        }
    }
}
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int N,R,x,y,i,j,result=0;
    fscanf(in,"%d %d",&N,&R);
    int graph[99][99]={0,};
    for(i=0;i<N;i++)
    {
        fscanf(in,"%d %d",&x,&y);
        graph[x][y]=1;
        graph[y][x]=1;
    }
    for(i=1;i<=N;i++)
    {
        result+=road(i,1,N,graph);
    }
    printf("%d",result);
    return 0;
}
