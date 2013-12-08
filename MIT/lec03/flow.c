/*
 * =====================================================================================
 *
 *       Filename:  flow.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/11/23 23時34分41秒
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

int factorial(int n);

int main(void)
{
    char c = getchar();

    printf("%d\n", factorial(1));
    printf("%d\n", factorial(5));
}

int factorial(int n)
{
    int i,j = 1;
    for ( i = 1; i <= n ; i++ ) {
       j *= i; 
    }

    return j;
}
