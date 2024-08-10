#include <stdio.h>

#include "../include/tictactoe.h"

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
        done = check();
        if (done != ' ') break; 

        get_computer_move();
        done = check();
    } while (done == ' ');

    if (done == 'X') printf("You are the winner!\n");
    else printf("PC wins\n");
    
    disp_matrix(); 

    return 0;    
}