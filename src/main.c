#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <program> [arguments...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("Target program: %s\n", argv[1]);

    return EXIT_SUCCESS;
}