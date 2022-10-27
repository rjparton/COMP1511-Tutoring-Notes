// 
// Written by Robbie Parton z51234578 on x-x-2022

#include <stdio.h>

#define SIZE 3

struct colour {
    int red;
    int green;
    int blue;
};

/////////////////////////
// Function Prototypes //
/////////////////////////

// FORMAT: type name_of_function(parameters);
int square_plus_five(int number);
void scan_array(int array[], int size);
void print_colours(struct colour colour_struct);
void square_plus_five_pointer(int *number);

int main() {

    int i = 2;
    square_plus_five(i);
    printf("i now = %d\n", i); // still = 2

    i = square_plus_five(i); // = 9
    printf("i now = %d\n", i);

    i = 1;
    square_plus_five_pointer(&i);
    printf("i now = %d\n", i); // = 6

    int our_array[SIZE];
    
    // void scan_array(size, our_array) - WON"T WORY!
    scan_array(our_array, SIZE);
    i = 0;
    while(i < SIZE) {
        printf("our_array[i] = %d\n", our_array[i]);
        i++;
    }

    struct colour myColours;
    myColours.red = myColours.blue = myColours.green = 1;
    print_colours(myColours);


    return 0;
}

///////////////
// Functions //
///////////////

// Takes an input number and returns the squared value + 5
int square_plus_five(int number) {
    // Totally okay reasonable way too
    number = number * number;
    number += 5;
    return number;

    // Smarty pants way
    // return (number * number) + 5;
}

// Takes an input number and returns the squared value + 5
void square_plus_five_pointer(int *number) {
    // Totally okay reasonable way too
    *number = *number * *number;
    *number += 5;
    // return number;

    // Smarty pants way
    // return (number * number) + 5;
}

// Scan in numbers into an array
void scan_array(int array[], int size) {
    int i = 0;
    while (i < size) {
        printf("Enter a number: ");
        scanf("%d", &array[i]);
        i++;
    }
}

// print_colours
void print_colours(struct colour colour_struct) {
    if (colour_struct.red == 1) {
        printf("red!\n");
    }
    if (colour_struct.green == 1) {
        printf("green!\n");
    }
    if (colour_struct.blue == 1) {
        printf("blue!\n");
    }
}