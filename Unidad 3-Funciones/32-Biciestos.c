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
	//se pregunta el a�o de inicio (a�oA)
	printf("Introduce el a�o de inicio\n");
	//se guarda el valor de a�o A
	scanf("%d",&yearA);
	return yearA;
}
int Ryear2(){
	//inicializacion de variables
	int yearB=0;
	//se pregunta el a�o a finalizar (a�oB)
	printf("Introduce el a�o final\n");
	//se guarda el valor de a�oB
	scanf("%d",&yearB);
	//se inicia un for con inicio en a�oA y finalizacion en a�oB
	return yearB;
}
void Biciestos(int yearA,int yearB){
	//se inicializa la variable Suma
	int suma=0;
	for(int i=yearA;i<=yearB;i++)
	{
		/*condicion para saber si los a�os son biciestos (cada 4 a�os) 
		y si estan entre los parametros
		*/if(i%4==0&(yearA!=i&yearB!=i))
		{
			//se incrementa el valor del contador de biciestos
			suma++;
		}
	}
	//se imprime el numero de biciestos
	printf("El numero de a�os biciestos entre el a�o %d y %d es :\n %d ",yearA,yearB,suma);
}
