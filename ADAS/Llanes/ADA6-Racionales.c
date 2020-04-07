#include <stdio.h>
#include <stdlib.h>

#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"

typedef struct racional{
    int numerador;
    int denominador;
} racional;

//Prototipos
void leerRacionales( racional * , racional * );
void mostrarRacionales( racional *, racional * );
//Operaciones esenciales
int mcd( int, int );
int mcm( int, int );
void simplificar( racional * );
racional sumaRacionales( racional *, racional *);
racional restaRacionales( racional *, racional * );
racional multiRacionales( racional *, racional * );
racional divRacionales( racional *, racional * );
void imprimirRacional( racional );

int main(){
    struct racional rac1, rac2;
    //Entrada
    leerRacionales( &rac1, &rac2 );

    //Proceso
    mostrarRacionales( &rac1, &rac2 );

    //Salida
    imprimirRacional( sumaRacionales( &rac1, &rac2 ) );
    imprimirRacional( restaRacionales( &rac1, &rac2 ) );
    imprimirRacional( multiRacionales( &rac1, &rac2 ) );  
    imprimirRacional( divRacionales( &rac1, &rac2 ) );
}

void leerRacionales( racional *r1, racional *r2 ){
	//Información
  printf("Formato de racional: ");
  printf( GREEN "< " RESET);
  printf("Numerador");
  printf( GREEN " > " RESET);
  printf( GREEN "< " RESET);
  printf("Denominador");
  printf( GREEN " >\n" RESET);
  //Lo que pidió xd
  //Racional 1
  printf("Ingrese racional 1: \n\t");
  scanf("%d",&r1->numerador);
  scanf("%d",&r1->denominador);
  //Racional 2	
  printf("Ingrese racional 2: \n\t");
  scanf("%d",&r2->numerador);
  scanf("%d",&r2->denominador);
}

void mostrarRacionales( racional *r1, racional *r2 ){
  //Limpiar consola
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

void simplificar( racional *resultado ){
  
  if( resultado->numerador == 0 || resultado->denominador == 0 ){
    resultado->numerador = 0;
  }
  else{
    int aux;
  
    aux = mcd( resultado->denominador, resultado->numerador );

    resultado->numerador /= aux;

    resultado->denominador /= aux;
  }
}

racional sumaRacionales( racional *r1, racional *r2 ){
  racional resultado;

  printf("Resultado de la suma:\n\t");

  if( r1->denominador == 0 || r2->denominador == 0 ){
    resultado.numerador = 0;
    resultado.denominador = 0;
  }
  else{
    resultado.denominador = mcm(r1->denominador,r2->denominador);

    resultado.numerador = ( ( resultado.denominador / r1->denominador ) * r1->numerador ) + ( ( resultado.denominador / r2->denominador ) * r2->numerador );
  }

  simplificar(&resultado);

  return resultado;

}

racional restaRacionales( racional *r1, racional *r2 ){
  racional resultado;

  printf("Resultado de la resta:\n\t");

  if( r1->denominador == 0 || r2->denominador == 0 ){
    resultado.numerador = 0;
    resultado.denominador = 0;
  }
  else{
    resultado.denominador = mcm(r1->denominador,r2->denominador);

    resultado.numerador = ( ( resultado.denominador / r1->denominador ) * r1->numerador ) - ( ( resultado.denominador / r2->denominador ) * r2->numerador );
  }

  if( resultado.denominador < 0 ){
    resultado.numerador *= -1;
    resultado.denominador *= -1;
  }

  simplificar( &resultado );

  return resultado;

}

racional multiRacionales( racional *r1, racional *r2 ){
  racional resultado;

  printf("Resultado de la resta:\n\t");

  resultado.numerador = r1->numerador*r2->numerador;
  resultado.denominador = r1->denominador*r2->denominador;

  simplificar(&resultado);

  return resultado;

}

racional divRacionales( racional *r1, racional *r2 ){
  racional resultado;

  printf("Resultado de la resta:\n\t");

  resultado.numerador = r1->numerador*r2->denominador;
  resultado.denominador = r1->denominador*r2->numerador;

  simplificar(&resultado);

  return resultado;

}

void imprimirRacional( racional resultado ){
  if( resultado.numerador == 0 ){
    printf("0\n");
  }
  else{
    if( resultado.numerador % resultado.denominador == 0 ){
      printf("%d\n", resultado.numerador / resultado.denominador );
    }
    else{
      printf( "%d", resultado.numerador );
      printf( GREEN " / " RESET );
      printf( "%d\n", resultado.denominador );
    }
  }

}