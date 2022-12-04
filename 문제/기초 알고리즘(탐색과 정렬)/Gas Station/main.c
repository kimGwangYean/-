#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int i,k;
    char price[99],orgin[99];
    fgets(price,99,in);
    k=strlen(price);
    for(i=0;i<k;i++)
    {
        orgin[i]=price[i];
        switch(price[i])
        {
            case '6':
                price[i]='9';
                break;
            case '2':
                price[i]='5';
                break;
        }
    }
    if(strcmp(price,orgin)==0)
    {
        fprintf(out,"The price cannot be raised");
    }
    else
    {
        fprintf(out,"%s",price);
    }
    return 0;
}
