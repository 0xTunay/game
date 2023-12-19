#include <stdio.h>
#include <stdlib.h>

char matrix[3][3];
char check(void);
void init_matrix(void);
void get_player1_move(void);
void get_playr2_move(void);
void disp_matrix(void);

int main(void)
{
    char done;

    printf("Tic Tac Tie Game\n");
    printf("you will playsasd against PC\n");

    done = ' ';
    init_matrix();

    do {
        disp_matrix();
        get_player1_move();
        done = check(); // check if there is a winner
        if (done!=' ') break; // there is a winner
        get_playr2_move();
        done = check();// check if there is a winner
        } while(done == ' ');

    if(done == 'X') printf("You are a winner!\n");
    else printf("PC won\n");
    disp_matrix(); // showing the final position

    return 0;    
}

// initializing the game matrix
void init_matrix(void)
{
    int i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++) matrix[i][j] = ' ';
}
void get_player1_move(void)
{
    int x,y;
    printf("x,y coordinates of the higher move ");
    scanf("%d%*c%d", &x, &y);
    x--; y--;
    
    if(matrix[x][y] != ' ')
    {
        printf("wrong move, try again\n");
        get_player1_move();
    }
    else matrix[x][y] = 'X';
}
// PC STROKE

void get_playr2_move(void)
{
    int i,j;
    printf("x,y coordinates of the higher move ");
    scanf("%d%*c%d", &i, &j);
    i--; j--;
    
    if(matrix[j][i] != ' ')
    {
        printf("wrong move, try again\n");
        get_playr2_move();
    }
    else
    matrix[i][j] = 'O';
}

//displaying the matrix on the screen
void disp_matrix(void)

{
    int t;
    for(t=0; t<3;t++)
    {
        printf("%c | %c | %c ", matrix[t][0],
            matrix[t][1], matrix[t][2]);
        if(t != 2) printf("\n---|---|---\n");    
    }
    printf("\n");
}

// we determine the winner
char check(void)
{
    int i;
    char winner = ' ';

    for (i = 0; i < 3; i++) {
        if (matrix[i][0] == matrix[i][1] && matrix[i][0] == matrix[i][2]) {
            winner = matrix[i][0];
            break;
        }
        if (matrix[0][i] == matrix[1][i] && matrix[0][i] == matrix[2][i]) {
            winner = matrix[0][i];
            break;
        }
    }

    if (matrix[0][0] == matrix[1][1] && matrix[0][0] == matrix[2][2]) {
        winner = matrix[0][0];
    }

    if (matrix[0][2] == matrix[1][1] && matrix[0][2] == matrix[2][0]) {
        winner = matrix[0][2];
    }

    return winner;
}
