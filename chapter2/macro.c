#include <stdio.h>
#define plus(A,B) A+B

int main(void)
{
    int a = 1;
    int b = 2;

    printf("%d+%d=%d\n", a, b, plus(a,b));
}
