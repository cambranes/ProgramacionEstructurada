#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"

struct fracc{
  int numerador;
  int denominador;
};

/*
Nota para Roberto del futuro, agregar las excepciones que incluyan divisiones con 0, como el caso de restar dos fracciones iguales.
*/

//Prototipos de funciones
void leerRacionales( struct fracc *r1, struct fracc *r2, struct fracc *resultado );
void iniciarMenu( struct fracc *r1, struct fracc *r2, struct fracc *resultado );
void menuOpciones( struct fracc *r1, struct fracc *r2, struct fracc *resultado );
void opciones( struct fracc *r1, struct fracc *r2, struct fracc *resultado );
int mcd( int a, int b );
int mcm( int a, int b );
void simplificar( struct fracc *resultado );
void sumaRacionales( struct fracc *r1, struct fracc *r2, struct fracc *resultado );
void restaRacionales( struct fracc *r1, struct fracc *r2, struct fracc *resultado );
void multiRacionales( struct fracc *r1, struct fracc *r2, struct fracc *resultado );
void divRacionales( struct fracc *r1, struct fracc *r2, struct fracc *resultado );

int main(){
  
  struct fracc r1, r2, resultado;

  leerRacionales(&r1, &r2, &resultado);

}

void leerRacionales( struct fracc *r1, struct fracc *r2, struct fracc *resultado ){
  printf("Formato de racional: ");
  printf( GREEN "< " RESET);
  printf("Numerador");
  printf( GREEN " > " RESET);
  printf( GREEN "< " RESET);
  printf("Denominador");
  printf( GREEN " >\n" RESET);
  printf( "Inserte el primer racional:\n" );
  scanf("%d%d", &r1->numerador, &r1->denominador);
  printf( "Inserte el segundo racional:\n");
  scanf("%d%d", &r2->numerador, &r2->denominador);
  //Iniciar Menu
  iniciarMenu(r1, r2, resultado);
}

void iniciarMenu( struct fracc *r1, struct fracc *r2, struct fracc *resultado ){
  menuOpciones(r1, r2, resultado);
  opciones(r1, r2, resultado);
}

void menuOpciones( struct fracc *r1, struct fracc *r2, struct fracc *resultado ){
  system("clear");
  //Racional 1.
  printf( "Racional 1.\t");
  printf( "%d", r1->numerador );
  printf( GREEN " / " RESET );
  printf( "%d\n", r1->denominador );
  //Racional 2.
  printf( "Racional 2.\t");
  printf( "%d", r2->numerador );
  printf( GREEN " / " RESET );
  printf( "%d\n", r2->denominador );
  //Menu de opciones
  printf( GREEN "\n[" RESET);
  printf( " Opciones " );
  printf( GREEN "]\n" RESET);
  
  printf( GREEN "0. " RESET);
  printf( " Nuevo.\n" );
  
  printf( GREEN "1. " RESET);
  printf( "Suma.\t" );

  printf( GREEN "2. " RESET);
  printf( "Resta.\t" );

  printf( GREEN "3. " RESET);
  printf( "Multiplicación.\t" );

  printf( GREEN "4. " RESET);
  printf( "División.\n" );

  opciones(r1, r2, resultado);
}

void opciones( struct fracc *r1, struct fracc *r2, struct fracc *resultado ){
  bool check = true;
    int opc;
    
    while( check ){
      scanf("%d", &opc);
      printf("\n");
      switch(opc){
        case 0:
          system("clear");
          leerRacionales( r1, r2, resultado );
          break;
        case 1:
          sumaRacionales( r1, r2, resultado );
          break;
        case 2:
          restaRacionales( r1, r2, resultado );
          break;
        case 3:
          multiRacionales( r1, r2, resultado );
          break;
        case 4:
          divRacionales( r1, r2, resultado );
          break;          
        default:
          printf("El comando seleccionado no esta en la lista, intentelo denuevo :c\n");
      }
      printf("\n");
    }
}
int mcd( int a, int b ){
  
  int aux;

  if(b > a){
    aux = a;
    a = b;
    b = aux;
  }

  while(a % b!=0){
    a = a % b;
    aux = a;
    a = b;
    b = aux;    
  }

  return b;

}

int mcm( int a, int b ){

  return ( a * b ) / mcd( a , b );

}

void simplificar( struct fracc *resultado ){
  int aux;
  
  aux = mcd( resultado->denominador, resultado->numerador );

  resultado->numerador /= aux;

  resultado->denominador /= aux;

  if( resultado->numerador == 0 ){
    printf("0\n");
  }
  else{
    if( resultado->numerador % resultado->denominador == 0 ){
      printf("%d\n", resultado->numerador / resultado->denominador );
    }
    else{
      printf("%d/%d\n", resultado->numerador, resultado->denominador);
    }
  }

}

void sumaRacionales( struct fracc *r1, struct fracc *r2, struct fracc *resultado ){
  resultado->denominador = mcm(r1->denominador,r2->denominador);

  resultado->numerador = ( ( resultado->denominador / r1->denominador ) * r1->numerador ) + ( ( resultado->denominador / r2->denominador ) * r2->numerador );

  simplificar(resultado);

}

void restaRacionales( struct fracc *r1, struct fracc *r2, struct fracc *resultado ){
  resultado->denominador = mcm(r1->denominador,r2->denominador);

  resultado->numerador = ( ( resultado->denominador / r1->denominador ) * r1->numerador ) - ( ( resultado->denominador / r2->denominador ) * r2->numerador );

  simplificar(resultado);

}


void multiRacionales( struct fracc *r1, struct fracc *r2, struct fracc *resultado ){
  int aux;

  resultado->denominador = ( r1->denominador * r2->denominador );

  resultado->numerador = ( r1->numerador * r2->numerador );

  simplificar(resultado);

}

void divRacionales( struct fracc *r1, struct fracc *r2, struct fracc *resultado ){
  int aux;

  resultado->denominador = ( r1->denominador * r2->numerador );

  resultado->numerador = ( r1->numerador * r2->denominador );

  simplificar(resultado);

}