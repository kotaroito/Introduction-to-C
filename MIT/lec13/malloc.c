#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int *ip;
    int *ip2;

    // malloc
    ip = malloc(sizeof(int));
    printf("%d\n", *ip);

    memset(ip, 0, sizeof(int));
    printf("%d\n", *ip);


    // calloc
    ip2 = calloc(1, sizeof(int));
    printf("%d\n", *ip2);

    return 0;
}
