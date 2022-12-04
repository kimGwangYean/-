#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char result[99]={0,};
int unpress(int i,int y,char arr[99])
{
    for(int j=0;j<arr[i]-48;j++)
    {
        result[y++]=arr[i+1];
    }
}
int main()
{
    FILE *input=fopen("INPUT.TXT","r");
    FILE *output=fopen("OUTPUT.TXT","w");
    char arr[99];
    fscanf(input,"%s",arr);
    int y=0;
    for(int i=0;i<strlen(arr);i++)
    {
        if(arr[i]>='1' && arr[i]<='10')
        {
            y=unpress(i++,--y,arr);
        }
        result[y++]=arr[i];
    }
    printf("%s",result);
    return 0;
}
