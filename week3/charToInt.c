// Robbie PPPPPPP

#include <stdio.h>

int main(void) {
    char sixtyfive = 65;
    printf("Let's print the number 65 as a character is "%c"\n", sixtyfive);

    char myChar;

    printf("Enter a character: ");
    scanf("%c", &myChar);

    printf("The char is: %c\n", myChar);
    printf("myChar's decimal value in ASCII is: %d\n", myChar);


    // WE CAN COMPARE CHARACTERS AND NUMBERS (ASCII NUMBERS)

    // if (myChar >= 97 && myChar <= 122) {
    //     printf("Well, it looks like the character is lowercase!\n");
    // } else if (myChar >= 65 && myChar <= 90) {
    //     printf("Well, it looks like the character is uppercase!\n");
    // } else if (myChar >= 48 && myChar <= 57) {
    //     printf("Well, it looks like the character is a number!\n");
    // }

    // EVEN BETTER WAY - WE CAN COMPARE CHARACTERS DIRECTLY
    if (myChar >= 'a' && myChar <= 'z') {
        printf("Well, it looks like the character is lowercase!\n");
    } else if (myChar >= 'A' && myChar <= 'Z') {
        printf("Well, it looks like the character is uppercase!\n");
    } else if (myChar >= '0' && myChar <= '9') {
        printf("Well, it looks like the character is a number!\n");
    }

    // LETTER ARITHMETIC - WOWOW!

    if (myChar >= 'a' && myChar <= 'z') {
        int letterIndex = myChar - 'a' + 1;
        printf("The letter's alphabet index is: %d\n", letterIndex);
    } else if (myChar >= 'A' && myChar <= 'Z') {
        int letterIndex = myChar - 'A' + 1;
        printf("The letter's alphabet index is: %d\n", letterIndex);
    }
    
    return 0;
}