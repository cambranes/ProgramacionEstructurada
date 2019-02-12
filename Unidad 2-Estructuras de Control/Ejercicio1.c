/*
Ejercicio 1 C
Unidad 2 - {Programación Estructurada}
Equipo 1
Autor: Daniel Eduardo Gutierrez Delfin
Fecha: 8 de Febrero 2019
Entradas: Un número
Salidas: Si el numero es par o impar
---------------------------------------
Instrucción:
Escribe un programa que reciba un número y te diga si ese número es par o
impar.
---------------------------------------
Procedimiento General:
---------------------------------------
1.Se define una variable
2.Se le proyecta al usuario que debe ingresar un numero
3.Se lee el numero y se convierte en la variable
4.Divimos el numero entre 2 y vemos si su residuo es igual a cero.
5 Si es igual a cero entonces se imprime que el numero es par.
6.Si es diferente de cero entonces se imprime que el numero es impar.
---------------------------------------
*/
#include <stdio.h>

int main()
{
	//- *Entradas*//
	//Definimos n como variable// 
  int numero; 
  int esPar = 0;

	printf ("Escribe un numero entero \n"); //Se da el mensaje al usuario//
	scanf ("%d", &numero); //leemos numero//

	//- *Procedimineto//
  //Vemos si el residuo de n dividido entre 2 es igual a 0 - *Procedimineto//
	if (numero % 2 == 0){
		esPar = 1;
  } else {
		esPar = 0;
  }
	//- *Salidas*//
//Se imprime el resultado 
  if(esPar){
    printf("El numero %d es par", numero);
  } else {
    printf("El numero %d es impar", numero);
  }
	return 0;
}

/*
Autor QA:Emmanuel Azcorra Balam
Entradas:3,4,3,12
salidas:impar,par,impar,par
Proceso :Ok, todo correcto.*/
