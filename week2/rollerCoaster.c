// part6_roller_coaster
//
// This program was written by YOUR-NAME, ZID
// on [DATE]
//


#include <stdio.h>

int main(void) {
    // This program:
    // 1. Scans in the users height.
    int height;
    int redundantNumber;
    printf("Enter your height: ");

    scanf(" %d%d", &height, &redundantNumber);  // add a space to trim whitespace

    printf("You entered %d as your height\n", height);

    if (height <= 0) {
        // 2. If the height is 0 or less,
        //    it should print an error message
        printf("I didn't know people came in that size!\n");
    } else if (100 > height) {
        // 3. If the height is below the minimum height, 100cm
        //    it should print a message telling the user they are not tall enough to ride
        printf("You're too short, sorry!\n");
    } else if (height >= 100 && height < 160) {
        // 4. If the height is above the minimum but below the ride alone threshold,
        //    it should print a message telling the user they can ride with an adult
        printf("You can ride, but not alone\n");
    } else if (height >= 160) {
        // 5. If the height is or is above the ride alone threshold, 160cm
        //    it should print a message telling the user they can ride.
        printf("You are a giant. Go nuts alone.\n");
    }

    // if () {
    //     // do if true
    // } else {
    //     // do if false

    // }


	return 0;
}