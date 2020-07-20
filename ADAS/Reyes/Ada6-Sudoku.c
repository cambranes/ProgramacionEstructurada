#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct tableroIndividual {
  int tablero[3][3];
} tableroIndiv;

typedef struct tableroCompleto {
  tableroIndiv tablero[3][3];
} tableroComp;

void llenarTablero(tableroComp *tab);
void imprimirTablero(tableroComp *tab);
int verificarHorizontal(tableroComp *tab);
int verificarVertical(tableroComp *tab);
int verificarCuadro(tableroComp *tab);
void esSudoku(tableroComp *tab);

int main() {
  printf("\n");

  // Random Initializer
  srand(time(NULL));

  tableroComp sudoku;

  llenarTablero(&sudoku);

  /*

    // SUDOKU

  sudoku.tablero[0][0].tablero[0][0] = 5;
  sudoku.tablero[0][0].tablero[0][1] = 3;
  sudoku.tablero[0][0].tablero[0][2] = 4;
  sudoku.tablero[0][0].tablero[1][0] = 6;
  sudoku.tablero[0][0].tablero[1][1] = 7;
  sudoku.tablero[0][0].tablero[1][2] = 2;
  sudoku.tablero[0][0].tablero[2][0] = 1;
  sudoku.tablero[0][0].tablero[2][1] = 9;
  sudoku.tablero[0][0].tablero[2][2] = 8;
  sudoku.tablero[0][1].tablero[0][0] = 6;
  sudoku.tablero[0][1].tablero[0][1] = 7;
  sudoku.tablero[0][1].tablero[0][2] = 8;
  sudoku.tablero[0][1].tablero[1][0] = 1;
  sudoku.tablero[0][1].tablero[1][1] = 9;
  sudoku.tablero[0][1].tablero[1][2] = 5;
  sudoku.tablero[0][1].tablero[2][0] = 3;
  sudoku.tablero[0][1].tablero[2][1] = 4;
  sudoku.tablero[0][1].tablero[2][2] = 2;
  sudoku.tablero[0][2].tablero[0][0] = 9;
  sudoku.tablero[0][2].tablero[0][1] = 1;
  sudoku.tablero[0][2].tablero[0][2] = 2;
  sudoku.tablero[0][2].tablero[1][0] = 3;
  sudoku.tablero[0][2].tablero[1][1] = 4;
  sudoku.tablero[0][2].tablero[1][2] = 8;
  sudoku.tablero[0][2].tablero[2][0] = 5;
  sudoku.tablero[0][2].tablero[2][1] = 6;
  sudoku.tablero[0][2].tablero[2][2] = 7;
  sudoku.tablero[1][0].tablero[0][0] = 8;
  sudoku.tablero[1][0].tablero[0][1] = 5;
  sudoku.tablero[1][0].tablero[0][2] = 9;
  sudoku.tablero[1][0].tablero[1][0] = 4;
  sudoku.tablero[1][0].tablero[1][1] = 2;
  sudoku.tablero[1][0].tablero[1][2] = 6;
  sudoku.tablero[1][0].tablero[2][0] = 7;
  sudoku.tablero[1][0].tablero[2][1] = 1;
  sudoku.tablero[1][0].tablero[2][2] = 3;
  sudoku.tablero[1][1].tablero[0][0] = 7;
  sudoku.tablero[1][1].tablero[0][1] = 6;
  sudoku.tablero[1][1].tablero[0][2] = 1;
  sudoku.tablero[1][1].tablero[1][0] = 8;
  sudoku.tablero[1][1].tablero[1][1] = 5;
  sudoku.tablero[1][1].tablero[1][2] = 3;
  sudoku.tablero[1][1].tablero[2][0] = 9;
  sudoku.tablero[1][1].tablero[2][1] = 2;
  sudoku.tablero[1][1].tablero[2][2] = 4;
  sudoku.tablero[1][2].tablero[0][0] = 4;
  sudoku.tablero[1][2].tablero[0][1] = 2;
  sudoku.tablero[1][2].tablero[0][2] = 3;
  sudoku.tablero[1][2].tablero[1][0] = 7;
  sudoku.tablero[1][2].tablero[1][1] = 9;
  sudoku.tablero[1][2].tablero[1][2] = 1;
  sudoku.tablero[1][2].tablero[2][0] = 8;
  sudoku.tablero[1][2].tablero[2][1] = 5;
  sudoku.tablero[1][2].tablero[2][2] = 6;
  sudoku.tablero[2][0].tablero[0][0] = 9;
  sudoku.tablero[2][0].tablero[0][1] = 6;
  sudoku.tablero[2][0].tablero[0][2] = 1;
  sudoku.tablero[2][0].tablero[1][0] = 2;
  sudoku.tablero[2][0].tablero[1][1] = 8;
  sudoku.tablero[2][0].tablero[1][2] = 7;
  sudoku.tablero[2][0].tablero[2][0] = 3;
  sudoku.tablero[2][0].tablero[2][1] = 4;
  sudoku.tablero[2][0].tablero[2][2] = 5;
  sudoku.tablero[2][1].tablero[0][0] = 5;
  sudoku.tablero[2][1].tablero[0][1] = 3;
  sudoku.tablero[2][1].tablero[0][2] = 7;
  sudoku.tablero[2][1].tablero[1][0] = 4;
  sudoku.tablero[2][1].tablero[1][1] = 1;
  sudoku.tablero[2][1].tablero[1][2] = 9;
  sudoku.tablero[2][1].tablero[2][0] = 2;
  sudoku.tablero[2][1].tablero[2][1] = 8;
  sudoku.tablero[2][1].tablero[2][2] = 6;
  sudoku.tablero[2][2].tablero[0][0] = 2;
  sudoku.tablero[2][2].tablero[0][1] = 8;
  sudoku.tablero[2][2].tablero[0][2] = 4;
  sudoku.tablero[2][2].tablero[1][0] = 6;
  sudoku.tablero[2][2].tablero[1][1] = 3;
  sudoku.tablero[2][2].tablero[1][2] = 5;
  sudoku.tablero[2][2].tablero[2][0] = 1;
  sudoku.tablero[2][2].tablero[2][1] = 7;
  sudoku.tablero[2][2].tablero[2][2] = 9;

  */

  imprimirTablero(&sudoku);

  esSudoku(&sudoku);

  printf("\n");
  return 0;
}

void llenarTablero(tableroComp *tab) {

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
          (*tab).tablero[i][j].tablero[a][b] = rand() % 9 + 1;
        }
      }
    }
  }

}

void imprimirTablero(tableroComp *tab) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
          printf("%d ", (*tab).tablero[i][a].tablero[j][b]);
        }
        printf("  ");
      }
      printf("\n");
    }
    printf("\n");
  }
}

int verificarHorizontal(tableroComp *tab) {
  int flag = 1;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int cont = 0;
      int num[9];
      for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3 ; b++) {
          num[cont] = (*tab).tablero[i][a].tablero[j][b];
          cont += 1;
        }
      }
      for(int x = 0; x < 9; x++){
        for(int z = 0; z < 9; z++) {
          if (num[x] == num [z] && x != z) {
            flag = 0;
        }
      }
      cont = 0;
    }
  }

}
return flag;
}

int verificarVertical(tableroComp *tab) {
  int flag = 1;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int cont = 0;
      int num[9];
      for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3 ; b++) {
          num[cont] = (*tab).tablero[j][i].tablero[b][a];
          cont += 1;
        }
      }
      for(int x = 0; x < 9; x++){
        for(int z = 0; z < 9; z++) {
          if (num[x] == num [z] && z != x) {
            flag = 0;
        }
      }
      cont = 0;
    }
  }


}
  return flag;

}

int verificarCuadro(tableroComp *tab) {
  int flag = 1;
  int acum = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int cont = 0;
      int num[9];
      for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
          num[cont] = (*tab).tablero[i][j].tablero[a][b];
          cont += 1;
        }
      }
      for(int x = 0; x < 9; x++){
        for(int z = 0; z < 9; z++) {
          if (num[x] == num [z] && z != x) {
            flag = 0;
        }
      }
      cont = 0;
    }
  }

  if(acum == 9) {
    flag = 1;
  }

}
  return flag;
}

void esSudoku(tableroComp *tab) {
  int a,b,c;
  a = verificarVertical(tab);
  b = verificarHorizontal(tab);
  c = verificarCuadro(tab);

  if( a == 1 && b == 1 && c ==1 ) {
    printf("Es Sudoku");
  } else {
    printf("No Es Sudoku");
  }
}
