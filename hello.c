#include <stdio.h>
#include <stdlib.h> 

int main (int argc, char *argv[])
{
    int count = 1;
    int i;

    if (argc > 1)
        count = strtol (argv[1], NULL, 10);

    for (i=0; i<count; i++)
        printf ("Hello world!\n");

    return 0;
}
