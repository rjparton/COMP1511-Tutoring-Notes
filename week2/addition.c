
#include <stdio.h>

int main(void) {
    int num1 = 1;
    int num2 = 2;
    int num3;
    num3 = 3;

    printf("num1 is: %d\n", num1);

    int addition = num1 + num2;
    printf("addition is: %d\n", addition);

    int subtract = num3 - num2;
    printf("subtract is: %d\n", subtract);

    int divide = num3 / num2;
    printf("divide is: %d\n", divide);

    double two_again = 2.0;

    double divide_double = num3 / two_again;
    printf("divide_double is: %f\n", divide_double);

    //multi
    printf("multipliccation is: %d\n", num3 * num2);

    // modulo
    int mymodulo = 3 % 2;
    printf("mymodulo is: %d\n", mymodulo);
    // 3 / 2 = 1 remainder 1

    int mymodulo2 = 4 % 2;
    printf("mymodulo2 is: %d\n", mymodulo2);
    // 4 / 2 = 2 remainder 0

    // 5 mod 2 = 2??
    // 6 mod 2 = 3 remaind 0

    // Mod 2 allows us to determine whether any number is even or odd
    // Odd numbers = 1 in mod 2
    // Even numbers = 0 in mod 2

    printf("\n\n");

    char my_character = 'A';
    printf("my_character is: %c\n", my_character);
    printf("my_character's decimal value is: %d\n", my_character);

    printf("my_character + 3 is: %c\n", my_character + 3);
    printf("b + 3 is: %c\n", 'b' + 3);
    printf("d - a is: %d\n", 'd' - 'a'); // what number will this print???
    
    // A B C D
    // b c d e

    // c - a = 3
    // 100 - 97 = 3
}