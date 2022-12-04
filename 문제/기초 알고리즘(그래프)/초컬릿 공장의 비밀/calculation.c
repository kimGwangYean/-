#include <stdio.h>
#include <stdlib.h>
int calculation(int n,int volume[99])
{
    int i,box[n],maximum=0,minimum=999;
    for(i=0;i<n/2;i++)
    {
        box[i]=volume[i]+volume[n-1-i];
    }
    for(i=0;i<n/2;i++)
    {
        if(box[i]>maximum)
        {
            maximum=box[i];
        }
        if(box[i]<minimum)
        {
            minimum=box[i];
        }
    }
    return maximum-minimum;
}
