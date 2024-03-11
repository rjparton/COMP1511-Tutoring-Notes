
#include <stdio.h>

/*
return_type function_name(parameters) {
    // function body

    return value;
}
 */

// heads up
void addTwo(int numOne, int numTwo);
int returnSum(int numOne, int numTwo);

int main(void) {
    int a = 2;
    int b = 2;
    char array[5];
    int sum = returnSum(a, b);

    printf("%d\n", sum);

}

void addTwo(int numOne, int numTwo) {
    printf("%d\n", numOne + numTwo);
    return;
}

// calculate the sum and return it
int returnSum(int numOne, int numTwo) {
    return numOne + numTwo;
}

