#include <stdio.h>
#include <stdlib.h>
int unit[]={1,2,3};
int count=0;
int up(int k,int n,int s)
{
    s+=unit[k];
    if(s<n)
    {
       for(int i=0;i<n;i++)
        {
            up(i,n,s);
        }
    }
    else if(s==n)
    {
        count++;
    }
}
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n;
    fscanf(in,"%d",&n);
    for(int i=0;i<n;i++)
    {
        up(i,n,0);
    }
    printf("%d",count);
}
