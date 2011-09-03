#include <stdio.h>

int bitcount(unsigned);

int main()
{
   int i;
   for ( i =0 ; i < 10; i++ ) {
       printf("%d has %d bits.\n", i, bitcount(i));
   }
}

int bitcount(unsigned x)
{
    int b = 0;
    while ( x > 0 ) {
        x = x & (x-1);
        b++;
    }

    return b;
}
