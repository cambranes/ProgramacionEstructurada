/*
Autor: Ricardo Serrano
Entrada: unidadCentena
Salida: unidadCentena
Proceso: calcular la centena próxima de un número 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
 	
	 /*
	Variable de entrada tipo entera: unidadCentena
	Variable de salida tipo entera: unidadCentena
	Variable tipo double para manejar decimales
	*/
	 double redondeo;
	 int unidadCentena;
	 
	 printf("Escribir el numero: ");
	 /* Entrada de datos*/
	 scanf ("%lf",&redondeo);	
	 /*Proceso de datos*/
	 redondeo = redondeo/100;
	 
	 if(redondeo - (int)redondeo >= 0.5)
	 {
	 	
	   unidadCentena = (int)redondeo + (redondeo - (int)redondeo);
	   unidadCentena +=1; 
	   
	
	 }
	 else
	 {
	 	unidadCentena =(int)redondeo + (redondeo - (int)redondeo);
	  
	   
	 
	 }
	 
	 unidadCentena = unidadCentena*100;
	 /*Salida de datos*/
	 printf("El numero redondeado a la centesima es %d",unidadCentena);
	return 0;
}
