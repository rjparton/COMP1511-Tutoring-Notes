#include <stdio.h>

enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION
};


int main() {
    printf("%d\n", ADULT);
    printf("%d\n", STUDENT);
    printf("%d\n", CONCESSION);
}