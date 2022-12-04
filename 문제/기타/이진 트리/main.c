#include <stdio.h>
#include <stdlib.h>
#include "head.h"
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    int x,y,a,b,i,t;
    fscanf(in,"%d %d",&x,&y);
    BinaryTree *root;
    root=(BinaryTree*)malloc(sizeof(BinaryTree));
    root->left=NULL;
    root->right=NULL;
    root->pos=1;
    root->value=0;
    BinaryTree *bt[y];
    for(i=0;i<y;i++)
    {
        bt[i]=(BinaryTree*)malloc(sizeof(BinaryTree));
        bt[i]->left=NULL;
        bt[i]->right=NULL;
    }
    for(i=1;i<=y;i++)
    {
        fscanf(in,"%d %d %d",&t,&a,&b);
        if(i==0)
        {
            bt[i]=insert(root,a,b);
        }
        else
            bt[i]=insert(,a,b);
        printf("%d %d %d\n",t,bt[i]->pos,bt[i]->value);
    }
    return 0;
}
