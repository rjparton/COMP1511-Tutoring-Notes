// Does some calculations to make souffle pancakes
// Solution by Paula Tennent (2023)
// Solution fixed by [Angela Shen] [z5480939]

#include <stdio.h>

int main(void) {

    // // 1D array
    // int array[5];
    // for (int i = 0; i < 5; i++) {
    //     array[i];
    // }


    // // 2D array
    int array[5][5]; // array[row][col]
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // set the value
            // array[i][j] = 1;
            array[j][i] = 1;

            printf("%d", array[i][j]);

        }

        // get here, then i++
    }

}

