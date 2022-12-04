#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int x,y,i,j,result;
    char word[99][99]={0,};
    char need[99][99]={0,};
    fscanf(in,"%d %d\n",&x,&y);
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            fscanf(in,"%c",&word[i][j]);
        }
        fprintf(in,"\n");
    }
    for(i=0;i<3;i++)
    {
        fgets(need[i],99,in);
    }
    for(int k=0;k<3;k++)
    {
        result=0;
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                if(result==0)
                {
                    result=findword(word,need[k],i,j,x,y);

                }
            }
        }
    }
    return 0;
}
