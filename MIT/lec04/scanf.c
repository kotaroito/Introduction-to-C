/*
 * =====================================================================================
 *
 *       Filename:  scanf.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/12/08 16時32分42秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    int i, j;
    scanf("\%d %d", &i, &j);
    printf("%d %d\n", i,j);

    char str[] = "1 2 3";
    int a, b, c;
    sscanf(str, "%d %d %d", &a, &b, &c);
    printf("%d %d %d\n", a, b, c);
}
