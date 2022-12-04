#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *in=fopen("INPUT.TXT.","r");
    FILE *out=fopen("OUPTUT.TXT","w");
    int n,i,k;
    fscanf(in,"%d\n",&n);
    char book[n],bcase[n];
    for(i=0;i<n;i++)
    {
        fscanf(in," %c",&book[i]);
    }
    for(i=0;i<n;i++)
    {
        fscanf(in," %c",&bcase[i]);
    }
    clean(n,book,bcase);
    return 0;
}
