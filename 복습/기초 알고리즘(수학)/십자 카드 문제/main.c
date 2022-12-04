#include <stdio.h>
#include <stdlib.h>
int clocknumber(int cn)
{
    int c=0,k=1111;
    while(1)
    {
        if(cn==k)
        {
            break;
        }
        if((k+1)%10==0)
        {
            k+=2;
        }
        else
            k++;
        c++;
    }
    return c;
}
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int i,s[10],cn=10000,k,l,result;
    for(i=0;i<4;i++)
    {
        fscanf(in,"%d",&s[i]);
    }
    for(i=0;i<4;i++)
    {
        k=1000*s[0]+100*s[1]+10*s[2]+s[3];
        if(k<cn)
        {
            cn=k;
        }
        l=s[0];
        s[0]=s[1];
        s[1]=s[2];
        s[2]=s[3];
        s[3]=l;
    }
    result=clocknumber(cn);
    fprintf(out,"%d",result);
    return 0;
}
