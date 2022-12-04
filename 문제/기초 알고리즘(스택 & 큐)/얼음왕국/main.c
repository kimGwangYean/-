#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int k,i;
    char arr[99];
    fgets(arr,99,in);
    k=strlen(arr);
    for(i=0;i<k;i++)
    {
        if(arr[i]=='h' || arr[i]=='a' || arr[i]=='y')
        {
            arr[i]=0;
        }
    }
    for(i=0;i<k;i++)
    {
        if(arr[i]!=0)
        {
            fprintf(out,"%c",arr[i]);
        }
    }
    return 0;
}
