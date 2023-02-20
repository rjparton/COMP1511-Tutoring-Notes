#include <stdio.h>


int main() {
    printf("Enter a number: ");
    int user_input;
    scanf("%d", &user_input);
    printf("The number you entered was: %d\n", user_input);

    // logic
    if (user_input > 2) {
        printf("It's greater than 2\n");
    } 

    // && - AND. check both conditions and both must be true
    if (user_input > 2 && user_input < 10) {
        printf("The number is between 2 and 10 not inclusive\n");
    }
    // || - OR operator. either conditions can be true
    if (user_input > 20 || user_input < -10) {
        printf("The number is > 20 OR < -10\n");
    }
    
}