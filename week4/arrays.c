// 
// Written by Robbie Parton z51234578 on x-x-2022

#include <stdio.h>

#define SIZE 3

int main() {

    // Create a char array
    char char_array[SIZE];
    // char character;
    // int number;
    // double decimal_number;

    // Create an int array
    int int_array[SIZE] = {0};

    // Create a double array
    double decimal_array[SIZE];

    // How can I initialise all values of the array to 0? - DONE

    // How can I set the first value of char_array to equal 'a'?
    char_array[0] = 'a';
    char_array[1] = 'b';

    // print a and b from char_array
    printf("%c %c\n", char_array[0], char_array[1]);

    // Print our int_array
    // What information do we need: SIZE
    int i = 0;
    while (i < SIZE) {
        printf("%d\n", int_array[i]); 
        i++;
    }
    /* 
    i = 0: int_array[0]
    i = 1: int_array[1]
    ...
    i = 9: int_array[9]
    i = 10: we dont access int_array[10] because, 10 !< 10
     */

    // scan n numbers and store it in an array of size n
    // Let n = 3
    i = 0;
    while (i < SIZE) {
        scanf(" %d", &int_array[i]); 
        i++;
    }

    // print out our new array
    i = 0;
    while (i < SIZE) {
        printf("%d\n", int_array[i]); 
        i++;
    }

    // copy values from int_array and store it in a new array imposter_array
    int imposter_array[SIZE];
    i = 0;
    while (i < SIZE) {
        imposter_array[i] = int_array[i];
        i++;
    }

    i = 0;
    while (i < SIZE) {
        imposter_array[i] = imposter_array[i] + 1;
        printf("%d\n", imposter_array[i]); 
        i++;
    }

    return 0;
}