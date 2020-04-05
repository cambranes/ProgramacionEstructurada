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

void fillTable(table *tab);
void printTable(table *tab);
int checkLineH(table *tab);
int checkLineV(table *tab);
int checkSquare(table *tab);
void result(table *tab);

int main()
{
    srand(time(NULL));
    table sudoku;
    fillTable(&sudoku);
    printTable(&sudoku);
    result(&sudoku);
    return 0;
}

void fillTable(table *tab)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 3; l++)
                {
                    (*tab).table[i][j].table[k][l] = rand() % 9 + 1;
                }
            }
        }
    }
}

void printTable(table *tab)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 3; l++)
                {
                    printf("%d ", (*tab).table[i][k].table[j][l]);
                }
                printf("  ");
            }
            printf("\n");
        }
        printf("\n");
    }
}

int checkLineH(table *tab)
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
                    line[ite] = (*tab).table[i][a].table[j][b];
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

int checkLineV(table *tab)
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
                    line[ite] = (*tab).table[j][i].table[b][a];
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

int checkSquare(table *tab)
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
                    line[ite] = (*tab).table[i][j].table[a][b];
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

void result(table *tab)
{
    int a, b, c;
    
    a = checkLineV(tab);
    b = checkLineH(tab);
    c = checkSquare(tab);

    if (a == 1 && b == 1 && c == 1)
    {
        printf("Sudoku!");
    }
    else
    {
        printf("Ño");
    }
}