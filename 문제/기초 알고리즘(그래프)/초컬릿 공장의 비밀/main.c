#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int i,n,difference=0,result;
    int volume[99];
    fscanf(in,"%d",&n);
    for(i=0;i<n;i++)
    {
        fscanf(in,"%d",&volume[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(volume[i]!=volume[i+1])
        {
            difference++;
        }
    }
    if(difference==0)
    {
        result=0;
    }
    else
    {
        result=share(n,volume);
    }
    printf("%d",result);
    return 0;
}
