// Robbie PPPPPPP

/* 
    STATEMENTS:
        the sky is green - false
        the sky is blue - true
        1 < 0 - false
        0 < 1 - true
        3 % 2 == 1 - true 


    // HOW WHILE STATEMENTS WORK
    while (STATMENT) {
        // DO THIS STUFF WHILE THE STATEMENT IS TRUE
    }
*/

/* SPEC:
    Printing a 1D while loop
    0
    1
    2
    We are now executing code after the 1D while loop!
    Printing a 2D while loop
    row = 0
        row = 0, col = 0
        row = 0, col = 1
        row = 0, col = 2
    row = 1
        row = 1, col = 0
        row = 1, col = 1
        row = 1, col = 2
    row = 2
        row = 2, col = 0
        row = 2, col = 1
        row = 2, col = 2
    We are now executing code after the 2D while loop!
    Printing a 2D while loop a different way
    0, 0
    0, 1
    0, 2
    1, 0
    1, 1
    1, 2
    2, 0
    2, 1
    2, 2
    We are now executing code after the 2D while loop!
 */

#include <stdio.h>

int main(void) {
    
    // 1D WHILE LOOPS
    int size = 3;
    int row = 0; // row is normally referred to as i
    printf("Printing a 1D while loop\n");
    while (row < size) {
        printf("%d\n", row);
        row = row + 1;
    }

    printf("We are now executing code after the 1D while loop!\n");

    // 2D WHILE LOOPS
    size = 3;
    row = 0;
    printf("Printing a 2D while loop\n");
    while (row < size) {
        printf("row = %d\n", row);

        int col = 0; // col is normally referred to as j
        while (col < size) {
            printf("    row = %d, col = %d\n", row, col);
            col = col + 1;
        }
        row = row + 1;
    }
    printf("We are now executing code after the 2D while loop!\n");

    // 2D WHILE LOOPS
    // size = 3;
    // row = 0;
    // printf("Printing a 2D while loop a different way\n");
    // while (row < size) {

    //     int col = 0; // col is normally referred to as j
    //     while (col < size) {
    //         printf("%d, %d\n", row, col);
    //         col = col + 1;
    //     }
    //     row = row + 1;
    // }
    // printf("We are now executing code after the 2D while loop!\n");

    return 0;
}


//////////////////////
//     ANSWER       //
//////////////////////

// int main(void) {
    
//     // 1D WHILE LOOPS
//     int size = 3;
//     int row = 0; // row is normally referred to as i
//     printf("Printing a 1D while loop\n");
//     while (row < size) {
//         printf("%d\n", row);
//         row = row + 1;
//     }

//     printf("We are now executing code after the 1D while loop!\n");

//     // 2D WHILE LOOPS
//     size = 3;
//     row = 0;
//     printf("Printing a 2D while loop\n");
//     while (row < size) {
//         printf("row = %d\n", row);

//         int col = 0; // col is normally referred to as j
//         while (col < size) {
//             printf("    row = %d, col = %d\n", row, col);
//             col = col + 1;
//         }
//         row = row + 1;
//     }

//     printf("We are now executing code after the 2D while loop!\n");

//     // 2D WHILE LOOPS
//     size = 3;
//     row = 0;
//     printf("Printing a 2D while loop a different way\n");
//     while (row < size) {

//         int col = 0; // col is normally referred to as j
//         while (col < size) {
//             printf("%d, %d\n", row, col);
//             col = col + 1;
//         }
//         row = row + 1;
//     }

//     printf("We are now executing code after the 2D while loop!\n");

//     return 0;
// }
