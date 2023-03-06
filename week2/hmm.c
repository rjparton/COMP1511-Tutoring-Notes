#include <stdio.h>

char encipherLetter(char character, int num) {
    if (character >= 'a' && character <= 'z') {
        character = character - 'a';   // z - a = 122 - 97 = 25
        character = character + 1;  // character = 26
        character = character + num;    // 26 + 3 = 29
        character = character % 26;     // 29 % 26 = 3
        character = character + 'a' - 1;    // 3 + 97 - 1 = 99
    } else {
        character = character - 'A';   // z - a = 122 - 97 = 25
        character = character + 1;  // character = 26
        character = character + num;    // 26 + 3 = 29
        character = character % 26;     // 29 % 26 = 3
        character = character + 'A' - 1;    // 3 + 97 - 1 = 99
    }
    return character;
}


void determine_ciphering(char letter1, char letter2, char letter3, char letter4) {
    
    printf("Would you like to encipher or decipher this message (e/d)? ");
    char encipher;

    scanf(" %c", &encipher);
    if (encipher == 'e') {
        printf("Enter numbers to encipher by: ");
    } else {
        printf("Enter numbers to dencipher by: ");
    }

    int num1, num2, num3, num4;
    scanf(" %d %d %d %d", &num1, &num2, &num3, &num4);
    
    // encipher ?
    if (encipher == 'e') {
        letter1 = encipherLetter(letter1, num1);
        letter2 = encipherLetter(letter2, num2);
        letter3 = encipherLetter(letter3, num3);
        letter4 = encipherLetter(letter4, num4);
    // or decipher
    } else {
        
    }

    /* 
    z + 5 
    122 + 5 = 127
    127 % 26 = 23. WRONG! 

    'z' - 'a' = 25
    add 1
    

     */

    // print
    printf("%c%c%c%c\n", letter1, letter2, letter3, letter4);

}

////////////////////////////////////////////////////////////////////////////////
///////////////////// DO NOT EDIT THIS MAIN FUNCTION ///////////////////////////
////////////////////////////////////////////////////////////////////////////////
// This main function scans a message and then calls your determine_ciphering
// procedure, passing in the message.
int main(void) {
    // Have a think about how we might implement this with a `struct message`
    // once we've covered structs in the Thursday lecture!
    char letter1;
    char letter2;
    char letter3;
    char letter4;
    // Scan message into the four characters
    printf("Message: ");
    scanf(
        "%c %c %c %c",
        &letter1, &letter2, &letter3, &letter4
    );

    // Call your determine_ciphering function and pass in the message.
    determine_ciphering(letter1, letter2, letter3, letter4);

    return 0;
}