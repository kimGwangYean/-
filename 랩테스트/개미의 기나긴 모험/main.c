#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int x=0,y=0,sum,X,Y,n;
    fscanf(in,"%d",&n);
    for(int i=0;i<n;i++)
    {
        fscanf(in,"%d %d",&X,&Y);
        sum+=abs(X-x);
        sum+=abs(Y-y);
        x=X;
        y=Y;
    }
    printf("%d",sum);
    return 0;
}
