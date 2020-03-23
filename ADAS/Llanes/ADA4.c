#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define N 3

/*
Comentarios para el Roberto del Futuro:
-Arreglar el bucle del comando 0 (Probablemente sea por utilizar un switch-case, pero no estoy seguro, checalo,  tienes que darle el mismo número de veces al comando cerrar que el que le das a las otras opciones).
-Hacer que los comandos no se vean cuando se da el resultado (Digo, no puedes apreciar si esta bien xd).
-Arreglar el comando limpiar (veriguar una forma de mantener el resultado despues de darle a limpiar, no funciono poner un scanf ni getchar()).
-No olvides mejorar las secciones 1 y 3, se puede hacer mejor.
-Si conseguir alguna configuración XDXDXD
Nota. lo voy a dejar adrede, lo quitas mañana, de todas formas, todo funciona, cutre, pero funciona.
*/

//Prototipado de funciones
void asignarArreglo(int arr[][N]);
void imprimirArreglo(int arr[][N]);
void menuOpciones(int arr[][N]);
void nuevoCuadro(int arr[][N]);
//void limpiar(int arr[][N]);
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
    printf("Su cuadro actual es:\n");
    for(int i = 0; i < N; i++) {
        for (int j = 0; j<N; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
   }
}

void menuOpciones(int arr[][N]){
    bool check = true;
    int opc;
    //Eror, checar que el bucle de verdad se salga, no olvidar
    while( check ){
      printf("\nSi conseguir alguna configuración especial, marque alguna opción:\n\t0. Exit");
      printf("\n\t1. Crear nuevo cuadro");
      printf("\n\t2. Sección 1-2 Ascendiente");
      printf("\n\t3. Sección 1-2 Descendente");
      printf("\n\t4. Sección 3-4 Ascendente");
      printf("\n\t5. Sección 3-4 Descendente");
      printf("\n\t6. Sección 1-4 Ascendente");
      printf("\n\t7. Sección 1-4 Descendente");
      printf("\n\t8. Sección 2-3 Ascendente");
      printf("\n\t9. Sección 2-3 Descendente");
      printf("\n\t10. Sección 1 Ascendiente");
      printf("\n\t11. Sección 1 Descendiente");
      printf("\n\t12. Sección 2 Ascendiente");
      printf("\n\t13. Sección 2 Descendiente");
      printf("\n\t14. Sección 3 Ascendiente");
      printf("\n\t15. Sección 3 Descendiente");
      printf("\n\t16. Sección 4 Ascendiente");
      printf("\n\t17. Sección 4 Descendiente");
      printf("\n\t18. Diagonal principal");
      printf("\n\t19. Diagonal principal invertida\n");
      
      scanf("%d", &opc);
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
          printf("El comando seleccionado no esta en la lista, intentelo denuevo :c");
      }
    }
}

void nuevoCuadro(int arr[][N]){
  system("clear");
  asignarArreglo(arr);
  imprimirArreglo(arr);
  menuOpciones(arr);
}

//Función en cuarentena
/*void limpiar(int arr[][N]){
  system("clear");
  imprimirArreglo(arr);
  menuOpciones(arr);
}*/

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
  //limpiar(arr);
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
  //limpiar(arr);
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

//Todas las que estoy haciendo con banderas se pueden hacer mejor, sin embargo, Roberto es flojo.

void recorrerMatriz1Ascendente(int arr[][N]){
  bool bandera = true;
  int contador = 0, medio = N / 2;
  for( int i = 0; i < N; i++ ) {
      for( int j = 0; j < N; j++ ){
        if( j <= contador ){
          printf("%d \t", arr[i][j]);
        }
        else{
          printf("\t");
        }
    }
    
    if ( bandera && contador == medio ){
      bandera = false; 
    }

    if ( bandera ){
      contador++;
    }
    else{
      contador--;
    }
    printf("\n");
  }
}

void recorrerMatriz1Descendente(int arr[][N]){
  bool bandera = true;
  int contador = 0, medio = N / 2;
  for( int i = N - 1; 0 <= i; i-- ) {
      for( int j = 0; j < N; j++ ){
        if( j <= contador ){
          printf("%d \t", arr[i][j]);
        }
        else{
          printf("\t");
        }
    }
    if ( bandera && contador == medio ){
      bandera = false; 
    }
    if ( bandera ){
      contador++;
    }
    else{
      contador--;
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
  bool bandera = true;
  int contador = N - 1, medio = N / 2;
  for( int i = 0; i < N; i++ ) {
      for( int j = 0; j < N; j++ ){
        if( j >= contador ){
          printf("%d \t", arr[i][j]);
        }
        else{
          printf("\t");
        }
    }
    
    if ( bandera && contador == medio ){
      bandera = false; 
    }

    if ( !bandera ){
      contador++;
    }
    else{
      contador--;
    }
    printf("\n");
  }
}

void recorrerMatriz3Descendente(int arr[][N]){
  bool bandera = true;
  int contador = N - 1, medio = N / 2;
  for( int i = N - 1; 0 <= i; i-- ) {
      for( int j = 0; j < N; j++ ){
        if( j >= contador ){
          printf("%d \t", arr[i][j]);
        }
        else{
          printf("\t");
        }
    }
    if ( bandera && contador == medio ){
      bandera = false; 
    }
    if ( !bandera ){
      contador++;
    }
    else{
      contador--;
    }
    printf("\n");
  }
}

void recorrerMatriz4Ascendente(int arr[][N]){
  int m = N / 2, contador = 1;
  for( int i = 0; i < N; i++ ) {
    for( int j = 0; j < N; j++ ){
      if( i > m-1 && j > m - contador && j < m + contador ){
        printf("%d \t", arr[i][j]);
      }
      else{
        printf("\t");
      }
    }
    if( i > m-1 ){
      contador++;
    }
    printf("\n");
  }
}

//Error, no se respeta el orden, no olvdar arreglarlo
void recorrerMatriz4Descendente(int arr[][N]){
  int m = N / 2, contador = 1;
  for( int i = N - 1; 0 <= i; i-- ) {
    for( int j = 0; j < N; j++ ){
      if( i > m-1 && j > m - contador && j < m + contador ){
        printf("%d \t", arr[i][j]);
      }
      else{
        printf("\t");
      }
    }
    if( i > m-1 ){
      contador++;
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
