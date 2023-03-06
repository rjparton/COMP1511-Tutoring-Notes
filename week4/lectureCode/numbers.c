// A program to demonstrate a simple array being read
// through and printing out the elements of that array
// Sasha Week 3 Lecture 6

// Let's say I want an array with the values 1, 3, 4, 5, 9, 10, 11
// I would like to calculate the product of these numbers...

#include <stdio.h>

struct student
{
    int age;
    double height;
}

#define MAX_ARRAY 7

void
print_array(int array[MAX_ARRAY]);

int main(void)
{
    // int a = 1;
    // int b = 3;
    // int c = 4;
    int product = 1;

    // 1. Declare and initialise the array that you will use here
    int array[MAX_ARRAY] = {1, 3, 4, 5, 9, 10, 11};

    // int one = array[0];
    // int three = array[3];
    // int seven = array[6];
    // struct alya alya_array[MAX_ARRAY];
    // char char_array[MAX_ARRAY];
    // int array[MAX_ARRAY] = {0};

    // updating values
    for (int i = 0; i < MAX_ARRAY; i++)
    {
        int number;
        scanf("%d", &number);
        array[i] = number;
    }

    // traverse through the array and print out the elements of the array
    print_array(array);

    // array[MAX_ARRAY - 1] = 40;
    //  print_array(array);

    // Traverse through the array and multiply the numbers together
    for (int i = 0; i < MAX_ARRAY; i++)
    {
        product = product * array[i];
    }

    // Output the result (product of numbers)

    printf("The product of the numbers is %d\n", product);

    // accessing student structs

    return 0;
}

// THis function will print out the array
// OUTPUT: nothing (void)
// INPUT: array
void print_array(int array[MAX_ARRAY])
{

    for (int i = 0; i < MAX_ARRAY; i++)
    {
        printf("%d\n", array[i]);
    }
}