
#include <stdio.h>

int main(void) {

    int a = 7;
    int b = 2;
    double aDouble = 7;

    int sum;
    sum = a + b;

    int subtract = a - b;

    int product = a * b;

    int divideInt = a / b;
    printf("divideInt: %d\n", divideInt);

    double divide = a / b;
    printf("divide: %lf\n", divide);

    double divideCast = (double) a / b;
    printf("divide casting: %lf\n", divideCast);

    double divideDouble = aDouble / b;
    printf("divideDouble: %lf\n", divideDouble);

    int modulo = a % b;

    printf("a \% b: %d\n", modulo);

    int one = 1;
    int oneAgain = 10;

    printf("%d\n", one == oneAgain);

    if (a < b) {
        printf("Whatever the condition is, it's telling the truh\n");

    } else {
        printf("In the else\n");

    }

}

// +
// -
// *
// /
// Modulus
// Power / exponent
// log
// abs()
// square root
// or
// and

// logical operators: returns true or false = 1 or 0
// <
// >
// <=
// >=
// !
// ==
// =

// cheating:
// left shift
// right shift




// sin
// cos
// tan
// cosec
// cot