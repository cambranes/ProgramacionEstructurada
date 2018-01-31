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
