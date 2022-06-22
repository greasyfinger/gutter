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
    bst *new = (bst *)malloc(sizeof(bst));
    new->left = NULL;
    new->right = NULL;
    new->val = val;
    return new;
}
bst *insert(bst *node, bst *root)
{
    if (root == NULL)
    {
        root = node;
        return root;
    }
    if (node->val > root->val)
        return insert(node, root->right);
    else
        return insert(node, root->left);
}
int main()
{
    int arr[] = {2, 7, 5, 3, 6, 9, 12, 16, 13, 4};
    bst *root = NULL;
    for (int i = 0; i < 10; i++)
    {
        insert(initialise(arr[i]), root);
    }
}