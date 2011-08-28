#include <stdio.h>

main() 
{
   int c;
   int tcnt;
   int scnt;
   int ncnt;

   while ( (c = getchar()) != EOF ) {
        if ( c == '\t' )
            tcnt++;
        if ( c == '\n' )
            ncnt++;
        if ( c == ' ' ) 
            scnt++;
   }

   printf("tab:%d, space:%d, linefeed:%d\n", tcnt, scnt, ncnt);
}

