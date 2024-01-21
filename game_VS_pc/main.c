#include "tictactoe.h"

int main(void)
{
    char done;
    
    printf("Tic Tac Toe Game\n");
    printf("You will play against PC\n");

    done = ' ';
    init_matrix();

    do {
        disp_matrix();
        get_player_move();
        done = check(); // Check for a winner after player's move
        if (done != ' ') break; // Check if there is a winner after player's move

        get_computer_move();
        done = check(); // Check for a winner after computer's move
    } while (done == ' ');

    if (done == 'X') printf("You are the winner!\n");
    else printf("PC wins\n");
    
    disp_matrix(); // Show the final position

    return 0;    
}