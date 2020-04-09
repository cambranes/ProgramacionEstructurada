#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct tablePart
{
    int table[3][3];
} tablePart;

typedef struct table
{
    tablePart table[3][3];
} table;

void fillTable(table *sudo);
void printTable(table *sudo);
int checkLineH(table *sudo);
int checkLineV(table *sudo);
int checkSquare(table *sudo);
void result(table *sudo);

int main()
{
    srand(time(NULL));
    table sudoku;
    fillTable(&sudoku);
    printTable(&sudoku);
    result(&sudoku);
    return 0;
}

void fillTable(table *sudo)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 3; l++)
                {
                    (*sudo).table[i][j].table[k][l] = rand() % 9 + 1;
                }
            }
        }
    }
}

// void printTable(table *sudo)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             for (int k = 0; k < 3; k++)
//             {
//                 for (int l = 0; l < 3; l++)
//                 {
//                     printf("%d ", (*sudo).table[i][k].table[j][l]);
//                 }
//                 printf("  ");
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }
// }

int checkLineH(table *sudo)
{
    int checked = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int ite = 0;
            int line[9];
            for (int a = 0; a < 3; a++)
            {
                for (int b = 0; b < 3; b++)
                {
                    line[ite] = (*sudo).table[i][a].table[j][b];
                    ite += 1;
                }
            }
            for (int x = 0; x < 9; x++)
            {
                for (int z = 0; z < 9; z++)
                {
                    if (line[x] == line[z] && x != z)
                    {
                        checked = 0;
                    }
                }
                ite = 0;
            }
        }
    }
    return checked;
}

int checkLineV(table *sudo)
{
    int checked = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int ite = 0;
            int line[9];
            for (int a = 0; a < 3; a++)
            {
                for (int b = 0; b < 3; b++)
                {
                    line[ite] = (*sudo).table[j][i].table[b][a];
                    ite += 1;
                }
            }
            for (int x = 0; x < 9; x++)
            {
                for (int z = 0; z < 9; z++)
                {
                    if (line[x] == line[z] && z != x)
                    {
                        checked = 0;
                    }
                }
                ite = 0;
            }
        }
    }
    return checked;
}

int checkSquare(table *sudo)
{
    int checked = 1;
    int acum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int ite = 0;
            int line[9];
            for (int a = 0; a < 3; a++)
            {
                for (int b = 0; b < 3; b++)
                {
                    line[ite] = (*sudo).table[i][j].table[a][b];
                    ite += 1;
                }
            }
            for (int x = 0; x < 9; x++)
            {
                for (int z = 0; z < 9; z++)
                {
                    if (line[x] == line[z] && z != x)
                    {
                        checked = 0;
                    }
                }
                ite = 0;
            }
        }

        if (acum == 9)
        {
            checked = 1;
        }
    }
    return checked;
}

void result(table *sudo)
{
    int a, b, c;
    
    a = checkLineV(sudo);
    b = checkLineH(sudo);
    c = checkSquare(sudo);

    if (a == 1 && b == 1 && c == 1)
    {
        printf("Sudoku!");
    }
    else
    {
        printf("Ño");
    }
}
