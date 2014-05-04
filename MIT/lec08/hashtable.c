/*
 * =====================================================================================
 *
 *       Filename:  hashtable.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/01/03 23時12分28秒
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
#include <string.h>

#define MAX_BUCKETS 1000
#define MULTIPLIER 31

struct wordrec
{
    char* word;
    struct wordrec* pnext;
};

struct wordrec* table[MAX_BUCKETS];

unsigned long hashstring(const char* str)
{
    unsigned long hash = 0;
    while (*str) {
        hash = hash * MULTIPLIER + *str;
        str++;
    }

    return hash % MAX_BUCKETS;
}

struct wordrec* lookup(const char* str, int create)
{
    struct wordrec* curr = NULL;
    unsigned long hash = hashstring(str);
    char strnew[1024];

    struct wordrec* wp = table[hash];

    for ( curr = wp; curr != NULL; curr = curr->pnext ) {
        if ( strcmp(curr->word, str) == 0 ) {
            return curr;
        }
    }

    if ( create ) {
        strcpy(strnew, str);

        curr = (struct wordrec*)malloc(sizeof(struct wordrec*));
        curr->word  = strnew;
        curr->pnext = NULL;

        if (wp == NULL) {
            table[hash] = curr;
        }

        return curr;
    }
    
    return NULL;
}

int main(int argc, char* argv[])
{
    struct wordrec* found = (struct wordrec*)malloc(sizeof(struct wordrec*));
    lookup("foo", 1);
    found = lookup("foo", 0);
    if ( found !=NULL )
        printf("%s\n", found->word);

    lookup("bar", 1);
    found = lookup("bar", 0);
    if ( found !=NULL )
        printf("%s\n", found->word);

    exit(EXIT_SUCCESS);
}
