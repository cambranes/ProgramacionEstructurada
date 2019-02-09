//Problema 1 - Equipo 1 - Daniel Eduardo Gutiérrez Delfín
#include <stdio.h>

int main()
{
  int numero; //Definimo n como variable//
  int esPar = 0;

	printf ("Escribe un numero entero \n"); //Se da el mensaje al usuario//
	scanf ("%d", &numero); //leemos numero//

  //Si el residuo de n dividido entre 2 es igual a 0
	if (numero % 2 == 0){
		esPar = 1;
  } else {
		esPar = 0;
  }

  if(esPar){
    printf("El numero %d es par", numero);
  } else {
    printf("El numero %d es impar", numero);
  }
	return 0;
}

