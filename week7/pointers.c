

#include <stdio.h>
#include <string.h>

void add_two(int *num);


/*
    int x;
    &x;               // gets the address of x e.g 0x16

    int *pointer = x;     // creates a new variable of type int *
                                which is an int pointer, which contains an address to x
    *pointer          // accesses whatever is stored at the address stored
                                in the variable

    &pointer          // the address of pointer, which stores the address of x. e.g 0x27

 */

int main() {
    // What is a pointer?
    // - The location of the data
    // - an address
    // - access by &toilet

    int toilet = 0;

    // &toilet = the address of number in memory!

    // int vs int *
    // int vs int pointer

    int *toilet_pointer = &toilet;      // let's say &toilet = the address 99 Sesame Street. The value stored at 99 Sesame Street is 0.

    // scanf("%d", &toilet); // read a number and stored it in the address of "toilet"

    // print the pointer (the address)
    printf("toilet_pointer: %p\n", toilet_pointer);     // 99 Sesame Street (0xAE28HH)

    // How do I access the value stored at the address of the pointer?
    // *toilet_pointer
    // the star, allows us to access the value stoed at the addresss of the pointer
    printf("*toilet_pointer: %d\n", *toilet_pointer);
    // printf("%d\n", toilet_pointer);      // WRONG

    // how do we update the value stored at the address of toilet_pointer?
    *toilet_pointer = 5;    // the value stored at 99 Sesame Street is 5!
    // toilet_pointer = 5       // This would update the address stored in toilet_pointer. So, *toilet_pointer would access the address 5 Sesame Street

    printf("toilet is now: %d\n", toilet); // prints toilet is now: 5
    // We just access the value stored in toilet via toilet_pointer and changed
    // it to 5!

    int *q = toilet_pointer;
    printf("changing the value stored at q address to 10:\n");
    *q = 10;
    printf("toilet is now: %d\n", toilet); // prints toilet is now: 10

    int not_num = 0;
    add_two(&not_num);
    printf("not_num =: %d\n",not_num);

}

// How to update the value of variable in our main??
void add_two(int *num) { // Note we are passing in a pointer
    // num += 2; won't work - will add two to the address
    *num += 2;
}

// the change to num, only exists inside the function
// once it returns, the original num is NOT CHANGED!
// void add_two(int num) { // Note we are passing in a pointer
//     num += 2;
// }
