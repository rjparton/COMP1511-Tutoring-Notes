// 
// Written by Robbie Parton z51234578 on x-x-2022

#include <stdio.h>

int main() {

    // Infinitely scan in characters until the user presses ctrl-D (EOF)
    // print "the character is 'A' and the ascii value is '65'!"
    char character;
    
    // while (scanf(" %c", &character) == 1) {
    //     printf("The character is '%c' and the ascii value is '%d'!\n", character, character);
    // }
    // while (scanf(" %c", &character) != EOF) {
    //     printf("The character is '%c' and the ascii value is '%d'!\n", character, character);
    // }
    // printf("Enter a character: ");
    // while (scanf(" %c", &character) != 0) {
    //     printf("The character is '%c' and the ascii value is '%d'!\n", character, character);
    //     printf("Enter a number: ");
    // }

    // WON'T WORK!
    // printf("Enter a character: ");
    // while (scanf(" %c", &character) == 0) {
    //     printf("The character is '%c' and the ascii value is '%d'!\n", character, character);
    //     printf("Enter a number: ");
    // }

    // Scan in two characters
    // char character2;
    // printf("Enter two characters: ");
    // while (scanf(" %c %c", &character, character2) == 2) {
    //     printf("The character is '%c' and the ascii value is '%d'!\n", character, character);
    //     printf("Enter a number: ");
    // }
    char character2;
    printf("Enter two characters: ");
    while (scanf(" %c %c", &character,&character2) != EOF) {
        printf("The first character is '%c' and the second is '%c'!\n", character, character2);
        printf("Enter a number: ");
    }


    return 0;
}