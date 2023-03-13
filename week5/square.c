

#include <stdio.h>

#define LENGTH 5

void square(int *x);
// int square(int x);
void square_array(int array[LENGTH]);

int main() {
    printf("Enter a number: ");
    int number;
    scanf("%d", &number);

    square(&number);
    // number = square(number);

    printf("Number after squaring is %d\n", number);


    // arrays

    int array[LENGTH] = {0, 1, 2, 3, 4};
    square_array(array);
    for (int i = 0; i < LENGTH; i++) {
        printf("i = %d. Square = %d\n", i, array[i]);
    }


    return 0;
}


void square(int *x) {
    *x = *x * *x;
}

void square_array(int array[LENGTH]) {
    for (int i = 0; i < LENGTH; i++) {
        array[i] = array[i] * array[i];
    }
}

// will work
// int square(int x) {
//     int square_of_x = x * x;
//     return square_of_x;
// }