#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

typedef struct tableroMenor{
  int panel[3][3];
} tableroMenor;

typedef struct tableroMayor{
  tableroMenor tablero[3][3];
} tableroMayor;

/*
Notas para el Roberto del futuro.
Seguir intentando hacerlo con struct, s[e] qu[e] se puede :c
Revisar como usar booleanos con punteros, parece que funcionan raro.
Comprobar por qu[e] esta ignorando mi sistema para evitar coincidencias.
*/

//Prototipos
tableroMenor llenarPanel(  );
void llenarSudoku( tableroMayor * );
void imprimirPanel( tableroMenor * );
void imprimirTablero( tableroMayor * );
bool checkVertical( tableroMayor * );
bool checkHorizontal( tableroMayor * );
bool checkSudoku( tableroMayor * );
void limpiarCheck( bool * );

int main() {
  tableroMayor sudoku;

  // Aleatorio-Inador 3001
  srand(time(NULL));

  llenarSudoku( &sudoku );

  imprimirTablero( &sudoku );

  printf( "%d", checkSudoku( &sudoku ) );
}

void llenarSudoku( tableroMayor *pan ){
  int aux;
  bool check[10];
  for ( int i = 0; i < 3; i++ ){
    for ( int j = 0; j < 3; j++ ){
      limpiarCheck( check );
      for ( int y = 0; y < 3; y++ ){
        for ( int x = 0; x < 3; x++ ){
          while ( true ){
            aux = rand() % 9;
            if( !check[ aux ] ){
              pan->tablero[j][i].panel[x][y] = aux + 1;
              check[ aux ] = true;
              break;
            }
          }
        }
      }
    }
  }
}

void imprimirTablero( tableroMayor *pan ) {
  for ( int i = 0; i < 3; i++ ) {
    for ( int j = 0; j < 3; j++ ) {
      for ( int y = 0; y < 3; y++ ) {
        printf(" | ");
        for ( int x = 0; x < 3; x++ ) {
          printf( "%d ", pan->tablero[j][i].panel[x][y] );
        }
        printf(" | ");
      }
      printf("\n");
    }
    printf("\n");
  }
}

bool checkVertical( tableroMayor *pan ) {
  bool check[10];
  for ( int i = 0; i < 3; i++ ){
    for ( int j = 0; j < 3; j++ ){
      for ( int y = 0; y < 3; y++ ){
        if( !check[ pan->tablero[j][i].panel[j][y] ] ){
          check[ pan->tablero[i][j].panel[y][j] ] = true;
        }
        else{
          return false;
        }
      }
    }
    limpiarCheck( check );
  }
  return true;
}

bool checkHorizontal( tableroMayor *pan ) {
  bool check[10];
  for ( int i = 0; i < 3; i++ ){
    for ( int j = 0; j < 3; j++ ){
      for ( int x = 0; x < 3; x++ ){
        if( !check[ pan->tablero[j][i].panel[x][i] ] ){
          check[ pan->tablero[j][i].panel[x][i] ] = true;
        }
        else{
          return false;
        }
      }
    }
    limpiarCheck( check );
  }
  return true;
}

bool checkSudoku( tableroMayor *pan ){
  return ( checkVertical( pan ) && checkHorizontal( pan ) );
}

void limpiarCheck( bool *a ) {
  for ( int i = 0; i < 9; i++){
    *(a + i) = false;
  }
}
/*
void checkVertical( ) {
  bool check[10];
  for ( int i = 0; i < 9; i++){
    printf("%d", check[i]);
  }

  limpiarCheck( check );
  for ( int i = 0; i < 9; i++){
    printf(" %d", check[i]);
  }

}

void limpiarCheck( bool (*a) ) {
  for ( int i = 0; i < 9; i++){
    *(a + i) = false;
  }
}
*/