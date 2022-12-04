#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *in=fopen("INPUT.TXT.","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int m,n,k,l=2,i,knight[99],last,run[99],r=0;
    fscanf(in,"%d %d %d",&n, &m, &k);
    for(i=1;i<n+1;i++)
    {
        knight[i]=i;
    }
    l=n+1;
    while(l>2)
    {
        run[r]=knight[m];
        knight[m]=0;
        for(i=m;i<l;i++)
        {
            knight[i]=knight[i+1];
        }
        m+=k-1;
        if(m>=l-1)
        {
            if(l>4)
            {
                m=m-l+2;
            }
            else
                m=m-l;
        }
        knight[l-1]=0;
        r++;
        l--;
    }
    for(i=0;i<n-1;i++)
    {
        fprintf(out,"%d ",run[i]);
    }
    fprintf(out,"\n%d",knight[1]);
    return 0;
}
