#include <stdio.h>

main()
{
    printf("%s\n", "Hello, World!");
    printf("Hello, World!\n");

    char string[13] = "Hello, World!!";
    printf("%s\n", string);

    char string2[6];
    string2[0] = 'H';
    string2[1] = 'e';
    string2[2] = 'l';
    string2[3] = 'l';
    string2[4] = 'o';
    string2[5] = '\0';

    printf("%s\n", string2);

}
