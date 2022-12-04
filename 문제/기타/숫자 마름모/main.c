#include <stdio.h>
#include <stdlib.h>
int rhombus(int m,int n)
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int i,j,k,l=0;
    for(i=0;i<2*m-1;i++)
    {
        k=n;
        if(i<m)
        {
            l++;
            for(j=0;j<m-i;j++)
            {
                fprintf(out,"  ");
            }
            for(j=0;j<2*l-1;j++)
            {
                fprintf(out,"%2d",k);
                if(j<l-1)
                {
                    if(k==0)
                    {
                        k=9;
                    }
                    else
                        k--;
                }
                else
                {
                    if(k==9)
                    {
                        k=0;
                    }
                    else
                        k++;
                }
            }
        }
        else
        {
            l--;
            for(j=0;j<i-m+2;j++)
            {
                fprintf(out,"  ");
            }
            for(j=0;j<2*l-1;j++)
            {
                fprintf(out,"%2d",k);
                if(j<l-1)
                {
                    if(k==0)
                    {
                        k=9;
                    }
                    else
                        k--;
                }
                else
                {
                    if(k==9)
                    {
                        k=0;
                    }
                    else
                        k++;
                }
            }
        }
        fprintf(out,"\n");
    }
}
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int m,n,k;
    fscanf(in,"%d %d",&m,&n);
    rhombus(m,n);
    return 0;
}
