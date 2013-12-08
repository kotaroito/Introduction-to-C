/*
 * =====================================================================================
 *
 *       Filename:  variables.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/11/23 16時49分14秒
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

int main(void)
{
    unsigned short s = 1;
    const int i = 1;
    long l = 100;
    unsigned long ul = 100UL;

    int io = 012;
    int ix = 0xA;

    float pi = 3.1415;
    double pid = 3.14159L;

    enum answer { NO, YES };


    switch(i) {
        case 1:
            puts("1");
        default: 
            puts("default");
            break;
    }

    printf("\%d\n", YES);
}
