#include <stdio.h>
#include <stdlib.h>
float x;
int c=0;
void bunsu(float k)
{
    if(x>=1/k)
    {
        x-=1/k;
        if(c==0)
        {
            printf("1/%.0f",k);
            c++;
        }
        else
            printf("+1/%.0f",k);
    }
    if(x>=0.0000001)
    {
        k++;
        bunsu(k);
    }
}
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    float a,b;
    fscanf(in,"%f %f",&a,&b);
    x=a/b;
    bunsu(2);
    return 0;
}
