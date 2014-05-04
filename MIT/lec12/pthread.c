/*
 * =====================================================================================
 *
 *       Filename:  pthread.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/01/21 07時58分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <pthread.h>
#include <stdio.h>

#define MAX_THREADS 500

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *PrintHello(void *threadid) {
    long tid;
    pthread_mutex_lock(&mutex);
    {
        tid = (long)threadid;
        printf("It's me, thread %ld\n", tid);
    }
    pthread_mutex_unlock(&mutex);

    pthread_exit(NULL);
}

int main(int argc, char* argv[])
{
    pthread_t threads[MAX_THREADS];
    int rc;
    long t;

    for ( t = 0; t < MAX_THREADS; t++ ) {
        printf("main: creating thread %ld\n", t);
        rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);
        if (rc) {
            printf("ERROR %d\n", rc);
            exit(-1);
        }
    }
    pthread_exit(NULL);
}
