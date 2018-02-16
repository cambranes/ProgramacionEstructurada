/*
Autor: Ricardo Serrano
Entrada: unidadCentena
Salida: unidadCentena
Proceso: calcular la centena próxima de un número 
*/
#include <stdio.h>
// Prototipo de la funcion redondear
int reondear(double);
int main(int argc, char *argv[]) {
 	
	 /*
	Variable de salida tipo entera: unidadCentena
	Variable tipo double para manejar decimales
	*/
	 double redondeo;
	 
	 printf("Escribir el numero: ");
	 /* Entrada de datos*/
	 scanf ("%lf",&redondeo);	
	
	 /*Salida de datos*/
	 printf("El numero redondeado a la centesima es %d",redondear(redondeo));
	return 0;
}

/*
Funcion int redondear 
La funcion redondea un numero a la centena proxima 
@param redondeo, valor a redondear
@return unidadCentena, valor de la centena redondeado
*/
int redondear(double redondeo)
{
	int unidadCentena;
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
	
	return unidadCentena;
}
