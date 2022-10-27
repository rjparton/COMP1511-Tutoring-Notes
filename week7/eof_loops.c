#include <stdio.h>

#define MAX_LETTERS 100

int main (void) {

    // Solution
    // char my_arr[MAX_LETTERS];
    // while (fgets(my_arr, MAX_LETTERS, stdin) != NULL) {
    //     printf("Input: %s\n", my_arr);
    // }

    // "hello" "world"
    // return 0;

    int character = getchar();
    while (character != EOF) {
        // int encrypted_character = encrypt(character, shift);
        character += 1;
        putchar(character);
        character = getchar();
    }

    
}