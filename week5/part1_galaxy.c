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

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    // TODO: Initialize the galaxy
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            // we are now able to access the array[col][col] value
            galaxy[row][col].entity = EMPTY;
        }
    }

    // print_map(galaxy);

    // TODO: Place the player in the galaxy
    printf("Enter the starting position of the player: ");
    int playerCol;
    int playerRow;
    bool validCoords = false;
    while (!validCoords) {
        scanf("%d %d", &playerRow, &playerCol);

        // check valid coords
        if (playerRow >= 0 && playerCol >= 0 && playerRow < SIZE && playerCol < SIZE) {
            validCoords = true;
        } else {
            printf("\nSoz bro. Try again enter the starting position of the player: ");
        }
    }

    // TODO: Place the planets and nebulae in the galaxy
    printf("How many planets and nebulae are there? ");
    int numPlanets;
    scanf("%d", &numPlanets);
    for (int i = 0; i < numPlanets; i++) {
        // scan in the row, col and points for the planet
        int row, col, points;
        printf("Enter the row, col and points for planet %d: ", i);
        scanf("%d %d %d", &row, &col, &points);

        // add the planet and the points directly to the galaxy
        galaxy[row][col].points = points;
        galaxy[row][col].entity = PLANET;
    }

    print_map(galaxy);

    // TODO: Place the stars in the galaxy
    printf("Enter the position and points of the star(s): \n");

    // TODO: Print the map
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

// // 1D array
// int array[5];
// for (int i = 0; i < 5; i++) {
//     array[i];
// }
// // 2D array
// int array[5][5]; // array[row][col]
// for (int i = 0; i < 5; i++) {
//     for (int j = 0; j < 5; j++) {
//         array[i][j];
//     }
// }
