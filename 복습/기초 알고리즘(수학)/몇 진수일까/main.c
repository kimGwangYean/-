#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a[999];
char b[999];
int A[999];
int B[999];
int n=2;
int jinsu()
{
    int i,j,k=1,x,y,check=0;
    x=strlen(a);
    y=strlen(b);
    for(i=0;i<x;i++)
    {
        if(i!=0)
        {
            k*=n;
        }
        if((a[x-i-1])-48<n)
            A[n]+=((a[x-i-1])-48)*k;
    }
    k=1;
    for(i=0;i<y;i++)
    {
        if(i!=0)
        {
            k*=n;
        }
        if((b[x-i-2])-48<n)
            B[n]+=((b[x-i-2])-48)*k;
    }
    if(n<=35)
    {
        n++;
        jinsu();
    }
    else
    {
        for(i=2;i<=35;i++)
        {
            for(j=2;j<=35;j++)
            {
                if(A[i]==B[j])
                {
                    printf("%d %d",i,j);
                    check++;
                    break;
                }
            }
        }
        if(check==0)
        {
            printf("0 0");
        }
    }
}
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    fscanf(in,"%s %s",&a,&b);
    jinsu();
    return 0;
}
