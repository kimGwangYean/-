#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n,i,s[999],c=1,g,j;
    int N[999];
    fscanf(in,"%d",&n);
    for(i=0;i<n;i++)
    {
        fscanf(in,"%d",&s[i]);
    }
    for(i=0;i<n/2;i++)
    {
        g=s[i];
        N[i]=c++;
        for(j=i+1;j<n;j++)
        {
            if(s[j]==g)
            {
                N[j]=c++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",N[i]);
    }
    return 0;
}
