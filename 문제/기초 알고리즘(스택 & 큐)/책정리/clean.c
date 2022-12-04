#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int clean(int n, char *book, char *bcase)
{
    FILE *in=fopen("INPUT.TXT.","r");
    FILE *out=fopen("OUPTUT.TXT","w");
    int i,j,c=0;
    char *replace, *bookcase,k;
    replace=(char*)malloc(sizeof(char)*n);
    bookcase=(char*)malloc(sizeof(char)*n);
    for(i=0;i<n/2;i++)
    {
        k=book[i];
        book[i]=book[n-i-1];
        book[n-1-i]=k;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(bcase[i]==book[j])
            {
                bookcase[i]=book[j];
                for(int t=0;t<n-i;t++)
                {
                    book[t]=book[t+1];
                    book[t+1]=0;
                }
                break;
            }
            else
            {
                replace[i]=book[j];
            }
            c++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(bookcase[i]!=bcase[i])
        {
            for(j=0;j<n;j++)
            {
                if(bcase[i]==replace[j])
                {
                    bookcase[i]=replace[j];
                    for(int t=0;t<n-i;t++)
                    {
                        replace[t]=replace[t+1];
                        replace[t+1]=0;
                    }
                    break;
                }
                else
                {
                    book[i]=replace[j];
                }
                c++;
            }
            c++;
        }

    }
    fprintf(out,"%d",c);
}
