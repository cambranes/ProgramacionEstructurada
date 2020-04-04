#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

typedef struct{

  int matriz[3][3];

} tablero;

//prototipo de funciones

void llenarCuadro( tablero *cuadro );
//tablero llenarCuadro();
void imprimirCuadro( tablero *cuadro );

int main(){

  tablero cuadro;

  //Generador-Inador 3ooo
  time_t t;
  srand((unsigned) time(&t));

  llenarCuadro(&cuadro);

  imprimirCuadro(&cuadro);

  return 0;
}

/*
tablero llenarCuadro(){
  bool check[9];
  int aux;
  tablero cuadro;
  for ( int i = 0; i < 3; i++ ){
    for ( int j = 0; j < 3; j++ ){
      printf("Hola ");
      while( true ){
        aux = rand() % 9;
        if( !check[ aux ] ){
          check[ aux ] = true;
          cuadro.matriz[i][j] = aux + 1;
          break;
        }
      }
    }
  }

  return cuadro;
}
*/

void llenarCuadro( tablero *cuadro ){

  bool check[9];
  int aux;

  for ( int i = 0; i < 3; i++ ){
    for ( int j = 0; j < 3; j++ ){
      while( true ){
        aux = rand() % 9;
        if( !check[ aux ] ){
          check[ aux ] = true;
          cuadro->matriz[i][j] = aux + 1;
          break;
        }
      }
    }
  }
}

void imprimirCuadro( tablero *cuadro ){
  for ( int i = 0; i < 3; i++ ){
    for ( int j = 0; j < 3; j++ ){
      printf("%d ", cuadro->matriz[i][j]);
    }
    printf("\n");
  }
}