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
#include <stdio.h>

struct tnode
{
    int data;
    struct tnode* left;
    struct tnode* right;
};

struct tnode* talloc(int data);
struct tnode* addnode(struct tnode* root, int data);
struct tnode* findnode(struct tnode* root, int data);
void          printnode(struct tnode* node);


int main(int argc, char* argv[])
{
    struct tnode* t = NULL;
    t = addnode(t,3);
    t = addnode(t,1);
    t = addnode(t,2);
    t = addnode(t,4);

    printnode( findnode(t,1) );
    printnode( findnode(t,2) );
    printnode( findnode(t,5) ); // not found
    
    exit(0);
}

/*
 * Implementation
 */
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

struct tnode* findnode(struct tnode* root, int data)
{
    struct tnode* found;

    if ( root == NULL )
        found = NULL;
    else if ( data == root->data )
        found = root;
    else if ( data < root->data )
        found = findnode(root->left, data);
    else
        found = findnode(root->right, data);

    return found;
}

void printnode(struct tnode* node)
{
    if ( node != NULL )
        printf("%d\n", node->data);
}

