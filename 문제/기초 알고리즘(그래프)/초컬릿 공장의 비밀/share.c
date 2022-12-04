#include <stdio.h>
#include <stdlib.h>
int share(int n,int volume[99])
{
    int i,changing,result;
    for(i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(volume[i]>volume[j])
            {
                changing=volume[i];
                volume[i]=volume[j];
                volume[j]=changing;
            }
        }
    }
    result=calculation(n,volume);
    return result;
}
