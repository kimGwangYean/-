#include <stdio.h>
#include <stdlib.h>
#include "head.h"
BinaryTree* insert(BinaryTree *parent,int pos,int value,int drc)
{
    BinaryTree* desc;
    desc=(BinaryTree*)malloc(sizeof(BinaryTree));
    desc->pos=pos;
    desc->value=value;
    desc->left=NULL;
    desc->right=NULL;
    if(drc==0)
    {
        parent->left=desc;
    }
    else
    {
        parent->right=desc;
    }
    return desc;
}
