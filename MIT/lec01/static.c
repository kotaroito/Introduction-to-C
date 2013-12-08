/*
 * =====================================================================================
 *
 *       Filename:  static.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/11/19 07時36分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "static.h"

static int static_function(void)
{
    return 1;
}

int function(void)
{
    static int i = 0;
    i++;
    return i;
}
