// Robbie Parton
#include <stdio.h>
/*
SPEC:
    Enter size: 5
    *---*
    -*-*-
    --*--
    -*-*-
    *---*

    row = 0, col = 0
    1, 1
    2, 2
    3, 3
    ...
        SO: if row == col, print a star!

    row = 0, col = 4: row size - col. 5 - 4 - 1 = 1
    1, 3
    2, 2
    3, 1
    4, 0

    0,0
    0,4
    1,1
    1,3

    Box
    Enter size 7
    ******* - row = 0, col = all
    *-----* - 
    *-***-* - row = 2, col = (2, 4). col >= row && col < (size - 1) - row
    *-*-*-*
    *-***-*
    *-----*
    *******

*/

/* Plan:
    - Print enter size:
    - scanf() store size
    - initialise row
    - while loop
    - col
    - 2d while loop and print the * and -
    - WHen do I print stars?
        if (col == row || col == size - row - 1)
 */

int main() {
    printf("Enter size ");
    int size;
    scanf(" %d", &size);

    // cross
    int row = 0;
    while (row < size) {
        int col = 0;
        while (col < size) {
            if (col == row || col == size - row - 1) {
                printf("*");
            } else {
                printf("-");
            }
            col += 1;
        }
        printf("\n");
        row += 1;
    }

    printf("\n");

    // box
    int row = 0;
    while (row < size) {
        int col = 0;
        while (col < size) {
            if (col == row || col == size - row - 1) {
                printf("*");
            } else {
                printf("-");
            }
            col += 1;
        }
        printf("\n");
        row += 1;
    }
}
