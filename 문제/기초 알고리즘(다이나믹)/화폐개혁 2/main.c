#include <stdio.h>
#include <stdlib.h>
int unit[99];
int count=0;
int scenario(int k,int s,int n)
{
    s+=unit[k];
    if(s<20)
    {
       for(int i=k;i<n;i++)
        {
            scenario(i,s,n);
        }
    }
    else if(s==20)
    {
        count++;
    }

}

int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n,i,prize;
    fscanf(in,"%d",&n);
    for(i=0;i<n;i++)
    {
        fscanf(in,"%d",&unit[i]);
    }
    fscanf(in,"%d",&prize);
    for(i=0;i<n;i++)
    {
        scenario(i,0,n);
    }
    printf("%d",count);
    return 0;
}
