/*
 * =====================================================================================
 *
 *       Filename:  struct.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/12/17 22時55分10秒
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
#include "struct.h"

int main(int argc, char* argv[])
{

    struct point p = { 15, 24 };
    struct point* pp = &p;

    printf("%d\n", p.x);
    printf("%04X\n", p.x);
    printf("%d\n", pp->y);
    exit(0);
}
