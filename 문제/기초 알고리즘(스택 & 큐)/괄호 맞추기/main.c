#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("INPUT.TXT.","r");
    FILE *out=fopen("OUPTUT.TXT","w");
    char gwalho[100];
    int *result;
    int i,k;
    fgets(gwalho,100,in);
    k=strlen(gwalho)-1;
    result=check(gwalho);
    for(i=0;i<k;i++)
    {
        printf("%d ",result[i]);
    }
    return 0;
}
