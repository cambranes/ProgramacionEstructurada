/*
Autor:Jose Eduardo Mendez Verdejo 02/Febrero/19
Entradas: id numerico, edad(enteros), sueldo(enteros)
# Salidas: numeros de personas que cumplan una condicion
# Procedimiento general:El contar el numero de personas mayores de 35 anios y con un sueldo desde 5000 hasta 7000
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Entradas*/
	int id[10],edad[10];
	float salario[10];
	int i=0;
	int mayores_35 = 0;
	
	for (i=0;i<10;i++)
	{
		//solicitando datos de la persona
		printf("Persona num.%i \n",i+1);
		
		printf("Id: ");
		scanf("%i",&id[i]);
		
		printf("Edad: ");
		scanf("%i",&edad[i]);
		
		printf("Sueldo: ");
		scanf("%f",&salario[i]);
		
		printf("\n");
		
		/*Procedimiento*/
		//comprobando si es mayor de 35 
		if(edad[i] > 35)
		{
			if(salario[i] >= 5000 && salario[i] < 7500)    //comprobando si su sueldo esta dentro del rango a contar
			{
				mayores_35++;
			}
		}
	}
	printf("\n");
	/*Salidas*/
	for(i=0;i<10;i++)
	{
		printf("Persona %i: id %i  Edad %i  Sueldo %.2f \n",i+1, id[i], edad[i], salario[i]);
	}
	printf("\n Total de personas mayores de 35 años y con sueldo entre 5000 y 7500:    %i",mayores_35);
	return 0;
}
/*
QA: Realizó: Guillermo Canto
Entradas: 0, -1, 18, 5000, 5001, 7500, 7501
Salidas: Ok, Ok
El programa funciona correctamente

*/
