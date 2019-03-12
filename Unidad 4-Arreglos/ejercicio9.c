/*
  Autor: Raul Rivadenerya
  Entradas: Ninguna
  Salidas: Si el sudoku es valido
  Procedimiento general: Genera aleatoreamente un sudoku y checa si es valido
*/
#include "stdio.h"
#include "math.h"
#include "time.h"
int main(){
  /*
  //Este es un sudoku correcto, para utilizarlo comentar el generador
  int sudoku[9][9] = {{1,5,2,4,8,9,3,7,6}, {7,3,9,2,5,6,8,4,1},{4,6,8,3,7,1,2,9,5},
  {3,8,7,1,2,4,6,5,9}, {5,9,1,7,6,3,4,2,8},{2,4,6,8,9,5,7,1,3},{9,1,4,6,3,7,5,8,2},
  {6,2,5,9,4,8,1,3,7},{8,7,3,5,1,2,9,6,4}};
  */

  //Generador//
  int sudoku[9][9];
  srand(time(NULL));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      sudoku[i][j] = (rand() % 10) + 1;
    }
  }
  ////////////

  int isSudoku = 0;
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      for (int k = j; k < 9; k++) {
        if ((k != j) && (sudoku[i][j] == sudoku[i][k])) {
          isSudoku = 1;
          i = 9; j = 9; k = 9;
        }
        else{
          if ((k != j) && (sudoku[j][i] == sudoku[k][i])) {
            isSudoku = 1;
            i = 9; j = 9; k = 9;
          }
        }
      }
    }
  }
  if (isSudoku == 0) {
    printf("Es sudoku\n");
  }
  else{
    printf("No es sudoku\n");
  }
  return 0;
}
