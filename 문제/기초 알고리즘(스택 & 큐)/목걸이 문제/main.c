#include <stdio.h>
#include <stdlib.h>
#include <string.h>/
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int i,j,x,y,max=0,k,c,m,p,r,X,Y;
    char color[999],f;
    fgets(color,999,in);
    k=strlen(color);
    for(i=0;i<k;i++)
    {
        y=0;
        c=2;
        f=color[i];
        if(f!='w')
        {
            for(j=i;j<k;j++)
            {
                if(color[j]!=f && color[j]!='w')
                {
                    c--;
                    if(c==1)
                    {
                        x=j;
                        y=j+1;
                    }
                    f=color[j];
                }
                if(c==0)
                {
                    break;
                }
            }
        }
        else if(f=='w')
        {
            for(j=0;j<k;j++)
            {
                if(color[j]!=f)
                {
                    f=color[j];
                    break;
                }
                r=j;
            }
            for(j=i+y;j<k;j++)
            {
                if(color[j]!=f && color[j]!='w')
                {
                    c--;
                    if(c==1)
                    {
                        y=j+1;
                        x=j;
                    }

                    f=color[j];
                }
                if(c==0)
                {
                    break;
                }
            }
        }
        if(j-i>max)
        {
            max=j-i;
            X=x;
            Y=y;
        }
    }
    fprintf(out,"%d %d %d",max,X,Y);
    return 0;
}
