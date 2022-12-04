#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n,s[999],i;
    fscanf(in,"%d",&n);
    for(i=0;i<n;i++)
    {
        fscanf(in,"%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",s[i]);
    }
    return 0;
}
