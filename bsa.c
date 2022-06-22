#include <stdio.h>
#include <stdlib.h>
typedef struct binarytree
{
    int val;
    struct binarytree *left;
    struct binarytree *right;
} bst;
bst *initialise(int val)
{
    bst *new=(bst *)malloc(sizeof(bst));
    new->left=NULL;
    new->right=NULL;
    new->val=val;
    return new;
}
int main()
{
}