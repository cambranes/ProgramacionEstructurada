#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

typedef struct tableroMenor
{
    int matriz[3][3];
} tableroMenor;

typedef struct sudoku
{
    tableroMenor tableroCompleto[3][3];
} sudoku;

void asignarValores(sudoku *);
bool verificadorMatriz(int, int _matriz[][3], int, int);
bool verificadorLineas(int, int _seudoMatriz[][9], int, int);
bool verificadorColumnas(int, int _seudoMatriz[][9], int, int);
void imprimirSudoku(sudoku);

int main()
{
    sudoku sudoku;
    time_t t;

    srand((unsigned) time(&t));

    asignarValores(&sudoku);

    imprimirSudoku(sudoku);

    return 0;
}

void asignarValores(sudoku *_sudoku)
{
    int aux1, seudoSudoku[9][9];
    bool aux2, aux3, aux4;
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            for (int x = 0; x < 3; x++)
            {
                for (int y = 0; y < 3; y++)
                {
                    do
                    {
                        aux1=1+rand() %9;
                        seudoSudoku[x+i*3][y+j*3]=aux1;
                        _sudoku->tableroCompleto[i][j].matriz[x][y]=aux1;
                        aux2=verificadorMatriz(aux1, _sudoku->tableroCompleto[i][j].matriz, x, y);
                        aux3=verificadorLineas(aux1, seudoSudoku, x+i*3, y+j*3);
                        aux4=verificadorColumnas(aux1, seudoSudoku, x+i*3, y);
                    } while (aux2==false || aux3==false || aux4==false);
                }               
            }
        }
    }
}

bool verificadorMatriz(int num, int _matriz[][3], int x, int y)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (num==_matriz[i][j]) 
            {
                if (i==x && j==y)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            
            }
        }
    }
}

bool verificadorLineas(int num, int _seudoMatriz[][9], int x, int y)
{
    for (int i = 0; i < 9; i++)
    {
       if (num==_seudoMatriz[i][y])
       {
           if (x==i)
           {
               return true;
           }
           else 
           {
               return false;
           }
           
        }          
    }
}

bool verificadorColumnas(int num, int _seudoMatriz[][9], int x, int y)
{
    for (int i = 0; i < 9; i++)
    {
       if (num==_seudoMatriz[x][i])
       {
           if (y==i)
           {
               return true;
           }
           else 
           {
               return false;
           }
           
        }          
    }
}


void imprimirSudoku(sudoku _sudoku)
{
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            for (int x=0; x<3; x++)
            {
                for (int y=0; y<3; y++)
                {
                    printf("%d\t", _sudoku.tableroCompleto[i][x].matriz[j][y]);
                }     
            }
            printf("\n");
        }
    }
}