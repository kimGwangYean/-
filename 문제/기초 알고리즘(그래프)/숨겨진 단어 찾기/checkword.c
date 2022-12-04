#include <stdio.h>
#include <stdlib.h>
int check(char target[99],int goal[][99])
{
    int k;
    k=strlen(goal)-1;
    if(strncmp(target,goal,k)==0)
    {

        return 1;
    }
    else
        return 0;
}
