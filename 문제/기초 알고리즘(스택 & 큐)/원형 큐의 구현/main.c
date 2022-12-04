#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,k,y=0,c,i,x;
    printf("Queue size =? ");
    scanf("%d",&n);
    char check[99];
    int arr[n];
    for(i=0;i<n;i++)
    {
        arr[i]=0;
    }
    while(1)
    {
        scanf("%s",check);
        if(check[0]=='r')
        {
            if(arr[y]==0)
                printf("    Underflow");
            else
            {
                arr[y]=0;
                for(i=0;i<n;i++)
                {
                    printf("%d ",arr[i]);
                }
            }
        }
        else if(check[0]=='i')
        {
            scanf("%d",&c);
            if(y>=n)
            {
                printf("    Overflow\n");
                y=0;
                x++;
            }
            else
            {
                arr[y]=c;
                x=0;
            }
            for(i=0;i<n;i++)
            {
                printf("%d ",arr[i]);
            }
        }
        else if(check[0]=='e')
        {
            printf("ªµªèªÊªé.");
            break;
        }
        k=strlen(check);
        printf("\n");
        if(arr[y]!=0 && x==0)
        {
            y++;
        }
        //printf("%d\n",y);
    }
    return 0;
}
