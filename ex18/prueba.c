#include <stdio.h>

int main(int argc, char *argv[]) {
    // Check if there are arguments passed
    if (argc == 1) {
        printf("No arguments passed.\n");
    } else {
        // Loop through all arguments and display them
        printf("Arguments passed to the program:\n");
        for (int i = 0; i < argc; i++) {
            printf("Argument %d: %s\n", i, argv[i]);
        }
    }

    return 0;
}

