#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n,i,k,j;
    char arr[99],ar[99];
    fscanf(in,"%d\n",&n);
    for(i=0;i<n;i++)
    {
        fscanf(in,"%c",&arr[i]);
    }
    fscanf(in,"%d\n",&k);
    for(i=0;i<k;i++)
    {
        fscanf(in,"%s",ar);
        card(arr,ar,n,k);
    }
    return 0;
}
