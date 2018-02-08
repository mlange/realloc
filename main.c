#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *temp = NULL;

    char *new = NULL;

    temp = malloc(10);

    printf("TEMP: %p\n", temp);

    new = realloc(temp, 0);
    printf("TEMP: %p\n", new);

    exit(0);
}

