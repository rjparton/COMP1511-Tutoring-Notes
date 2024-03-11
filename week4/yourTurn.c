
#include <stdio.h>

int main() {
    // double a[3];
    // for (int i = 0; i < 3; i++) {
    //     a[i] = 3.1415;
    // }

    // double b[10];
    // for (int i = 0; i < 10; i++) {
    //     b[i] = 0.0;
    // }

    // for (int i = 0; i < 3; i++) {
    //     b[i] = a[i];
    // }

    // for (int i = 0; i < 10; i++) {
    //     printf("%lf ", b[i]);
    // }

    // largest character
    char a[8];
    for (int i = 0; i < 8; i++) {
        a[i] = 'l' + i;
    }

    char largest_character = a[0];

    for (int i = 0; i < 8; i++) {
        if (a[i] > largest_character) {
            printf("%c is greater than %c!\n", a[i], largest_character);
        }
    }


}