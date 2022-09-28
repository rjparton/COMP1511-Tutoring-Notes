// Robbie Parton

#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 100

struct person {
    int shoe_size;
    double height;
    char first_name_initial;
    
    // ADVANCED FIELDS
    // char favourite[MAX_STRING_LEN];
    // char *colour;
};

int main() {
    struct person samantha;
    samantha.shoe_size = 100;
    samantha.height = 220.6;
    samantha.first_name_initial = 's';

    printf("shoe size: %d\n", samantha.shoe_size);
    printf("height: %d\n", samantha.shoe_size);
    printf("initial: %c\n", samantha.shoe_size);



    // ADVANCED STRINGS
    printf("Now to do some slightly naughty stuff with strings...\n\n");

    strcpy(samantha.favourite,"Robbieeee");
    samantha.colour = strdup("green");

    printf("favourite: %s\n", samantha.favourite);
    printf("colour: %s\n", samantha.colour);
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