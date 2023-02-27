// Robbie Parton
#include <stdio.h>
/*
SPEC:
    Enter size: 4
    **** row = 0
    ---- row = 1
    **** row = 2
    ---- row = 3

    Enter size: 5
    *****
    -----
    *****
    -----
    *****
 */

/* Plan:
    - Print "Enter size"
        - Use printf
    - scanf an integer store it in a variable size
    - assume input is valid
    - use a while loop
        - int row = 0
        - first row: print size many *'s
        - second row: print size many -'s
        - if (row % 2 == 0)
            - printf *'s
        - if (row % 2 == 1)
            - print -'s
            - BUT, as there's only two options, if it's not even, it's odd so we can simplify code
        - use an inner while loop to print size many *'s/-'s.
 */

int main()
{
    printf("Enter size: ");
    int size;
    scanf("%d", &size);

    int row = 0;
    while (row < size) {
        int col = 0;
        while (col < size) {
            // even
            if (row % 2 == 0) {
                printf("*");
                // increment col
            }
            else {
                printf("-");
            }
            col += 1; // col = col + 1;
        }
        row += 1; // row = row + 1
        printf("\n");
    }
}

// int main()
// {
//     printf("Enter size: ");
//     int size;
//     scanf("%d", &size);

//     int row = 0;
//     while (row < size)
//     {
//         // even case
//         if (row % 2 == 0)
//         {
//             int col = 0;
//             while (col < size)
//             {
//                 printf("*");
//                 // increment col
//                 col += 1; // col = col + 1;
//             }
//         }
//         else
//         {
//             int col = 0;
//             while (col < size)
//             {
//                 printf("-");
//                 // increment col
//                 col += 1; // col = col + 1;
//             }
//         }
//         row += 1; // row = row + 1
//         printf("\n");
//     }
// }