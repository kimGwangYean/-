#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n;
    fscanf(in,"%d",&n);
    galbi(n);
    return 0;
}
