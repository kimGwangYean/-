#include <stdio.h>
#include <stdlib.h>

char* Set(int n);
void subset(const char* set,char* result,int n,int m,int l);
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int number,i;
    fscanf(in,"%d",&number);
    char* set;
    char* result;
    set=Set(number);
    result=(char*)malloc(sizeof(char)*number);
    subset(set,result,number,0,0);
    return 0;
}
char* Set(int n)
{
    int i;
    char* set;
    set=(char*)malloc(sizeof(char)*n);
    for(i=0;i<n;i++)
    {
        set[i]=i+'a';
    }
    return set;
}
void subset(const char* set,char* result,int n,int m,int l)
{
   int i;
   if(l==n)
   {
       for(i=0;i<n;i++)
       {
           printf("%c",result[i]);
       }
       printf("\n");
   }
   else
   {result[m]=set[l];
       subset(set,result,n,m+1,l+1);
       subset(set,result,n,m,l+1);

   }
}
