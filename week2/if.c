// Demonstrating using IF statements
// with logical operators AND and OR

// Sasha Vassar, Week 2 Lecture 3

// Problem 0: "Can we take song requests?" Ask the question and take a song
// request if the answer is yes, otherwise quit the program
// 1. Make a decision based on taking a song request
// 2. We need to ask a question if we take a song request
// 3. We need to take the input in (scanf) y/n
// 4. Branch - ask for a song if yes
// 5. Branch - quit if not


// Problem 1: Let the user provide you a number 1-100, that you then check 
// and decide how many digits that number has.
/*
    1. Scan in the number that you need to check (scanf())
    2. Is the number between 0 and 9? 1 digit... (number >= 0  && number <= 9) (0 <= number <= 9)
     3. Is the number between 10 and 99? 2 digits (number >= 10 && number <= 99)
    4. Any more? More than two digits.... (number >= 100)
    5. Print out the result of how many digits the number has (printf())

*/ 

// Problem 2: Let the user provide you any number, and you must determine if
// the number is even or odd.

// Let's do problem 0 first and see how we go

#include <stdio.h>

int main(void) {
    
    // Declare and initialise some variables that you want to store things in
    int number;
    printf("Please enter a number: ");
    // The function scanf returns something!
    // It returns an integer (int) - that int has inside it how many 
    // things scanf() scanned in successfully
    // Declared a variable called scanf_return that will house how many things scanf() has scanned
    // in succcessfully
    int scanf_return; 
    scanf_return = scanf("%d", &number);
    printf("scanf_return is equal to %d\n", scanf_return);
    
    // scanf_return will equal the number of things that were scanned in

    // == is a comparison. Statement. The result is true or false
    // false = 0
    // true = 1

    // if (condition) {
    //     // do if true
    //      printf("nice!");
    // }
    // condition = true or false

    // 1 + 1 = 9. False
    // 1 + 1 = 2. True

    if (scanf_return == 1) { // check that we scanned in a number. 1 if true
        if (number >= 0  && number <= 9) {
            printf("The number has 1 digit\n");
        } else if (number >= 10 && number <= 99) {
            printf("The number has 2 digits\n");
        } else if (number >= 100) {
            printf("The number has more than 2 digits\n");
        } else {
            printf("The number is negative///?");
        }

    }
    
    return 0;
}