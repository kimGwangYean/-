#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n,i,j,q,r=0;
    fscanf(in,"%d",&n);
    int s[n],t[n],c[99]={0},rank[n];
    for(i=0;i<n;i++)
    {
        fscanf(in,"%d",&s[i]);
        t[i]=s[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(t[i]>t[j])
            {
                q=t[i];
                t[i]=t[j];
                t[j]=q;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        //printf("%d ",t[i]);
        for(j=0;j<n;j++)
        {
            if(t[i]==s[j] && c[j]==0)
            {
                if(t[i]==t[i-1])
                {
                    rank[j]=r++;
                }
                else
                {
                    rank[j]=++r;
                }
                c[j]++;
                break;
            }
        }
        //printf("%d\n",rank[j]);
    }
    for(i=0;i<n;i++)
    {
        fprintf(out,"%3d ",s[i]);
    }
    fprintf(out,"\n");
    for(i=0;i<n;i++)
    {
        fprintf(out,"%3d ",rank[i]);
    }
    return 0;
}
