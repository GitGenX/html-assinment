#include<stdio.h>
#include<stdlib.h>

typedef struct Tree T;

struct Tree
{
    int data;
    struct Tree *left;
    struct Tree *right;
};
