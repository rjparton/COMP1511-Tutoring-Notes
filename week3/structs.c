// Robbie Parton

#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 100

// struct label {
//     //THINGS
//     // TYPE category;
// }

struct person
{
    int shoe_size;
    double height;
    char first_name_initial;

    // ADVANCED FIELDS
    char favourite_thing[MAX_STRING_LEN]; // '\0'
    char first_name[MAX_STRING_LEN];
};

int main()
{
    struct person samantha;

    samantha.shoe_size = 100;
    printf("shoe size: %d\n", samantha.shoe_size);

    // 193.7cm
    samantha.height = 193.7;
    printf("height: %.1lf\n", samantha.height);

    samantha.first_name_initial = 'S';
    printf("initial: %c\n", samantha.first_name_initial);

    // ADVANCED STRINGS - NAME
    // strcpy(destination, input);
    strcpy(samantha.favourite_thing, "Ice Cream");
    printf("favourite thing: %s\n", samantha.favourite_thing);

    // use strcpy to set the name to samanatha
    strcpy(samantha.first_name, "samantha");
    printf("first_name: %s\n", samantha.first_name);
}

// int main() {
//     struct person samantha;
//     samantha.shoe_size = 100;
//     samantha.height = 220.6;
//     samantha.first_name_initial = 's';

//     printf("shoe size: %d\n", samantha.shoe_size);
//     printf("height: %d\n", samantha.shoe_size);
//     printf("initial: %c\n", samantha.shoe_size);

//     // ADVANCED STRINGS
//     printf("Now to do some slightly naughty stuff with strings...\n\n");

//     strcpy(samantha.favourite,"Robbieeee");
//     samantha.colour = strdup("green");

//     printf("favourite: %s\n", samantha.favourite);
//     printf("colour: %s\n", samantha.colour);
// }