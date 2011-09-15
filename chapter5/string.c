#include <stdio.h>

int main (void)
{
    char *pchar = "pchar"; 
    printf("%s\n", pchar);

    char achar[] = "achar"; 
    printf("%s\n", achar);

    printf("%s\n", "double-quotation");

    int a[10] = { 0, 1 };
    int b[]   = { 1, 2 };

    printf("%d\n", *a);
    printf("%d\n", *b);
}
