
#include <stdio.h>

// give heads up
void addTwoPrint(int a, int b);
int addTwoReturn(int a, int b);

int main(void) {

    // addTwoPrint(3,2);

    // int x = 1;
    // int y = 2;
    // addTwoPrint(x,y);

    // double d = 10;
    // double e = 11;
    // addTwoPrint(d,e);

    // char i = 'i';
    // char j = 'j';
    // addTwoPrint(i,j);


    // edited function signature
    int sum = addTwoReturn(50,50);
    printf("the sum = %d\n", sum);

    return 0;
}

// take in two numbers, add them and print them
void addTwoPrint(int a, int b) {
    int c = a + b;

    printf("the sum = %d\n", c);
    return;
}

int addTwoReturn(int a, int b) {
    return a + b;
}