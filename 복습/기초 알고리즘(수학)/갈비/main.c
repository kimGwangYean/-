#include <stdio.h>
#include <stdlib.h>
int n;
int origin;
void sosu(int k,int l)
{

    int c=0,i;
    char check;
    if(k==1)
    {
        c++;
    }
    for(i=2;i<k;i++)
    {
        if(k%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        if(l>n-1 && k>10)
        {
            sosu((k-k%10)/10,l--);
        }
        else
            printf("%d\n\n",origin);
    }

}
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    fscanf(in,"%d",&n);
    int x=1,y=1,i;
    for(i=0;i<n-1;i++)
    {
        x*=10;
    }
    for(i=0;i<n;i++)
    {
        y*=10;
    }
    for(i=x;i<y;i++)
    {
        origin=i;
        sosu(i,n);
    }
    return 0;
}
