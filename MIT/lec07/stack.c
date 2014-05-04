/*
 * =====================================================================================
 *
 *       Filename:  stack.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/01/01 22時34分55秒
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

struct stack {
    int element;
    struct stack* next;
};

void push(struct stack** bp, int element)
{
    struct stack *new_node = (struct stack*)malloc(sizeof(struct stack));

    new_node->element = element;
    new_node->next    = *bp; 
    *bp = new_node;
}

int pop(struct stack** bp)
{
    struct stack *node;
    int element;

    if ( *bp ) {
        node = *bp;
        element = node->element;
        *bp = node->next;
        free(node);
        return element;
    }
    else {
        return 0;
    }
}

int main(int argc, char* argv[])
{
    struct stack* buffer = NULL;

    push(&buffer, 2);
    push(&buffer, 3);
    push(&buffer, 4);
    printf("%d\n", pop(&buffer));
    printf("%d\n", pop(&buffer));
    printf("%d\n", pop(&buffer));

    exit(0);
}
