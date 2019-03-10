//autor: Jorge Alberto Chi leon
//Suma de dos vectores bidimensionales de mismo tamaño
//Entradas: Tamaño de las filas, columnas y numeros que contienen
#include <time.h>
#include <stdio.h>
void lectura(long* x);
void asignacionMatriz(long filaMatriz, long columnaMatriz, long matriz[][columnaMatriz]);
void SumaMatriz(long filaMatriz, long columnaMatriz, long matriz[][columnaMatriz],
	long matrizUno[][columnaMatriz], long matrizDos[][columnaMatriz]);
void impresionMatriz(long filaMatriz, long columnaMatriz, long matriz[][columnaMatriz]);
int main()
{
	long sizeFilaMatriz = 0, sizeColumnaMatriz = 0;
	//se leen los tamaños de los vectores
	lectura(&sizeFilaMatriz);
	lectura(&sizeColumnaMatriz);
	//se declaran los 3 vectores
	long matrizA[sizeFilaMatriz][sizeColumnaMatriz];
	long matrizB[sizeFilaMatriz][sizeColumnaMatriz];
	long matrizSuma[sizeFilaMatriz][sizeColumnaMatriz];
	//se asignan e imprimen los 2 vectores a sumar
	asignacionMatriz(sizeFilaMatriz, sizeColumnaMatriz, matrizA);
	printf("Matriz 1:\n");
	impresionMatriz(sizeFilaMatriz, sizeColumnaMatriz, matrizA);
	asignacionMatriz(sizeFilaMatriz, sizeColumnaMatriz, matrizB);
	printf("Matriz 2:\n");
	impresionMatriz(sizeFilaMatriz, sizeColumnaMatriz, matrizB);
	//se suman los vectores e imprimen
	SumaMatriz(sizeFilaMatriz, sizeColumnaMatriz, matrizSuma, matrizA, matrizB);
	printf("Matriz suma:\n");
	impresionMatriz(sizeFilaMatriz, sizeColumnaMatriz, matrizSuma);
	return 0;
}
void lectura(long* x){
	//se leen los datos del tamaño de los vectores
    printf("Dame las dimensiones de las matrices: \n");
    scanf("%d", x);
}
void asignacionMatriz(long filaMatriz, long columnaMatriz, long matriz[][columnaMatriz]){
    for (int i = 0; i < filaMatriz; ++i)
	{
		for (int j = 0; j < columnaMatriz; ++j)
		{
			//se avanza una casilla cada vez que se lee un dato del vector
			printf("Dame el valor de la posicion %ld, %ld: \n", i + 1, j + 1);
			scanf("%ld", &matriz[i][j]);
		}
	}
}
void SumaMatriz(long filaMatriz, long columnaMatriz, long matriz[][columnaMatriz],
	long matrizUno[][columnaMatriz], long matrizDos[][columnaMatriz]){
    for (int i = 0; i < filaMatriz; ++i)
	{
		for (int j = 0; j < columnaMatriz; ++j)
		{
			//se suman las casillas de ambos vectores
			matriz[i][j] = matrizUno[i][j] + matrizDos[i][j];
		}
	}
}
void impresionMatriz(long filaMatriz, long columnaMatriz, long matriz[][columnaMatriz]){
    printf("--------\n");
    for (int i = 0; i < filaMatriz; ++i)
	{
		for (int j = 0; j < columnaMatriz; ++j)
		{
			//se imprimen los datos de manera ordenada del vector
			if (j == columnaMatriz - 1)
			{
				printf("%ld\n", matriz[i][j]);
			} else {
				printf("%ld, ", matriz[i][j]);
			}

		}
	}
	printf("--------\n");
}
