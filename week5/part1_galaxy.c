// part1_galaxy.c
//
// This program was written by YOUR-NAME (ZID)
// on DATE
//
// This program is a simple game that allows the user to build a galaxy.
// The user can place stars, planets, and nebulae in the galaxy.

#include <stdio.h>
#include <stdbool.h>

#define SIZE 5
#define NEBULA_POINTS -10

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

void print_map(struct celestial_body galaxy[SIZE][SIZE]);

// a[0] was 2 when we passed it in
void addOne(int array[SIZE]) {
    array[0]++;
    return;
}

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];


    // TODO: Initialize the galaxy: set entity to EMPTY, and points to 0
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
        galaxy[i][j].points = 0;
        galaxy[i][j].entity = EMPTY;
        }
    }

    print_map(galaxy);


    // TODO: Place the planets and nebulae in the galaxy
    printf("How many planets and nebulae are there? ");
    int numPlanets;
    scanf("%d", &numPlanets);

    // TODO: Place the planets and nebulae in the galaxy
    printf("Enter the position and points of the planet(s) and nebula(e): ");
    for (int i = 0; i < numPlanets; i++) {
        // scan in the x and y (i and j) coords of this planet
        int x, y;

        scanf("%d %d", &x, &y);

        galaxy[x][y].entity = PLANET;

    }

    // TODO: Place the stars in the galaxy
    printf("Enter the position and points of the star(s): \n");

    // TODO: Print the map
    print_map(galaxy);
}

// Function prints the map of the galaxy
//
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}

// // // 1D array
// int array[5];
// for (int i = 0; i < 5; i++) {
//     array[i];
// }
// // // 2D array
// // int array[5][5]; // array[row][col]
// // for (int i = 0; i < 5; i++) {
// //     for (int j = 0; j < 5; j++) {
// //         array[i][j];
// //     }
// // }
