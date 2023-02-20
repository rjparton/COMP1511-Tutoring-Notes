

// Goal: Write a program that tells me whether the number entered by the user is even or odd

/* Plan:
    - Use scanf to get the user input
    - Use mod 2 to determine whether the inputted number is odd or even
        - use if/else statements
    - If the output is 0, then it's even. Print "That's an even number"
    - If the output is 1, then it's odd. Print "That's an odd number"
 */

#include <stdio.h>

int main(void) {
    printf("Enter a number: ");
    // scan in the entered number
    int user_input = 2;
    scanf("%d", &user_input);

    // check if even
    if (user_input % 2 == 0) {
        printf("That's an even number!\n");
    } else if (user_input % 2 == 1) {
        printf("That's an odd number!\n");
    } // else {
        // printf("That's an odd number!\n");
    // }
    

    // if (user_input % 2 == 1) {
    //     printf("That's an odd number!\n");
    // } 

}