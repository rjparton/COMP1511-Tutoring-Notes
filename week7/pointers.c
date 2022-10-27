

#include <stdio.h>
#include <string.h>

void add_two(int *num);

int main() {
    // What is a pointer?
    // - The location of the data
    // - an address
    // - access by &toilet

    int toilet = 0;

    // &toilet = the address of number in memory!

    int *toilet_pointer = &toilet;

    printf("toilet_pointer: %p\n", toilet_pointer);
    // How do I access the value stored at the adress of the pointer?
    // *toilet_pointer
    // the star, allows us to access the value stoed at the addresss of the pointer

    printf("%d\n", *toilet_pointer);
    // printf("%d\n", toilet_pointer);

    *toilet_pointer = 5;
    printf("toilet is now: %d\n", toilet); // prints toilet is now: 5
    // We just access the value stored in toilet via toilet_pointer and changed
    // it to 5!

    int *q = toilet_pointer;
    printf("changing the value stored at q address to 10:\n");
    *q = 10;
    printf("toilet is now: %d\n", toilet); // prints toilet is now: 5

    int not_num = 0;
    add_two(&not_num);
    printf("not_num =: %d\n",not_num);

}


// How to update the value of variable in our main??
void add_two(int *num) { // Note we are passing in a pointer

    // num += 2; won't work - will add two to the address

    *num += 2;
}
