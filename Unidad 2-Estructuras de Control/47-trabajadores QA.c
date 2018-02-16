/*Autor: José de la Rosa Baeza Pérez
Intruccion: el programa debe de leer datos (nombre, edad, sueldo por hora, horas trabajadas en la semana y porcentaje de impuestos a pagar  
de muchos trabajadores de una fabrica*/

#include<stdio.h>

int main()
{
	char nombre[100][100];
	int trabajadores,i,edad[100],sueldohora[100],horas[100];
	float total[100],iva,resta,impuestos[100];
	/*Entradas*/
	printf("Cuantos trabajadores hay? ");
	scanf("%d",&trabajadores);/*Aqui se escanea el numeor de trabajadores que dentro de la empresa*/
	for (i=1;i<=trabajadores;i++)
	{
		/*En esta parte se escanean todos los datos que se necesitan para realizan las operaciones*/
		printf ("Cual es el nombre del trabajador %d",i); printf(" ");
		scanf("%s",&nombre[i]);
		printf ("Cual es la edad del trabajador %d",i);printf(" ");
		scanf("%d",&edad[i]);
		printf ("Cual es su sueldo por hora del trabajador %d",i);printf(" ");
		scanf("%d",&sueldohora[i]);
		printf ("Horas trabajadas del trabajador %d",i);printf(" ");printf(" ");
		scanf("%d",&horas[i]);
		printf ("cual porcentaje de impuestos del trabajador %d",i);printf(" ");
		scanf("%f",&impuestos[i]);
		printf("\n");
		
		
		/*Procedimiento*/
		resta=horas[i]-40;
		if (resta<0)/*En esta parte se analiza si vana haber horas ectras o no*/
		{
			resta=0	;
		}
		else
		{
			horas[i]=horas[i]-resta;
		}
		/*En esta parte se hacen las operaciones correspondientes para calcular el total neto*/
		iva=impuestos[i]/100;
		total[i]=((resta*(2*sueldohora[i]))+(sueldohora[i]*horas[i]));
		resta=total[i]*iva;
		total[i]=total[i]-resta;
	}
	
	/*Salidas*/
	for (i=1;i<=trabajadores;i++)
	{
		printf ("Nombre: %s",nombre[i]);	printf("\n");
		printf ("Edad: %d",edad[i]);	printf("\n");
		printf ("sueldohora: %d",sueldohora[i]);	printf("\n");
		printf ("Horas: %d",horas[i]);	printf("\n");
		printf ("Impuesto: %.0f",impuestos[i]);	printf("\n");
		printf ("SUeldo neto: %.2f",total[i]);	printf("\n");
		printf("\n");
	}
	
return (0);	
}
/*QA Erick Cardenas
Se calculaa el sueldo neto de un trabajador con respecto a sus horas trabajadas, sueldo por hora, impuesto ademas de imprimir su edad y nombre
	Cuando se escribe un numero con letras en cualquier opcion int el resto de las opciones se bloquean
	Prueba1
	E:Cuantos trabajadores hay? 2
	Cual es el nombre del trabajador 1 a
	Cual es la edad del trabajador 1 10
	Cual es su sueldo por hora del trabajador 1 10
	Horas trabajadas del trabajador 1  10
	cual porcentaje de impuestos del trabajador 1 10
	
	Cual es el nombre del trabajador 2 b
	Cual es la edad del trabajador 2 20
	Cual es su sueldo por hora del trabajador 2 10
	Horas trabajadas del trabajador 2  15
	cual porcentaje de impuestos del trabajador 2 5
	S:
	Nombre: a
	Edad: 10
	sueldohora: 10
	Horas: 10
	Impuesto: 10
	SUeldo neto: 90.00
	
	Nombre: b
	Edad: 20
	sueldohora: 10
	Horas: 15
	Impuesto: 5
	SUeldo neto: 142.50
	Prueba 2
	E:
	Cuantos trabajadores hay? 1
	Cual es el nombre del trabajador 1 23
	Cual es la edad del trabajador 1 doce
	Cual es su sueldo por hora del trabajador 1 Horas trabajadas del trabajador 1  cual porcentaje de impuestos del trabajador 1
	S:
	Nombre: 23
	Edad: 0
	sueldohora: 0
	Horas: 0
	Impuesto: 0
	SUeldo neto: 0.00
	Prueba 3:
	E:
	Cuantos trabajadores hay? 3
	Cual es el nombre del trabajador 1 a
	Cual es la edad del trabajador 1 45
	Cual es su sueldo por hora del trabajador 1 76
	Horas trabajadas del trabajador 1  40
	cual porcentaje de impuestos del trabajador 1 10
	
	Cual es el nombre del trabajador 2 b
	Cual es la edad del trabajador 2 45
	Cual es su sueldo por hora del trabajador 2 78
	Horas trabajadas del trabajador 2  40
	cual porcentaje de impuestos del trabajador 2 10
	
	Cual es el nombre del trabajador 3 c
	Cual es la edad del trabajador 3 44
	Cual es su sueldo por hora del trabajador 3 79
	Horas trabajadas del trabajador 3  40
	cual porcentaje de impuestos del trabajador 3 10
	S:
	Nombre: a
	Edad: 45
	sueldohora: 76
	Horas: 40
	Impuesto: 10
	SUeldo neto: 2736.00
	
	Nombre: b
	Edad: 45
	sueldohora: 78
	Horas: 40
	Impuesto: 10
	SUeldo neto: 2808.00
	
	Nombre: c
	Edad: 44
	sueldohora: 79
	Horas: 40
	Impuesto: 10
	SUeldo neto: 2844.00*/
