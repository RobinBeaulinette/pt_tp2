#include "tp2.h"
#include <stdio.h>
#include <stdlib.h>

char *get_first_arg(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("no argument\n\n");
        exit(0);
    }
    return (argv[1]);
}

int main(int argc, char *argv[])
{

    char *arg = get_first_arg(argc, argv);

    printf("Chaine entree: %s", arg);
    upper(arg);
    printf(" \nEN MAJUSCULE : %s", arg);
    return 0;
}
