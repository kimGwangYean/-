#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int effect(int n)
{
    int i,j,k;
    char **f;
    f=(char**)malloc(sizeof(char*)*n);
    for(i=0;i<n;i++)
    {
        f[i]=(char*)malloc(sizeof(char)*n*10);
    }
    for(i=0;i<n;i++)
    {
        f[i][0]=i+49;
        f[i][1]=0;
        if(i!=0)
        {
            strcat(f[i],f[i-1]);
        }
        if(i>1)
        {
            strcat(f[i],f[i-2]);
        }
    }
    k=strlen(f[n-1]);
    for(i=0;i<k;i++)
    {
        printf("%c ",f[n-1][i]);
    }
}
