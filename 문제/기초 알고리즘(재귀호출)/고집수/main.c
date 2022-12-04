#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int p1,p2,n,k,result,c,i,y=0;
    fscanf(in,"%d %d %d",&p1,&p2,&n);
    int s[p2-p1+1];
    for(i=p1;i<=p2;i++)
    {
        c=0;
        k=i;
        result=number(k,c);
        if(result==5)
        {
            s[y]=i;

            y++;

        }
    }
    fprintf(out,"%d\n",y);

    for(i=0;i<y;i++)
    {
        fprintf(out,"%d\n",s[i]);
    }

    return 0;
}
