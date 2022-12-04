#include <stdio.h>
#include <stdlib.h>
int unit[99];
int minimum=999;

int minimize(int object)
{
    if(object<minimum)
    {
        minimum=object;
    }
}

int number(int k,int n,int s,int m,int count)
{
    s+=unit[k];
    count++;
    if(s<m)
    {
        for(int i=0;i<n;i++)
        {
            number(i,n,s,m,count);
        }
    }
    else if(s==m)
    {
        minimize(count);
    }
}

int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n,m;
    fscanf(in,"%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        fscanf(in,"%d",&unit[i]);
    }
    for(int i=0;i<n;i++)
    {
        number(i,n,0,m,0);
    }
    printf("%d",minimum);
    return 0;
}
