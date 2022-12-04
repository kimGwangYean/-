#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char object[999];
int n=0;
void compress()
{
    int k=strlen(object);
    int i,j,count=0;
    char capacity;
    for(i=0;i<k;i++)
    {
        count++;
        if(object[i]!=object[i+1])
        {
            capacity=object[i];
            if(count<=3)
            {
                for(j=0;j<count;j++)
                {
                    printf("%c",capacity);
                }
            }
            else
            {
                printf("(%d)",count);
                printf("%c",capacity);
            }
            count=0;
        }
    }
}
void Uncompress()
{
    int k=strlen(object);
    char s;
    int i,j,count=0;
    int paze=1,n=1,here;
    for(i=0;i<k;i++)
    {
        n=1;
        if(object[i]=='(')
        {
            paze=2;
            here=i;
        }
        if(object[i]==')' && paze==2)
        {
            for(j=i-1;j>here;j--)
            {
                count+=n*(object[j]-48);
                n*=10;
            }
            for(j=0;j<count;j++)
            {
                printf("%c",object[i+1]);
            }
            i++;
            count=0;
            paze=1;
        }
        if(count==0 && paze==1)
        {
            printf("%c",object[i]);
        }
    }
}
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    char goal;
    fscanf(in,"%c\n",&goal);
    fgets(object,999,in);
    if(goal=='C')
    {
        compress();
    }
    else if(goal=='U')
    {
        Uncompress();
    }
    return 0;
}
