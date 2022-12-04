#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int x,y;
    fscanf(in,"%d %d",&x, &y);
    bunsu(x,y);
    return 0;
}
