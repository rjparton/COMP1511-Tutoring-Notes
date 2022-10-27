#include <stdio.h>

#define MAX_LINE 4096

int main(void) {
    char line[MAX_LINE];

    while (fgets(line, MAX_LINE, stdin) != NULL) {
        printf("%s", line);
        printf("%s", line);
    }
    return 0;
}