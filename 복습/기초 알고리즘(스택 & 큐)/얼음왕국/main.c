#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print(char arr[99])
{
    FILE *output=fopen("OUTPUT.TXT","w");
    for(int i=0;i<strlen(arr);i++)
    {
        if(arr[i]!= 'h' && arr[i]!='a' && arr[i]!='y')
            fprintf(output,"%c",arr[i]);
    }
}
int main()
{
    FILE *input=fopen("INPUT.TXT","r");
    FILE *output=fopen("OUTPUT.TXT","w");
    char arr[99];
    fgets(arr,99,input);
    print(arr);
    return 0;
}
