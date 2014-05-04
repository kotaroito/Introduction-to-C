/*
 * =====================================================================================
 *
 *       Filename:  stdio.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/01/17 09時34分49秒
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
    FILE *fp;
    char c[5] = { '1', '2', '3', '4', '5' };
    int  i[5] = {   1,  2 ,  3 ,  4 ,  5  };

    if ( (fp = fopen("/tmp/foo", "w")) == NULL ) {
        exit(EXIT_FAILURE);
    }

    //fwrite(c, sizeof(char), 5, fp);
    fwrite(i, sizeof(int), 5, fp);
    fclose(fp);

    exit(EXIT_SUCCESS);
}
