#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n,i;

    fscanf(in,"%d",&n);
    char origin[n+1];
    for(i=0;i<n;i++)
    {
        origin[i]='a'+i;
    }
    printf("%s",origin);
    return 0;
}
