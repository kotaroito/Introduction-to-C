/*
 * =====================================================================================
 *
 *       Filename:  strcpy.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/01/09 09時17分54秒
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
    char new[1024];
    const char *str = "test";

    strcpy(new, str);
    printf("%s\n", str);
    printf("%s\n", new);
    exit(EXIT_SUCCESS);
}
