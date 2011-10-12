#include <stdio.h>
#include "my_strcat.h"


int main()
{
    char s[100] = "foo";
    char t[10]  = "bar";
    my_strcat(s, t);
    printf("%s\n", s);
    printf("end\n");
}
