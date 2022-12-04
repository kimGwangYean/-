#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n,result;
    fscanf(in,"%d\n",&n);
    result=add(n);
    printf("%d",result);
    return 0;
}
