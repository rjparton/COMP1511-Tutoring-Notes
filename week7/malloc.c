#include <stdio.h>

struct pet {
    int age;
    int weight;
    char name[100];
};

int main(void) {

    int i;
    double d;
    int array1[10];
    char array2[4];
    struct pet coco;
    struct pet class_pets[5];

    printf("the size of our int: %ld\n", sizeof (int));
    printf("the size of our int: %ld\n", sizeof (i));
    printf("the size of our int: %ld\n", sizeof (d));
    printf("the size of our int: %ld\n", sizeof (array1));
    printf("the size of our int: %ld\n", sizeof (array2));
    printf("the size of our int: %ld\n", sizeof (coco));
    printf("the size of our int: %ld\n", sizeof (class_pets));

}