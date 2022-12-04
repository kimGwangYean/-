#include <stdio.h>
#include <stdlib.h>
int number(int k,int c)
{
    c++;
    if(k>100)
    {
        k=(k/100)*(((k-(k/100)*100)/10))*((k-(k/100)*100)%10);
        if(k<10)
        {
            return c;
        }
        else
            number(k,c);
    }
    else if(k>10 && k<100)
    {
        k=(k/10)*(k%10);
        if(k<10)
        {
            return c;
        }
        else
            number(k,c);
    }
}
