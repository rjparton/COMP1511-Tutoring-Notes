// part1_variables
//
// This program was written by YOUR-NAME, ZID
// on [DATE]
//
// This program shows how to declare and initalise variables.
// It also shows how to define and use constants.

#include <stdio.h>

#define PI 3.1415999999

int main(void) {
	// 1. Declare the variables
    char c;
    int i;
    double d;
    float f;

    // 2. Initalise the variables
    c = "c";
    i = 1;
    i = 'i';    // i = 105 in ascii

    // can we put a number into a character???
    c = 78;

    d = 3;
    d = 3.1415;
    f = 3;
    f = 4.1415;

    // 3. Print the variables
    printf("%d\n", i);
    i = i - 'a';        // 105 - 97 = 8
    printf("%d\n", i);

    i = 'i' - 8;
    printf("as a char: %c\n", i);

    printf("c as a char set to 78: %c\n", c);

    printf("d: %d\n", d);
    printf("f: %d\n", f);

    printf("d: %lf\n", d);
    printf("f: %lf\n", f);


    printf("pi: %lf\n", PI);


    // 4. Reassign the values of some of the variables

	// 5. Print the variables

	return 0;
}