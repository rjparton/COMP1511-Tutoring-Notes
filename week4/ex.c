
#include <stdio.h>

/* Plan:
    - Stuff around and see what works LOL
    - What variables do we have to play with?
        - row
        - col
        - size
        - half_size

    Size = 15
    Top Right Quad
        0, 14 = row, col
        solving for row:
            0 = 15 - 14 - 1 : row = size - col - 1
        solving for col:
            14 = 15 - 1 : col + row = size - 1

        0, 10
        0 = (size - col - 1 ) % 4
        0 = (15 - 10 - 1 ) % 4
        0 = 4 % 4
        0 = 0

        1, 9
        1 = (15 - 9 - 1) % 4
        1 = 5 % 4
        1 = 1!! woooooo

 */

int main()
{
    printf("Enter adn number: \n");
    int size;
    scanf("%d", &size);

    for (int row = 0; row < size; row++)
    {

        printf("\n");
    }
}