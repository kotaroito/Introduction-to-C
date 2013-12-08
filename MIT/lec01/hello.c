/*
 * =====================================================================================
 *
 *       Filename:  hello.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/11/17 22時41分08秒
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
#include "static.h"

int main(void)
{
    int i;
    for ( i = 0; i < 3; i++ ) {
        printf("Hello Static Variable%d\n", function());
    }
    exit(0);
}
