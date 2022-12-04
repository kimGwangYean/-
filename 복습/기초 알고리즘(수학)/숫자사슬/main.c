#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char result[99][99];
int count=0;
int chain(char s[99],int n)
{

    char before[99];
    int k,i,j;
    int check=0;
    for(i=0;i<n;i++)
    {
        result[count][i]=s[i];
        before[i]=result[count][i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(s[i]<s[j])
            {
                k=s[i];
                s[i]=s[j];
                s[j]=k;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(before[i]>before[j])
            {
                k=before[i];
                before[i]=before[j];
                before[j]=k;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(s[i]-before[i]+48>48)
        {
            s[i]=s[i]-before[i]+48;
        }
        else
        {
            s[i-1]--;
            s[i]=s[i]-before[i]+58;
        }
    }

    for(i=0;i<n;i++)
    {
        if(result[count-1][i]==s[i])
        {
            check++;
        }
    }
    count++;
    if(check!=4)
    {
        chain(s,n);
    }
}
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int i,n;
    char s[999];
    fgets(s,999,in);
    n=strlen(s)-1;
    chain(s,n);
    count--;
    fprintf(out,"%d\n",count);
    for(i=0;i<count;i++)
    {
       fprintf(out,"%s\n",result[i]);
    }
    return 0;
}
