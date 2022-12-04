#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n,x,y;
    fscanf(in,"%d %d %d",&n,&x,&y);
    for (int i=1; i<=n; i++)
    {
        for (int j=1;j<=n;j++)
        {
            fprintf(out,"%2d ",abs(i-x)+abs(j-y)+1);
        }
        fprintf(out,"\n");
    }
    return 0;
}
