#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int main(int argc, char* argv[]) {
    for (int i = 1; i < argc; ++i) {
        char * last = argv[i];
        int number;
        long long int maximum = strtol(last, &last, 10);
        long long int minimum = maximum;
        while (*last != '\0') {
            number = strtol(last + 1, &last, 10);
            minimum = MIN(number, minimum);
            maximum = MAX(number, maximum);
        }
        printf("%Ld\n", maximum - minimum + 1);
    }
    return 0;
}
