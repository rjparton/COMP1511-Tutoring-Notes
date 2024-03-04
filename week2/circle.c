// part2_circles
//
// This program was written by Sofia De Bellis (z5418801)
// on January 2024
//
// This program calculates the area of a circle

#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main(void) {
	// Declaring the variable
	double radius;
	printf("Please enter the radius of your circle: ");
    scanf("%lf", &radius);

    printf("You entered %lf. Noice.\n", radius);

    double area = PI * pow(radius, 2);

    printf("The area of the circle is %lf. Double Noice.\n", area);

	return 0;
}























// int main(void) {
// 	// Declaring the variable
// 	double radius;
// 	printf("Please enter the radius of your circle: ");

// 	// Initalising the variable with user input
// 	scanf("%lf", &radius);

// 	// Calculating the area
// 	double area = radius * radius * PI;

// 	printf("The area of the circle with a radius of %lf is %lf\n", radius, area);
// 	return 0;
// }