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
bool verificadorLineas(int, int _matrizFalsa[][9], int, int);
bool verificadorColumnas(int, int _matrizFalsa[][9], int, int);
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
    int auxiliar1, sudokuFalso[9][9];
    bool auxiliar2, auxiliar3, auxiliar4;
    for(int f=0; f<3; f++)
    {
        for (int c=0; c<3; c++)
        {
            for (int i=0; i<3; i++)
            {
                for (int j=0; j<3; j++)
                {
                    do
                    {
                        auxiliar1=1+rand() %9;
                        sudokuFalso[i+f*3][j+c*3]=auxiliar1;
                        _sudoku->tableroCompleto[f][c].matriz[i][j]=auxiliar1;
                        auxiliar2=verificadorMatriz(auxiliar1, _sudoku->tableroCompleto[f][c].matriz, i, j);
                        auxiliar3=verificadorLineas(auxiliar1, sudokuFalso, i+f*3, j+c*3);
                        auxiliar4=verificadorColumnas(auxiliar1, sudokuFalso, i+f*3, j);
                    } while (auxiliar2==false || auxiliar3==false || auxiliar4==false);
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

bool verificadorLineas(int n, int _matrizFalsa[][9], int i, int j)
{
    for (int f = 0; f < j; f++)
    {
       if (n==_matrizFalsa[f][j])
       {
           return false;  
       }   
       return true;       
    }
}

bool verificadorColumnas(int n, int _matrizFalsa[][9], int i, int j)
{
    for (int f = 0; f < 9; f++)
    {
        if (n==_matrizFalsa[f][j])
        {
            if (i==f)
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
    for(int f=0; f<3; f++)
    {
        for (int c=0; c<3; c++)
        {
            for (int i=0; i<3; i++)
            {
                for (int j=0; j<3; j++)
                {
                    printf("%d\t", _sudoku.tableroCompleto[f][i].matriz[c][j]);
                }     
            }
            printf("\n\n");
        }
    }
}