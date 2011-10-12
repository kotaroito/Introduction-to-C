#include <stdio.h>
#include "my_strcat.h"

void my_strcat (char s[], char t[]) 
{
   // もうちょっと短く書ける？
   while ( *s != '\0' ) {
       s++;
   }

   while ( *t != '\0' ) {
        *s = *t;
        s++; t++;
   }
           
}
