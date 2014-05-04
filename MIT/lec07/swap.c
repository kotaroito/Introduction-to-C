/*
 * =====================================================================================
 *
 *       Filename:  swap.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/12/31 23時25分57秒
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

void swap(int **a, int **b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
}

void swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp; 
}

int main(int argc, char* argv[])
{
    int a   = 100;
    int *pa = &a;
    int **ppa = &pa;

    int b   = 200;
    int *pb = &b;
    int **ppb = &pb;

   swap(ppa, ppb);
   printf("%d,%d\n", *pa, *pb);

   swap2(pa, pb);
   printf("%d,%d\n", a, b);

   exit(0);
}

