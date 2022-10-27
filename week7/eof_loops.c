#include <stdio.h>

#define MAX_LETTERS 100

int main (void) {

    // DON'T DO THIS
    // while (scanf == 1)

    // USE EOF
    char character;
    while (scanf("%c", &character) != EOF) {
        printf("%c", character);
        // scanf(" %d", &character);
    }

    // char character2;
    // printf("Enter two characters: ");
    // while (scanf(" %c %c", &character,&character2) != EOF) {
    //     printf("The first character is '%c' and the second is '%c'!\n", character, character2);
    //     printf("Enter a number: ");
    // }
    
}