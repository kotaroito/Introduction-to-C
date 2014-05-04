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

void say(char* str)
{
    printf("%s\n", str);
}

int main(int argc, char* argv[])
{
    void (*psay)(char*) = say;
    say("Hello");
    (*psay)("World!");
    exit(EXIT_SUCCESS);
}
