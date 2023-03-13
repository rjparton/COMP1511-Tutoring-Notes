#include <stdio.h>

#define SIZE 5

// Function Prototype
int did_player_win(char player, char board[SIZE][SIZE]);

int main(void) {
    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };

    if (did_player_win('X', x_wins_board)) {
        printf("X Won This Board!\n");
    }
    if (did_player_win('O', o_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
}

// Function Implementation:
// Determines whether a given player has won the game of tictactoe
// by getting SIZE tokens in a row, in any direction.
int did_player_win(char player, char board[SIZE][SIZE]) {
    // TODO Implement this function.
    /* Plan:
        - Loop?
        - Check if any rows have all the same character as player
        - Check if any columns have all the same character as player
        - Decision: we won't check diagonals
        - Loop through each row and check if all values the same
        - Loop through each col and check if all values the same.
     */

    // - Loop through each row and check if all values the same
    for (int row = 0; row < SIZE; row++) {
        int counter = 0;
        for (int col = 0; col < SIZE; col++) {
            if (board[row][col] == player) {
                counter++;
            }
        }
        if (counter == SIZE) {
            return 1;
        }
    }

    // Loop through each col and check if all values the same.
    for (int col = 0; col < SIZE; col++) {
        int counter = 0;
        for (int row = 0; row < SIZE; row++) {
            if (board[row][col] == player) {
                counter++;
            }
        }
        if (counter == SIZE) {
            return 1;
        }
    }

    return 0;
}