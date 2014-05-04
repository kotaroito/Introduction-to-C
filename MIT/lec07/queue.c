/*
 * =====================================================================================
 *
 *       Filename:  queue.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/01/02 23時00分37秒
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

struct s_listnode {
    float element;
    struct s_listnode* pnext;
};

struct s_listnode *queue_buffer = NULL;
struct s_listnode *prear = NULL;

void enqueue(float element)
{
    struct s_listnode *newnode = (struct s_listnode*)malloc(sizeof(struct s_listnode)); 
    newnode->element = element;
    newnode->pnext   = NULL;
    
    if ( prear ) {
        prear->pnext = newnode; 
    }
    else {
        queue_buffer = newnode;
    }
    prear = newnode;
}

float dequeue(void)
{
    struct s_listnode *pfront;
    float element;

    if ( queue_buffer ) {
        pfront = queue_buffer;
        element = pfront->element;
        queue_buffer = pfront->pnext;

        if ( pfront == prear ) {
            prear = NULL;
        }
        free(pfront);
        return element;
    }
    else {
        return 0;
    }
}

int main(int argc, char* argv[])
{
    int i;
    for ( i = 0; i < 10; i++ ) {
        enqueue(0.1 * i);
    }

    for ( i = 0; i < 10; i++ ) {
        printf("%f\n", dequeue());
    }

    exit(0);
}
