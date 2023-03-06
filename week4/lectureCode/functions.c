// Demonstrating the use of functions with a program
// that takes in two die rolls and checks whether the
// sum of the dice is equal to the target number - you win
// if that is the case!

/*
1. #define for a target number
2. Want to take in what is die_one
3. Want to take in what is die_two
4. Add the two dice up
5. Compare the sum to the target value
6. Print out did you win!
*/

// Extending the problem: Otherwise you can roll again...

#include <stdio.h>

#define TARGET 7

int sum_dice(int number_one, int number_two);
int compare(int sum);

int main(void)
{

    int die_one;
    int die_two;

    int flag = 1;

    while (flag == 1)
    {
        printf("What is the result of rolling die one? ");
        scanf("%d", &die_one); // remember to error check!
        printf("What is the result of rolling die two? ");
        scanf("%d", &die_two); // error checking needed here also

        // some error checking that the die is between 1 and 6

        // add the dice as function
        int sum = sum_dice(die_one, die_two);
        printf("%d\n", sum * 2);
        // printf("%d\n", sum_dice(die_one, die_two)*2);

        // int sum = sum_dice(die_two, die_one);

        // compare the sum as a function as well
        flag = compare(sum);
    }

    return 0;
}

// Let's make some functions!
// Function that will add the two dice together
// INPUT: die_one and die_two values (int, int
// OUTPUT: sum (int)
// Name: sum_dice
int sum_dice(int number_one, int number_two)
{
    return number_one + number_two;
    // return number_one * *number_two;

    /*
    Does return number_two ** number_one; == return number_one ** number_two; ??
     */
}

// Functin will compare the sum to the target number
// and then print out if you are less than, greater than or on the target
// Input: sum (int)
// Output: nothing (void)
// Name: compare

// Now we are going to change this function to return an int if the sum is not equal to the target!
int compare(int sum)
{
    int flag = 1;
    if (sum > TARGET)
    {
        printf("The sum is greater than the target number\n");
        return flag;
    }
    else if (sum < TARGET)
    {
        printf("The sum is less than the target number\n");
        return flag;
    }
    else
    {
        printf("You have the target number! YAY!\n");
        return 0;
    }
}