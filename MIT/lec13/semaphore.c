/*
 * =====================================================================================
 *
 *       Filename:  semaphore.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/01/22 18時46分25秒
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
#include <pthread.h>
#include <semaphore.h>
#include <errno.h>

#define SLOTS  2
#define ITEMS 10

sem_t mutex, slots, items;

void* produce(void* arg)
{
    int i;
    for ( i = 0; i < ITEMS; i++ ) {
        sem_wait(&slots);
        sem_wait(&mutex);
        printf("produced(%ld):%d\n", (long)pthread_self(), i);
        sem_post(&mutex);
        sem_post(&items);
    }

    return NULL;
}

void* consume(void* arg)
{
    int result;
    int i;
    for ( i = 0; i < ITEMS; i++ ) {
        result = sem_wait(&items);
        if ( result == -1 ) 
            printf("result(%d)\n", errno);
        sem_wait(&mutex);
        printf("consumed(%ld):%d\n", (long)pthread_self(), i);
        sem_post(&mutex);
        sem_post(&slots);
    }
    return NULL;
}

int main(void)
{
    pthread_t tpro, tcons;

    const char *semaphore_mutex = "mutex";
    const char *semaphore_slots = "slots";
    const char *semaphore_items = "items";

    sem_init(&mutex, 0, 1);
    sem_init(&slots, 0, SLOTS);
    sem_init(&items, 0, 0);

    pthread_create(&tpro , NULL, produce, NULL);
    pthread_create(&tcons, NULL, consume, NULL);
    pthread_join(tpro , NULL);
    pthread_join(tcons, NULL);

    sem_destroy(&mutex);
    sem_destroy(&slots);
    sem_destroy(&items);

    return 0;
}
