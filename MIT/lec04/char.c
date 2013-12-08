/*
 * =====================================================================================
 *
 *       Filename:  char.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/12/08 16時17分15秒
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
    char str[] = "Hello";
    printf("%d\n", (int)strlen(str));

    printf("%d\n", strcmp("Hello", "Helloo"));
}
