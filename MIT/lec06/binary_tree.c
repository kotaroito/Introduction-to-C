/*
 * =====================================================================================
 *
 *       Filename:  binary_tree.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/12/22 23時32分08秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>

struct tnode
{
    int data;
    struct tnode* left;
    struct tnode* right;
};

struct tnode* talloc(int data)
{
    struct tnode* p = (struct tnode*)malloc(sizeof(struct tnode));
    if ( p!=NULL )
    {
        p->data = data;
        p->left = NULL;
        p->right = NULL;
    }
    return p;
}

struct tnode* addnode(struct tnode* root, int data)
{
    if (root == NULL)
        root = talloc(data);
    else if ( data < root->data )
        root->left = addnode(root->left, data);
    else
        root->right = addnode(root->right, data);

    return root;
}

int main(int argc, char* argv[])
{
    struct tnode* p = NULL;
    p = addnode(p,3);
    p = addnode(p,1);

    exit(0);
}
