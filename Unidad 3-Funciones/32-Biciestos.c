#include <stdio.h>

/*
Ejercicio 32
Autor Erick Cardenas
*/
int Ryear1();
int Ryear2();
void Biciestos(int,int);
int main(int argc, char *argv[]) {
	int yearA=Ryear1();
	int yearB=Ryear2();
	Biciestos(yearA,yearB);
	return 0;
}
int Ryear1(){
	//inicializacion de variables
	int yearA=0;
	//se pregunta el año de inicio (añoA)
	printf("Introduce el año de inicio\n");
	//se guarda el valor de año A
	scanf("%d",&yearA);
	return yearA;
}
int Ryear2(){
	//inicializacion de variables
	int yearB=0;
	//se pregunta el año a finalizar (añoB)
	printf("Introduce el año final\n");
	//se guarda el valor de añoB
	scanf("%d",&yearB);
	//se inicia un for con inicio en añoA y finalizacion en añoB
	return yearB;
}
void Biciestos(int yearA,int yearB){
	//se inicializa la variable Suma
	int suma=0;
	for(int i=yearA;i<=yearB;i++)
	{
		/*condicion para saber si los años son biciestos (cada 4 años) 
		y si estan entre los parametros
		*/if(i%4==0&(yearA!=i&yearB!=i))
		{
			//se incrementa el valor del contador de biciestos
			suma++;
		}
	}
	//se imprime el numero de biciestos
	printf("El numero de años biciestos entre el año %d y %d es :\n %d ",yearA,yearB,suma);
}
