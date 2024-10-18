#ifndef TICTACTOE_H
#define TICTACTOE_H


extern char matrix[3][3];

void init_matrix(void);
void get_player_move(void);
void get_computer_move(void);
void disp_matrix(void);
char check(void);

#endif // TICTACTOE_H
