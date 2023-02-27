#include <stdio.h>

enum opal_card_type
{
    ADULT = 9,
    SOBAN = 9,
    STUDENT = 100,
    CONCESSION
};

int main()
{
    printf("%d\n", ADULT);
    printf("%d\n", SOBAN);
    printf("%d\n", STUDENT);
    printf("%d\n", CONCESSION);

    printf("%d\n", SOBAN == ADULT);
    printf("%d\n", SOBAN == STUDENT);
}
