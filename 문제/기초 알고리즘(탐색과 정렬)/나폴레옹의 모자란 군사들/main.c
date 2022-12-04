#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n,i,l=0,r=0,j,k;
    fscanf(in,"%d",&n);
    int armyl[n],armyr[n];
    for(i=0;i<n;i++)
    {
        fscanf(in,"%d",&armyl[i]);
        armyr[i]=armyl[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(armyl[i]>armyl[j])
            {
                k=armyl[i];
                armyl[i]=armyl[j];
                armyl[j]=k;
                l++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(armyr[i]<armyr[j])
            {
                k=armyr[i];
                armyr[i]=armyr[j];
                armyr[j]=k;
                r++;
            }
        }
    }
    if(l>r)
    {
        fprintf(out,"RIGHT");
    }
    else if(l<r)
    {
        fprintf(out,"LEFT");
    }
    else if(l=r)
    {
        fprintf(out,"IDGARA");
    }
    return 0;
}
