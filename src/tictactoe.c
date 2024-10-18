#include <stdio.h>

#include "../include/tictactoe.h"

char matrix[3][3];

void init_matrix(void)
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            matrix[i][j] = ' ';
}

void get_player_move(void)
{
    int x, y;
    printf("Enter the coordinates (x, y) for your move: ");
    scanf("%d%*c%d", &x, &y);
    x--;
    y--;

    if (matrix[x][y] != ' ')
    {
        printf("Invalid move, try again\n");
        get_player_move();
    }
    else
        matrix[x][y] = 'X';
}

void get_computer_move(void)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matrix[i][j] == ' ')
            {
                matrix[i][j] = 'O';
                return; 
            }
        }
    }
}

void disp_matrix(void)
{
    int t;
    for (t = 0; t < 3; t++)
    {
        printf("%c | %c | %c ", matrix[t][0], matrix[t][1], matrix[t][2]);
        if (t != 2)
            printf("\n---|---|---\n");
    }
    printf("\n");
}

char check(void)
{
    int i;
    char winner = ' ';

    for (i = 0; i < 3; i++)
    {
        if (matrix[i][0] == matrix[i][1] && matrix[i][0] == matrix[i][2])
        {
            winner = matrix[i][0];
            break;
        }
        if (matrix[0][i] == matrix[1][i] && matrix[0][i] == matrix[2][i])
        {
            winner = matrix[0][i];
            break;
        }
    }

    if (matrix[0][0] == matrix[1][1] && matrix[0][0] == matrix[2][2])
    {
        winner = matrix[0][0];
    }

    if (matrix[0][2] == matrix[1][1] && matrix[0][2] == matrix[2][0])
    {
        winner = matrix[0][2];
    }

    return winner;
}
