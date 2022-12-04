#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int change(int _switch[99],int k)
{
    if(_switch[k-1]==1)
        _switch[k-1]=0;
    else
        _switch[k-1]=1;

    return _switch;

}
int man(int _switch[99],int k,int n,int s)
{
    _switch=change(_switch,k);
    if((k*s)<n)
    {
        k*=s;
        man(_switch,k,n,s);
    }
    return _switch;
}
int woman(int _switch[99],int k,int n,int s)
{

    if(_switch[k-1+s]==_switch[k-1-s])
    {
        _switch=change(_switch,k+s);
        _switch=change(_switch,k-s);
        woman(_switch,k,n,++s);
    }
    return _switch;
}
int main()
{
    FILE *input=fopen("INPUT.TXT","r");
    FILE *output=fopen("OUTPUT.TXT","w");
    int n,N;
    int *_switch,gender[99];
    char number[99];
    fscanf(input,"%d",&n);
    _switch=(int)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        fscanf(input,"%d ",&_switch[i]);
    }
    fscanf(input,"%d",&N);
    for(int i=0;i<N;i++)
    {
        fscanf(input,"%d %d",&gender[i],&number[i]);
    }

    for(int i=0;i<N;i++)
    {
        if(gender[i]==1)
        {
            _switch=man(_switch,number[i],n,2);
        }
        else
        {
            _switch=change(_switch,number[i]);
            _switch=woman(_switch,number[i],n,1);
        }
    }
    for(int i=0;i<n;i++)
    {
        fprintf(out,"%d ",_switch[i]);
    }
    return 0;
}
