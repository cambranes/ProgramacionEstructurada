/*
Autor:Jose Eduardo Mendez Verdejo 02/Febrero/19
Entradas:Entradas:num de trabajadores y su sueldo
Salidas:su nuevo sueldo en caso de que se aplicara un aumento, sino solo su sueldo
Procedimiento general: se aplicara un aumento a cada trabajador dependiendo de su sueldo
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Entradas*/
	int tam;
	
	//definiendo la cantidad de trabajadores
	printf("Cantidad de trabajadores: ");
	scanf("%i",&tam);
	printf("\n\n");
	//declarando vectores de almacenamiento
	int trabajadores[tam];
	float sueldoBase[tam];	
	
	int i=0;
	
	while(i<tam)
	{
		printf("Sueldo del trabajador num.%i: ",i+1);
		scanf("%f",&sueldoBase[i]);
		
		/*Procedimiento*/
		//comparando si el suedo es menor que 800
		if(sueldoBase[i] < 800)
		{
			//agregando el aumento del 15%
			sueldoBase[i] = sueldoBase[i] * 1.15;
		}
		
		i++;
	}
	printf("\n\n");
	/*Salidas*/
	//ciclo para imprimir el suelkdo de cada trabajador
	for (i=0;i<tam;i++)
	{
		printf("El sueldo del trabajador %i es de: %.2f \n",i+1,sueldoBase[i]);
	}
	return 0;
}
/* 
	QA
	Reviso: Guillermo Canto
	Entradas: 0, 2,1000,500, 2,1000,800
	Salidas: Ok, Ok, Ok
	
	El programa funciona correctamente
*/
