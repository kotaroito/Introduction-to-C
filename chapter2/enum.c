#include <stdio.h>

int main()
{
    enum COLOR { RED=1, BLUE, GREEN };

    enum COLOR color;
    color = RED;

    if ( color == RED ) {
        printf("red\n");
    }
}
