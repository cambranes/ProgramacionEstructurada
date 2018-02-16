/*
Autor: Magdiel Pech Menéndez
Valor de entrada: Grado
Valor de salida: Vector
Proceso: Desarrollar el binomio (x+1)^n dado el numero n 
*/
#include <stdio.h>
/*
prototipo de la funcion factorial
*/
int factorial(int );
/*
prototipo de la funcion coeficientesBinomio
*/
void coeficientesBinomio(int);
/*
prototipo de la funcion formulaCombinaciones
*/
int formulaCombinaciones(int,int);
/*
prototipo de la funcion imprimir
*/
void imprimir(int vector[],int);


int main(int argc, char *argv[]) {
	
	int grado;
	/*Entrada de datos*/
	printf("Ingresa el grado del polinomio (x+1)^n : ");
	/*Procedimiento y Salida*/
	scanf("%d",&grado);
	
	coeficientesBinomio(grado);
	
	return 0;
}
/*
Funcion int factorial
@param numeroDeElementos, es el numero del cual se tendra 
el factorial
@return factorial, Devuelve el factorial del numero
*/
int factorial(int numeroDeElementos)
{
	int factorial =1,i;
	
	if(numeroDeElementos !=0)
	{
		for(i=1;i<=numeroDeElementos;i++)
		{
			factorial = factorial*i;
		}
	}
	
	return factorial;
}

/*
Funcion void coeficientesBinomio
Realiza el resultado de los coeficientes de la potencia

@param gradoDelPolinomio, Recibe el grado al cual se va a 
elevar el polinomio (x+1)^n 

*/

void coeficientesBinomio(int gradoDelPolinomio)
{
	int i, longVec = gradoDelPolinomio +1;
	
	int posiciones[longVec];
	
	for(i=0; i<=gradoDelPolinomio;i++)
	{
		posiciones[i] = formulaCombinaciones(gradoDelPolinomio,i);
	}
	
	imprimir(posiciones,longVec);

}

/*
Funcion int formulaCombinaciones
Realiza la formula de: n!/(r!(n-r)!)
@param n, es el grado del polinomio
@param r, es la posicion del polinomio en el ciclo for
@return resultado, Retorna el resultado de los 
coeficientes del polinomio 
elevar el polinomio (x+1)^n 
*/

int formulaCombinaciones(int n,int r){
	int resultado;
	
	resultado = (factorial(n))/(factorial(r) * factorial(n-r));
	
	return resultado;
}

/*
Funcion void imprimir
Imprime el resultado
@param vector[], Recibe el vector utilizado para guardar
las posiciones de los coeficientes
@param magnitud, Es la magnitud del vector

*/

void imprimir(int vector[],int magnitud)
{
	int i;
	printf("El resultado del polinomio es: ");
	for(i=magnitud-1;i>=0;i--)
	{
		if(i==0)
		{
			printf("1 ");
		}else if(i == magnitud-1)
		{
			printf("x^%d + ",i);
			
		}
		else if(i==1)
		{
			printf("%dx + ",vector[i]);
		}else
		{
			printf("%dx^%d + ",vector[i],i);
		}		
	}
}




