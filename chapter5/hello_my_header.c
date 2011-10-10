#include <stdio.h>
#include "calc.h"

int main ()
{
    int i;

    i = add(1,2);
    printf("%d\n", i);

    i = subtract(3,1);
    printf("%d\n", i);
}
