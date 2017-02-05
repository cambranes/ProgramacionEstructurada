/*
Autor:Martin Alpuche Pech,Ulises Ancona Graniel,Emmanuel Azcorra Balam,Shaid Bojorquez Interian 28/Enero/17
Entradas: opcion (char)
Salidas: suma, resta, multiplicacion, division, modulo (int)
Procedimiento general: Se utiliza una estructura switch en la que el usuario
ingresa un caracter y segun el caracter se realizara la operacion aritmetica
correspondiente con dos numeros introducidos.
*/
#include <stdio.h>

/*
opcion como variable de entrada
num1 y num2 para la realizar la operacion correspondiente entre
estos numeros
*/

/* QA Testing (Equipo 7)
El programa funciona correctamente, no tiene ningún tipo de problema
siguiendo los pasos que indica. Aunque podría mejorar dandole una salida inmediata
cuando colocas una operacion o caracter diferente a los establecidos en las opciones.
Ya que el resultado, es que el programa sigue efectuandose.*/

int main(int argc, char *argv[]) {
	printf("Ingrese la operaci�n a realizar:\n");
	char opcion;
	int suma, resta, multiplicacion, division, modulo;
	scanf("%c",&opcion);
	/*
	se pide la opcion a operar y los valores de num1 y num2
	*/
	int num1, num2;
	printf("Ingrese los valores:\n");
	scanf("%d %d", &num1, &num2);
	/*
	se imprimen los los valores respectivos a cada operacion
	*/
	printf("El resultado es:\n");
	switch(opcion)
	{
	case '+':
	{
		suma = num1 + num2;
		/*Salidas*/
		printf("%d", suma);
		break;
	}
	case '-':
	{
		resta = num1-num2;
		/*Salidas*/
		printf("%d", resta);
		break;
	}
	case '*':
	{
		multiplicacion = num1*num2;
		/*Salidas*/
		printf("%d",multiplicacion);
		break;
	}
	case '/':
	{
		division = num1/num2;
		/*Salidas*/
		printf("%d", division);
		break;
	}
	case '%':
	{
		modulo = num1%num2;
		/*Salidas*/
		printf("%d", modulo);
		break;
	}
	default:
	{
		printf("la opcion que ingreso es incorrecta");
	}
	}
	return 0;
}
