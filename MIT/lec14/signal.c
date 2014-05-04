#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

void sigproc()
{
    printf("Ctrl-C pressed");
}
void sigquit()
{
    printf("Ctrl-\\ pressed");
    exit(0);
}

int main(void)
{
    signal(SIGINT, sigproc);
    signal(SIGQUIT, sigquit);
    for(;;);

    return 0;
}
