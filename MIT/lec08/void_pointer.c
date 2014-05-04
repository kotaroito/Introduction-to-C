/*
 * =====================================================================================
 *
 *       Filename:  void_pointer.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/01/03 21時54分42秒
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

int main(int argc, char* argv[])
{
    int    i = 1;
    int*  pi = &i;
    void* vi = &i; 

    printf("%d\n", *(int*)vi);
    exit(EXIT_SUCCESS);
}
