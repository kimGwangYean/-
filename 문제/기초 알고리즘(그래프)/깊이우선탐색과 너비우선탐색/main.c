#include <stdio.h>
#include <stdlib.h>
int giphi(int graph[][32],int visit[][32],int cur)
{
    int i,j,r=0;
    printf("%c",cur+65);
    for(i=0;i<10;i++)
    {
        if(graph[cur][i]==1 && visit[cur][i]==1)
        {
            visit[cur][i]=0;
            for(j=0;j<10;j++)
            {
                visit[j][i]=0;
            }
            giphi(graph,visit,i);
        }
    }
}
int nubi(int graph[][32],int visit[][32],int next[32],int cur,int c)
{
    int i,j;
    if(c==0)
    {
        printf("%c",cur+65);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(graph[i][j]==1 && next[j]==0)
            {
                next[j]=1;
                printf("%c",j+65);
            }
        }
    }
}
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int i,j,n,e,cur;
    int visit[32][32]={0,};
    int graph[32][32]={0,};
    int next[32]={0,};
    char x,y,now;
    fscanf(in,"%d %d\n",&n, &e);
    for(i=0;i<e;i++)
    {
        fscanf(in,"%c %c\n",&x,&y);
        graph[x-65][y-65]=1;
    }
    for(i=0;i<32;i++)
    {
        for(j=0;j<32;j++)
        {
            if(graph[i][j]==1)
            {
                visit[i][j]=1;
            }
        }
    }
    fscanf(in,"%c",&now);
    cur=now-65;
    giphi(graph,visit,cur);
    printf("\n");
    nubi(graph,visit,next,cur,0);
    return 0;
}
