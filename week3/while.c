
#include <stdio.h>
/*
OXOX
OXOX
OXOX
OXOX
 */
int main() {
    int i = 0;
    int n = 10;
    while (i < n) {
        int j = 0;
        while (j < n) {
            if (i % 2 == 0) {
                printf("O");

            } else {
                printf("X");
            }

            j++;
        }
        printf("\n");

        i++;
    }

    // int i = 0;  // row
    // while (i < 5) {
    //     // executes if condition is true
    //     int j = 0; // row
    //     while (j < 5) {
    //         // printf("i = %d, j = %d\n", i, j);
    //         // printf("%d ", j);

    //         printf("%d ", i * j);
    //         j++;
    //     }
    //     printf("\n");
    //     i++;
    // }


    // for (int i = 0; i < 10; i++) {
    //     printf("%d\n", i);

    // }
    // int scannedNum;
    // for (int i = 0; i < 3; i++) {
    //     printf("Enter a num: ");
    //     scanf("%d", &scannedNum);
    //     printf("You entered: %d\n", scannedNum);

    // }
	return 0;



    // rest of program
}

