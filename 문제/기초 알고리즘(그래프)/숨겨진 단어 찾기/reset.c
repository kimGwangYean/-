#include <stdio.h>
#include <stdlib.h>
char vertical[99];
char horizontal[99];
char leftside[99];
char rightside[99];
void reset()
{
    int i;
    for(i=0;i<99;i++)
    {
        vertical[i]=0;
        horizontal[i]=0;
        leftside[i]=0;
        rightside[i]=0;
    }
}
