/*
 * =====================================================================================
 *
 *       Filename:  race.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/01/22 17時18分06秒
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

unsigned int cnt = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *count(void *arg) 
{
    int i;
    for ( i = 0; i < 100000; i++ ) {
        pthread_mutex_lock(&mutex);
        cnt++;
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main(int argc, char* argv[])
{
    pthread_t tids[4];
    int i;
    
    for ( i = 0; i < 4; i++ ) 
        pthread_create(&tids[i], NULL, count, NULL);
    for ( i = 0; i < 4; i++ ) 
        pthread_join(tids[i], NULL);

    printf("%d\n", cnt);
    pthread_mutex_destroy(&mutex);
    return 0;
}
