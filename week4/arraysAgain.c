// part1_arrays.c, odd_only
//
// Written by YOUR-NAME (YOUR-ZID)
// on TODAYS-DATE
//
// This program adds 1 to any odd element in an array and after prints
// all elements in the array

#include <stdio.h>

#define SIZE 5

int main(void) {
    // number array
    int numArray[10];

    // int c;
    // c = 3;

    // numArray[0] = 100;
    // numArray[1] = 101;
    // numArray[4] = 104;
    // // numArray[5] = 105; // won't work

    // // assigned values
    // for (int i = 0; i < 10; i++) {
    //     numArray[i] = i;
    // }

    // printf("%d\n", numArray[0]);
    // // // print values in the array
    // for (int i = 0; i < 10; i++) {
    //     printf("%d\n", numArray[i]);
    // }

    // char cArray[SIZE];
    // // assigned values
    // for (int i = 0; i < 5; i++) {
    //     // assign same character to each index
    //     // cArray[i] = 'R';
    //     // A C E G I

    //     // A B C D E
    //     // cArray[i] = 'A' + i; // A + 0 = A , A + 1 = B, A + 2 = C
    //     cArray[i] = 'A' + 2*i;

    // }

    // // print values in the array
    // for (int i = 0; i < 5; i++) {
    //     printf("%c\n", cArray[i]);
    // }


    // int array[5] = {1, 2, 3, 4, 5};

    // int i = 0;
    // while (i < SIZE) {
    //     if (array[i] % 2 == 0) {
    //         array[i] += 1;
    //     }
    //     i++;
    // }


    // // print array
    // int j = 0;
    // while (j < SIZE) {
    //     printf("%d ", array[j]);
    //     j++;
    // }

    // printf("\n");

    // double a[6] = {1,2,3};

    // double b[10] = {0.0};

    // for (int i = 0 ; i < 3; i++) {
    //     b[i] = a[i];
    // }

    // for (int i = 0 ; i < 10; i++) {
    //     printf("%lf\n", b[i]);
    // }

    char c[8];
    for (int i = 0; i < 8; i++) {
        c[i] = 'D' + i;
    }
    char largest_character = c[0];

    for (int i = 0; i < 8; i++) {
        if (c[i] > largest_character) {
            printf("%c\n", c[i]);
        }
    }



    return 0;
}