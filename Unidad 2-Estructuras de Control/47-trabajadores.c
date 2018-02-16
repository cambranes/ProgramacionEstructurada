/*Autor: José de la Rosa Baeza Pérez
Intruccion: el programa debe de leer datos (nombre, edad, sueldo por hora, horas trabajadas en la semana y porcentaje de impuestos a pagar  
de muchos trabajadores de una fabrica*/

#include<stdio.h>
int lectura(int);/*se leen los datos*/
float sueldo(int[],int[], float[], int)/*se calcula el sueldo neto*/;
void salida(char[],int [],int[],int[],float[],float[],int)/*impirime los valores que te pide el ejercicio*/;
int main()
{
	
	int trabajadores;
	
	printf("Cuantos trabajadores hay? ");
	scanf("%d",&trabajadores);/*Aqui se escanea el numero de trabajadores que dentro de la empresa*/
	lectura(trabajadores);	
		
return (0);	
}
//@param:aqui se leen los datos para calcular lo que se pide 
int lectura (int x){
	char nombre[x];
	int i,edad[x],sueldohora[x],horas[x];
	float impuestos[x],sueldo1[x];
	for (i=1;i<=x;i++)
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
	}
	for (i=1;i<=x;i++){
	sueldo1[i]=sueldo(horas,sueldohora,impuestos,i);
	}
	
	salida(nombre,edad,sueldohora,horas,impuestos,sueldo1,i);
	//@return:imprime los resultados
}


/*@param: aqui se realiza el calculo del sueldo neto*/ 
float sueldo(int horas[],int sueldohora[], float impuestos[], int c){
	float total,iva,resta;
	
	
	for (int i=c ;i<=c;i++)
	{
	resta=horas[i]-40;
	if (resta<0)/*En esta parte se analiza si van a haber horas extras o no*/
	{
		resta=0	;
	}
	else
	{
		horas[i]=horas[i]-resta;
	}
	/*En esta parte se hacen las operaciones correspondientes para calcular el total neto*/
	iva=impuestos[i]/100;
	total=((resta*(2*sueldohora[i]))+(sueldohora[i]*horas[i]));
	resta=total*iva;
	total=total-resta;
	}
	return total;
	//@return:regresa el sueldo neto de los trabajadores
}
/*@Param:En esta funcion se imprimen los valores que te piden*/
void salida(char nombre[],int edad[],int sueldohora[],int horas[],float impuestos[],float sueldo1[],int l){
	for (int i=1;i<l;i++)
	{
		printf ("Nombre: %c",nombre[i]);	printf("\n");
		printf ("Edad: %d",edad[i]);	printf("\n");
		printf ("sueldohora: %d",sueldohora[i]);	printf("\n");
		printf ("Horas: %d",horas[i]);	printf("\n");
		printf ("Impuesto: %.0f",impuestos[i]);	printf("\n");
		printf ("SUeldo neto: %.2f",sueldo1[i]);	printf("\n");
		printf("\n");
	}
}//@return:se imprimen los datos nada mas
