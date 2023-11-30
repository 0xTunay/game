#include <stdio.h>
#include <stdlib.h>

char matrix[3][3];
char check(void);
void init_matrix(void);
void get_player_move(void);
void get_computer_move(void);
void disp_matrix(void);

int main(void)
{
    char done;

    printf("Игра в крестики нолики\n");
    printf("вы будете играть против ПК\n");

    done = ' ';
    init_matrix();

    do {
        disp_matrix();
        get_player_move();
        get_computer_move();
        done = check(); // проверка есть ли победитель
        if (done!=' ') break; // есть победитель  
        get_computer_move();
        done = check();// проверка есть ли победител
        } while(done == ' ');

    if(done == 'X') printf("Вы победитель!\n");
    else printf("пк победил\n");
    disp_matrix(); // показ финальной позиции

    return 0;    
}

// инициализация матрицы игры
void init_matrix(void)
{
    int i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++) matrix[i][j] = ' ';
}
void get_player_move(void)
{
    int x,y;
    printf("координаты x,y вышего хода ");
    scanf("%d%*c%d", &x, &y);
    x--; y--;
    
    if(matrix[x][y] != ' ')
    {
        printf("неверный ход, попытайся еще раз\n");
        get_player_move();
    }
    else matrix[x][y] = 'X';
}
// ХОД ПК

void get_computer_move(void)
{
    int i,j;
    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
        if(matrix[i][j]==' ') break;
        if(matrix[i][j]==' ') break;
     // второй break нужен для выхода из цикла по i   
    }
    if(i*j == 9) {
        printf("Game over\n");
        exit(0);
    }
    else
    matrix[i][j] = 'O';
}

// вывод матрицы на эssssкоан 
// dasdasd
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

// определяем победителя
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
