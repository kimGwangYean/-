#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n,p=1,k=1;
int dice[99];
int max=0;
int m;
void sum()
{
    int s=0,x=0;
    for(int i=1;i<5;i++)
    {
        if(dice[i]>x)
        {
            x=dice[i];
        }
    }
    m+=x;
}
void turning(int l)
{
    int x,y;
    switch(l)
    {
    case 1:
        x=dice[1];
        y=dice[3];
        dice[1]=dice[0];
        dice[3]=dice[5];
        dice[0]=x;
        dice[5]=y;
        break;
    case 2:
        x=dice[2];
        y=dice[4];
        dice[2]=dice[0];
        dice[4]=dice[5];
        dice[0]=x;
        dice[5]=y;
        break;
    case 3:
        x=dice[3];
        y=dice[1];
        dice[3]=dice[0];
        dice[1]=dice[5];
        dice[0]=x;
        dice[5]=y;
        break;
    case 4:
        x=dice[4];
        y=dice[2];
        dice[4]=dice[0];
        dice[2]=dice[5];
        dice[0]=x;
        dice[5]=y;
        break;
    case 5:
        x=dice[5];
        y=dice[0];
        dice[0]=x;
        dice[5]=y;
        break;
    }
    k=dice[5];
}
void turn()
{
    int i;
    if(p==1)
    {
        for(i=0;i<6;i++)
        {
            if(dice[i]==k)
            {
                break;
            }
        }
        turning(i);
    }
    else
    {
        for(i=0;i<6;i++)
        {
            if(dice[i]==k)
            {
                break;
            }
        }
        turning(i);
    }
    sum();

}
void scan()
{
    m=0;
    FILE *in=fopen("INPUT.TXT","r");
    fscanf(in,"%d\n",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<6;j++)
        {
            fscanf(in,"%d",&dice[j]);
        }
        turn();
        p=0;
    }
    p=1;
    if(m>max)
    {
        max=m;
    }
}
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    fscanf(in,"%d\n",&n);
    for(int i=0;i<6;i++)
    {
        scan();
    }
    fprintf(out,"%d\n",max);
    return 0;
}
