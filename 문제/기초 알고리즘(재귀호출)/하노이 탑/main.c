#include <stdio.h>
#include <stdlib.h>
int move_hanoi(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return 1+move_hanoi(n-1)*2;
    }
}
int hanoi(int n,int a,int b,int c)
{

    if(n==1)
    {
        if(a==1)
        {
            printf("A ");
        }
        else if(a==2)
        {
            printf("B ");
        }
        else if(a==3)
        {
            printf("C ");
        }
        if(c==1)
        {
            printf("A\n");
        }
        else if(c==2)
        {
            printf("B\n");
        }
        else if(c==3)
        {
            printf("C\n");
        }
    }
    else
    {
        hanoi(n-1,a,c,b);
        hanoi(1,a,b,c);
        hanoi(n-1,b,a,c);
    }
}
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n;
    fscanf(in,"%d",&n);
    printf("%d\n",move_hanoi(n));
    hanoi(n,1,2,3);
}
