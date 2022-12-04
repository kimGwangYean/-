#include <stdio.h>
#include <stdlib.h>
char result[999];
int t=0;
int count=0;
int up()
{
    if(result[t]>=5)
    {
        if(result[t-1]!=9)
        {
            result[t-1]++;
            result[t]=0;
        }
        else
        {
            t--;
            up();
        }
    }
}
int divide(int a,int b)
{
    if(t<=22)
    {
        result[t++]=a/b+48;
        if(a-b<b && count==0)
        {
            result[t++]='.';
            count++;
        }
        a=a%b*10;
        divide(a,b);
    }
    else
    {
       t--;
       up();
    }
}
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int a,b,i;
    fscanf(in,"%d %d",&a,&b);
    divide(a,b);
    printf("%s",result);
    return 0;
}
