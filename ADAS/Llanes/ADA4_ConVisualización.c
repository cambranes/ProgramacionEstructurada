#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define N 5

//Prototipado de funciones
void asignarArreglo(int arr[][N]);
void imprimirArreglo(int arr[][N]);
void menuOpciones(int arr[][N]);
void desplegarMenu();
void nuevoCuadro(int arr[][N]);
void recorrerMatriz1_2Ascendente(int arr[][N]);
void recorrerMatriz1_2Descendente(int arr[][N]);
void recorrerMatriz3_4Ascendente(int arr[][N]);
void recorrerMatriz3_4Descendente(int arr[][N]);
void recorrerMatriz1_4Ascendente(int arr[][N]);
void recorrerMatriz1_4Descendente(int arr[][N]);
void recorrerMatriz2_3Ascendente(int arr[][N]); 
void recorrerMatriz2_3Descendente(int arr[][N]);
void recorrerMatriz1Ascendente(int arr[][N]);
void recorrerMatriz1Descendente(int arr[][N]);
void recorrerMatriz2Ascendente(int arr[][N]);
void recorrerMatriz2Descendente(int arr[][N]);
void recorrerMatriz3Ascendente(int arr[][N]);
void recorrerMatriz3Descendente(int arr[][N]);
void recorrerMatriz4Ascendente(int arr[][N]);
void recorrerMatriz4Descendente(int arr[][N]);
void recorrerDiagonalPrincipal(int arr[][N]);
void recorrerDiagonalInvertida(int arreglo[][N]); 

int main () {

  int arreglo[N][N];

  //Generador-Inador 3ooo
  time_t t;
  srand((unsigned) time(&t));

  asignarArreglo(arreglo);

  imprimirArreglo(arreglo);

  menuOpciones(arreglo);

  return(0);

}

void asignarArreglo(int arr[][N]) {
  for(int i = 0; i < N; i++) {
       for (int j = 0; j<N; j++) {
           arr[i][j] = rand() % 51;
       }
    }
}

void imprimirArreglo(int arr[][N]) {
    printf("[ Cuadro Actual ]\n");
    for(int i = 0; i < N; i++) {
        printf("\t");
        for (int j = 0; j<N; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
   }
}

void menuOpciones(int arr[][N]){
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
          recorrerMatriz1_2Ascendente(arr);
          break;
        case 3:
          recorrerMatriz1_2Descendente(arr);
          break;
        case 4:
          recorrerMatriz3_4Ascendente(arr);
          break;
        case 5:
          recorrerMatriz3_4Descendente(arr);
          break;
        case 6:
          recorrerMatriz1_4Ascendente(arr);
          break;
        case 7:
          recorrerMatriz1_4Descendente(arr);
          break;
        case 8:
          recorrerMatriz2_3Ascendente(arr);
          break;
        case 9:
          recorrerMatriz2_3Descendente(arr);
          break;
        case 10:
          recorrerMatriz1Ascendente(arr);
          break;
        case 11:
          recorrerMatriz1Descendente(arr);
          break;
        case 12:
          recorrerMatriz2Ascendente(arr);
          break;
        case 13:
          recorrerMatriz2Descendente(arr);
          break;
        case 14:
          recorrerMatriz3Ascendente(arr);
          break;
        case 15:
          recorrerMatriz3Descendente(arr);
          break;
        case 16:
          recorrerMatriz4Ascendente(arr);
          break;
        case 17:
          recorrerMatriz4Descendente(arr);
          break;
        case 18:
          recorrerDiagonalPrincipal(arr);
          break;
        case 19:
          recorrerDiagonalInvertida(arr); 
        default:
          printf("El comando seleccionado no esta en la lista, intentelo denuevo :c\n");
      }
      printf("\n");
    }
}

void desplegarMenu(){
  printf("\n[ Tablero de opciones ]");
      printf("\n 1. Generar nueva matriz");
      
      printf("\n 2. 1-2 Ascendiente\t\t6. 1-4 Ascendente\t\t10. 1 Ascendiente\t\t14. 3 Ascendiente");
      
      printf("\n 3. 1-2 Descendente\t\t7. 1-4 Descendente\t\t11. 1 Desendiente\t\t15. 3 Descendiente");
      
      printf("\n 4. 3-4 Ascendente\t\t8. 2-3 Ascendente\t\t12. 2 Ascendiente\t\t16. 4 Ascendiente");
      
      printf("\n 5. 3-4 Descendente\t\t9. 2-3 Descendente\t\t13. 2 Ascendiente\t\t17. 4 Descendiente");
      
      printf("\n 18. Diagonal principal\t19. Diagonal invertida\n");
      printf(" 0. Exit\n");
}

void nuevoCuadro(int arr[][N]){
  system("clear");
  asignarArreglo(arr);
  imprimirArreglo(arr);
  menuOpciones(arr);
}

void recorrerMatriz1_2Ascendente(int arr[][N]){
  for( int i = 0; i < N; i++ ) {
      for( int j = 0; j < N; j++ ){
        if( j < N - i ){
          printf("%d \t", arr[i][j]);
        }
        else{
          printf("\t");
        }
    }
    printf("\n");
  }
}

void recorrerMatriz1_2Descendente(int arr[][N]){
  for( int i = N-1; 0 <= i; i-- ) {
      for( int j = 0; j < N; j++ ){
        if( j < N - i ){
          printf("%d \t", arr[i][j]);
        }
        else{
          printf("\t");
        }
    }
    printf("\n");
  }
}

void recorrerMatriz3_4Ascendente(int arr[][N]){
  for( int i = 0; i < N; i++ ) {
      for( int j = 0; j < N; j++ ){
        if( j >= N - i -1 ){
          printf("%d \t", arr[i][j]);
        }
        else{
          printf("\t");
        }
    }
    printf("\n");
  }
}

void recorrerMatriz3_4Descendente(int arr[][N]){
  for( int i = N-1; 0 <= i; i-- ) {
      for( int j = 0; j < N; j++ ){
        if( j >= N - i -1 ){
          printf("%d \t", arr[i][j]);
        }
        else{
          printf("\t");
        }
    }
    printf("\n");
  }
}

void recorrerMatriz1_4Ascendente(int arr[][N]){
  for( int i = 0; i < N; i++ ) {
      for( int j = 0; j < N; j++ ){
        if( j <= i ){
          printf("%d \t", arr[i][j]);
        }
        else{
          printf("\t");
        }
    }
    printf("\n");
  }
}

void recorrerMatriz1_4Descendente(int arr[][N]){
  for( int i = N - 1; 0 <= i; i-- ) {
      for( int j = 0; j < N; j++ ){
        if( j <= i ){
          printf("%d \t", arr[i][j]);
        }
        else{
          printf("\t");
        }
    }
    printf("\n");
  }
}

void recorrerMatriz2_3Ascendente(int arr[][N]){
  for( int i = 0; i < N; i++ ) {
      for( int j = 0; j < N; j++ ){
        if( j >= i ){
          printf("%d \t", arr[i][j]);
        }
        else{
          printf("\t");
        }
    }
    printf("\n");
  }
}

void recorrerMatriz2_3Descendente(int arr[][N]){
  for( int i = N - 1; 0 <= i; i-- ) {
      for( int j = 0; j < N; j++ ){
        if( j >= i ){
          printf("%d \t", arr[i][j]);
        }
        else{
          printf("\t");
        }
    }
    printf("\n");
  }
}

void recorrerMatriz1Ascendente(int arr[][N]){
  int m = (N-1)/2;
  for ( int i = 0; i < N; i++ ){
    for ( int j = 0;j < N; j++ ){
      if( j <= m && j <= i && j <= N - 1 - i ){
        printf("%d \t", arr[i][j]);
      }
      else{
        printf("\t");
      }
    }
    printf("\n");
  }
}

void recorrerMatriz1Descendente(int arr[][N]){
  int m = (N-1)/2;
  for ( int i = N; 0 <= i; i-- ){
    for ( int j = 0;j < N; j++ ){
      if( j <= m && j <= i && j <= N - 1 - i ){
        printf("%d \t", arr[i][j]);
      }
      else{
        printf("\t");
      }
    }
    printf("\n");
  }
}

void recorrerMatriz2Ascendente(int arr[][N]){
  for( int i = 0; i < N; i++ ) {
    for( int j = 0; j < N; j++ ){
      if( j < N - i && j >= i ){
        printf("%d \t", arr[i][j]);
      }
      else{
        printf("\t");
      }
    }
    printf("\n");
  }
}

void recorrerMatriz2Descendente(int arr[][N]){
  for( int i = N - 1; 0 <= i; i-- ) {
    for( int j = 0; j < N; j++ ){
      if( j < N - i && j >= i ){
        printf("%d \t", arr[i][j]);
      }
      else{
        printf("\t");
      }
    }
    printf("\n");
  }
}

void recorrerMatriz3Ascendente(int arr[][N]){
  int m = (N-1)/2;
  for ( int i = 0; i < N; i++ ){
    for ( int j = 0;j < N; j++ ){
      if( j >= m && j >= i && j >= N - 1 - i ){
        printf("%d \t", arr[i][j]);
      }
      else{
        printf("\t");
      }
    }
    printf("\n");
  }
}

void recorrerMatriz3Descendente(int arr[][N]){
  int m = (N-1)/2;
  for ( int i = N; 0 <= i; i-- ){
    for ( int j = 0;j < N; j++ ){
      if( j >= m && j >= i && j >= N - 1 - i ){
        printf("%d \t", arr[i][j]);
      }
      else{
        printf("\t");
      }
    }
    printf("\n");
  }
}

void recorrerMatriz4Ascendente(int arr[][N]){
  int m = (N-1)/2;
  for ( int i = 0; i < N; i++ ){
    for ( int j = 0;j < N; j++ ){
      if( i >= m && j <= i && j >= N - 1 - i ){
        printf("%d \t", arr[i][j]);
      }
      else{
        printf("\t");
      }
    }
    printf("\n");
  }
}

void recorrerMatriz4Descendente(int arr[][N]){
  int m = (N-1)/2;
  for ( int i = N - 1; 0 <= i; i-- ){
    for ( int j = 0;j < N; j++ ){
      if( i >= m && j <= i && j >= N - 1 - i ){
        printf("%d \t", arr[i][j]);
      }
      else{
        printf("\t");
      }
    }
    printf("\n");
  }
}

void recorrerDiagonalPrincipal(int arr[][N]){
  for( int i = 0; i < N; i++ ) {
    for( int j = 0; j < N; j++ ){
      if( i == j ){
        printf("%d \t", arr[i][j]);
      }
      else{
        printf("\t");
      }
    }
  printf("\n");
  }
}

void recorrerDiagonalInvertida(int arr[][N]){
  for( int i = 0; i < N; i++ ) {
    for( int j = 0; j < N; j++ ){
      if( j == N - i - 1 ){
        printf("%d \t", arr[i][j]);
      }
      else{
        printf("\t");
      }
    }
  printf("\n");
  }
}
