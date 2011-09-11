#include <stdio.h>

int main(void)
{
    int i;
    int *p = &i;

    i = 1;
    printf("%d\n", *p);

    *p = 2;
    printf("%d\n", i);

    i = 3;
    printf("%d\n", *p);
}

