#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("INPUT.TXT.","r");
    FILE *out=fopen("OUPTUT.TXT","w");
    int n,i;
    fscanf(in,"%d",&n);
    int car[n];
    for(i=0;i<n;i++)
    {
        fscanf(in,"%d",&car[i]);
    }
    sort(n,car);
    return 0;
}
