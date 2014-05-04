/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/01/12 22時12分49秒
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
#include <dlfcn.h>

int main(int argc, char* argv[])
{
    void* handle;
    int (*add)(int, int);
    char* error;

    handle = dlopen("libadd.so", RTLD_LAZY);
    if ( !handle ) {
        fprintf(stderr, "%s\n", dlerror()); 
        exit(EXIT_FAILURE);
    }

    add = dlsym(handle,"add");
    if ((error=dlerror()) != NULL) {
        fprintf(stderr, "%s\n", error);
        exit(EXIT_FAILURE);
    }
    
    printf("%d + %d = %d\n", 1, 2, add(1,2));
    dlclose(handle);

    exit(EXIT_SUCCESS);
}

