/*
Autor: Daniel Eduardo Gutiérrez Delfín
Problema:Escribir y ejecutar un programa que simule una calculadora simple. Lee dos
enteros y un carácter. Si el carácter es un +, se imprime la suma; si es un -,
se imprime la diferencia; si es un * se imrpime el producto; si es un /, se
imprime el cociente; y si es un % se imprime el resto.
Entrada: El caracater de la operacion deseada y 2 números enteros
Salida: Resultado de la operacion seleccionada
Proceso:Seleccionar una de las operaciones poniendo uno de los caracteres, despues poner
los 2 números enteros y hacer la operacion segun lo seleccionado anteriormente,
Despues guardar el resultado en una variable para imprimirla en otro bloque.
*/
#include <stdio.h>

void ( int a, int b, int resultado, char opcion);

//Entrada//
int main (){
printf("Bienvenido a la Calculadora");
printf("Para comenzar seleccione el tipo de operación y luego de 2 numeros enteros");
printf("\n Calculadora");
printf("\n1.  (+)Suma");
printf("\n2.  (-)Resta");
printf("\n3.  (*)Multiplicación");
printf("\n4.  (/)Dividisión");
printf("\n5.  (%)Residuo\n");

scanf("\n%c",&opcion);
scanf("\n%i",&a);
scanf("\n%i",&b);
return 0;
}


//Proceso//
{ 
if (opcion == '+'){
	resultado= a+b;

	
}else if (opcion == '-'){
	resultado=a-b;
	
	
}else if (opcion == '*'){
	resultado=a*b;

	
}else if (opcion == '/'){
	resultado=a/b;

	
}else if (opcion == '%'){
	resultado=a%b;
	
}
}

//salida//
printf("El resultado es: %i",resultado);
}
/*
	QA Reviso: Carlos Chan
	- El programa esta mal hecho, no compila.
	- El nombramiento debe ser: Ejercicio#
*/
