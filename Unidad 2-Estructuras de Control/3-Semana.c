/*
Autor:Daniel Medina 28/Enero/17
Entradas: numero entre el 1 - 7
Salidas:El dia de la semana
Procedimiento general:
Aqui se analiza un numero entero entre 1 y 7
y se le asigna el dia de la semana al cual corresponde.
*/
#include <stdio.h>
int main(int argc, char *argv[]) {
	/*Entrada de datos*/
	int dia, confirmacion;
	printf("Introduzca el numero del dia de la semana entre 1 y 7\n");
	scanf("%d", &dia);
	/*procedimiento
	Aqui se asigna el dia de la semana dependiendo del numero
	ingresado.*/
	switch(dia)
	{
	case 1:
		printf("Lunes");
		break;
	case 2:
		printf("Martes");
		break;
	case 3:
		printf("Miercoles");
		break;
	case 4:
		printf("Jueves");
		break;
	case 5:
		printf("Viernes");
		break;
	case 6:
		printf("Sabado");
		break;
	case 7:
		printf("Domingo");
		break;
	default:
		/*
		Si escribe cualquier otro numero que no sea entre 1-7
		*/
		printf("Dato invalido");
		break;
	}
	return 0;
}

/*
QA: Luis Madera
No contaba con el bloque para comentarios del QA,
el programa cumple con su funci�n usando casos para determinar el d�a de la semana a partir del entero ingresado, cuenta con la estructura establecida. Sin embargo  uso de la variable confirmaci�n sin utilidad.
*/
