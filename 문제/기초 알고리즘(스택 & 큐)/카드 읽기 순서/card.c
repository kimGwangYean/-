#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char card(char *arr,char *ar,int n,int k)
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int i,j,l,c=0,r;
    char *check,*check1;
    char p;
    check=(char*)malloc(sizeof(char)*n);
    check1=(char*)malloc(sizeof(char)*n);
    check=ar;
    for(i=0;i<n;i++)
    {
        p=check[0];
        for(j=0;j<n-1;j++)
        {
            check[j]=check[j+1];
        }
        check[n-1]=p;
        for(j=n-1;j>=0;j--)
        {
            check1[n-j-1]=check[j];
        }
        if(strcmp(arr,check)==0 || strcmp(arr,check1)==0)
        {
            c++;
        }
    }
    if(c!=0)
    {
        printf("Y\n");
    }
    else
        printf("N\n");
}
