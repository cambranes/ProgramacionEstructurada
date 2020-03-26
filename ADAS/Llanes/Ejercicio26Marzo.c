#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int tam;

//Prototipos de funciones
int dimensionarArreglo();
void asignarArreglo(int arr[][tam]);
void imprimirArreglo(int arr[][tam]);
void desplegarMenu();
void menuOpciones(int arr[][tam]);
void nuevoCuadro(int arr[][tam]);
void recorrerMatriz2_4(int arr[][tam]);
void recorrerMatriz1_3(int arr[][tam]);

int main(){

  time_t t;
  srand((unsigned) time(&t));

  tam = dimensionarArreglo();

  int arreglo[tam][tam];

  asignarArreglo( arreglo );
  imprimirArreglo( arreglo );
  desplegarMenu();
  menuOpciones( arreglo );

}

int dimensionarArreglo(){
  int size;
  printf("Inserte las dimensiones del arreglo: ");
  scanf("%d", &size);
  return size;
}

void asignarArreglo(int arr[][tam]) {
  for(int i = 0; i < tam; i++ ) {
       for (int j = 0; j < tam; j++ ) {
           arr[i][j] = rand() % 10;
       }
    }
}

void imprimirArreglo(int arr[][tam]) {
    printf("[ Cuadro Actual ]\n");
    for( int i = 0; i < tam; i++ ) {
        printf("\t");
        for ( int j = 0; j < tam; j++ ){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
   }
}

void desplegarMenu(){
  printf("\n[ Tablero de opciones ]");
  printf("\n 1. Generar nueva matriz");
  printf("\n 2. Región 2-4");
  printf("\n 3. Región 1-3");
  printf("\n 0. Cerrar\n");
}

void menuOpciones(int arr[][tam]){
    bool check = true;
    int opc;
    
    desplegarMenu();

    while( check ){
      scanf("%d", &opc);
      printf("\n");
      switch(opc){
        case 0:
          printf("Buen dia :D\n");
          check = false;
          break;
        case 1:
          nuevoCuadro(arr);
          break;
        case 2:
          recorrerMatriz1_3(arr);
          break;
        case 3:
          recorrerMatriz1_3(arr);
          break;
        default:
          printf("El comando seleccionado no esta en la lista, intentelo denuevo :c\n");
      }
      printf("\n");
    }
}

void nuevoCuadro(int arr[][tam]){
  system("clear");
  asignarArreglo(arr);
  imprimirArreglo(arr);
  menuOpciones(arr);
}

void recorrerMatriz2_4(int arr[][tam]){
   for ( int i = 0; i < tam; i++ ){
    for ( int j = 0;j < tam; j++ ){
      if( ( j < tam - i && j >= i ) || ( j >= tam - i - 1  && j <= i ) ){
        printf("%d \t", arr[i][j]);
      }
      else{
        printf("\t");
      }
    }
    printf("\n");
  }
}

void recorrerMatriz1_3(int arr[][tam]){
  for ( int i = 0; i < tam; i++ ){
    for ( int j = 0;j < tam; j++ ){
      if( ( j <= i && j <= tam - 1 - i ) || ( j >= i && j >= tam - 1 - i ) ){
        printf("%d \t", arr[i][j]);
      }
      else{
        printf("\t");
      }
    }
    printf("\n");
  }
}

