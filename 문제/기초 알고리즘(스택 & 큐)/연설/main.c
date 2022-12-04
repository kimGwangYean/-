#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int k,c=0,i;
    char arr[999];
    fgets(arr,999,in);
    k=strlen(arr);
    for(i=0;i<k;i++)
    {

        if(arr[i]=='(')
        {
            c++;
        }
        else if(arr[i]==')')
        {
            arr[i]=0;
            c--;
        }
        if(c==1)
        {
            arr[i]-=32;
        }

    }
    for(i=0;i<k;i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}
