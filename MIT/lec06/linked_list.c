/*
 * =====================================================================================
 *
 *       Filename:  linked_list.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/12/22 22時06分13秒
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

struct node
{
    int data;
    struct node* next;
};

struct node* nalloc(int data)
{
    struct node* p = (struct node*)malloc(sizeof(struct node));
    if ( p != NULL )
    {
        p->data = data;
        p->next = NULL;
    }
    return p;
}

struct node* addfront(struct node* head, int data)
{
    struct node* p = nalloc(data);

    if (p==NULL) return head;
    p->next = head;
    return p;
}

int main(int argc, char* argv[])
{
    struct node* np;
    np = addfront(np, 1);
    np = addfront(np, 2);
    np = addfront(np, 3);

    do {
        printf("%d\n", np->data);
        np = np->next; 
    } while (np != NULL);

    exit(0);
}

