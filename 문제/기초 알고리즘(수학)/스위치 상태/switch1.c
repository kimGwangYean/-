#include <stdio.h>
#include <stdlib.h>
int qudtls(int n)
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int i,k,j,y,f,b;
    int *arr,*gender,*number;
    fscanf(in,"%d",&k);
    arr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        fscanf(in,"%d",&arr[i]);
    }
    fscanf(in,"%d",&k);
    gender=(int*)malloc(sizeof(int)*k);
    number=(int*)malloc(sizeof(int)*k);
    for(i=0;i<k;i++)
    {
        fscanf(in,"%d %d",&gender[i],&number[i]);
    }
    for(i=0;i<k;i++)
    {
        y=1;
        if(gender[i]==1)
        {
            while(1)
            {
                j=number[i]*y-1;
                if(arr[j]==0)
                {
                    arr[j]=1;
                }
                else if(arr[j]==1)
                {
                    arr[j]=0;
                }
                //printf("%d\n",j);
                if(number[i]*(y+1)>n)
                {
                    break;
                }
                y++;
            }
        }
        else if(gender[i]==2)
        {
            f=number[i]-1;
            y=1;
            while(1)
            {
                arr[f]=0;
                if(arr[f-y]==arr[f+y])
                {
                    if(arr[f-y]==0)
                    {
                        arr[f-y]=1;
                    }
                    else if(arr[f-y]==1)
                    {
                        arr[f-y]=0;
                    }
                    if(arr[f+y]==0)
                    {
                        arr[f+y]=1;
                    }
                    else if(arr[f+y]==1)
                    {
                        arr[f+y]=0;
                    }
                }
                else
                    break;
                y++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        fprintf(out,"%d",arr[i]);
    }
}
