

#include <stdio.h>
#include <string.h>

struct person {
    char character_name[100];
    int num;
};

void swap_numbers(struct person member1, struct person member2);

void add_two(int *num);

int main() {
    // int n = 42;
    // int *p;
    // int *q;
    // p = &n;
    // *p = 5;
    // *q = 17;
    // q = p;
    // *q = 8;


    // What is a pointer?
    // - The location of the data
    // - address
    // - spot?
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



    // struct person keaton;
    // strcpy(keaton.character_name, "keaton");
    // // keaton.name = "keaton"; // NO GOOD!!
    // keaton.num = 0;

    // struct person nich;
    // strcpy(nich.character_name, "nich");
    // nich.num = 1;

    // swap_numbers(keaton, nich);
    // printf("keaton's number: %d\n", keaton.num);
    // printf("nich's number: %d\n", nich.num);

}


void add_two(int *num) {
    // add two to whatver num is
    // num += 2; won't work - will add two to the address

    *num += 2;
}

// Swaps the numbers of each struct
void swap_numbers(struct person member1, struct person member2) {
    // int temp_num = member1.num;

    // member1.num = member2.num;
    // member2.num = temp_num;

    int temp_num = member1.num;

    member1.num = member2.num;
    member2.num = temp_num;

}