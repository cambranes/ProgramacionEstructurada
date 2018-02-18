/*
Autor: Magdiel Pech
Entrada: datosNumericos
Salida: mediaAritmerica
Proceso: calcular la media de n numeros
hasta recibir un numero 0
*/
#include <stdio.h>
//Prototipo de la funcion media
float media();
int main(int argc, char *argv[]) {
	
	//Salida y proceso 
	printf("La media aritmetica es: %f ",media());
	
	return 0;
}
/*Funcion float media
calcula la media aritmetica de los datos que ingresas, finalizando con un 0
@return mediaAritmetica, retorna el resultado de la media*/
float media()
{
	float mediaAritmetica,datosNumericos, contador=-1, sumador=0;
	
	printf("Ingresa valores numericos para calcular la media aritmetica de los datos: \n");
	do
	{
		/*
		Entrada de datos
		*/
		scanf("%f",&datosNumericos);
		
		/*
		Proceso
		*/
		sumador += datosNumericos;
		contador++; 
		
	}while(datosNumericos !=0 );
	
	mediaAritmetica = sumador/contador;
	return mediaAritmetica;
}
