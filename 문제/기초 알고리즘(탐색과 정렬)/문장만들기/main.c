#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    char remove;
    char s[999];
    char a[26]={"abcdefghijklmnopqrstuvwxyz"};
    char c[26]={0,};
    int j,i,y=1,M,check;
    fgets(s,999,in);
    while(1)
    {
        check=0;
        M=0;
        for(i=0;i<25;i++)
        {
            c[i]=0;
        }
        for(i=0;i<strlen(s);i++)
        {
            for(j=0;j<25;j++)
            {
                if(s[i]==a[j])
                {
                    c[j]++;
                }
            }
        }
        for(i=0;i<25;i++)
        {
            if(c[i]>M && c[i]!=0)
            {
                M=c[i];
            }
        }
        for(i=0;i<25;i++)
        {
            if(c[i]==M)
            {
                remove=a[i];
                break;
            }
        }
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]==remove)
            {
                s[i]=' ';
            }
        }
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]!=' ')
            {
                printf("%c",s[i]);
                check++;
            }
        }
        if(check==1)
            break;
    }
    return 0;
}
