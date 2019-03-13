//autor: Jorge Alberto Chi leon
//Suma de los numeros de un vector MxM a excepción de los numeros de las
//diagonales; transponer una matriz de MxN a una de NxM
//Entradas: Tamaño de las filas, columnas, numero de la matria NxM

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void lectura(long* x);
void impresionMatriz(long filaMatriz, long columnaMatriz, 
	long matriz[][columnaMatriz]);
void asignacionAleatoriaMatriz(long filaMatriz, long columnaMatriz, 
	long matriz[][columnaMatriz]);
long sumaMatrizCuadrada(long filaMatriz, long columnaMatriz, 
	long matriz[][columnaMatriz]);
void asignacionMatriz(long filaMatriz, long columnaMatriz,
 	long matriz[][columnaMatriz]);
void invertirColumFilMatriz(long filaMatriz, long columnaMatriz,
	long matriz[][columnaMatriz], long matriz2[][filaMatriz]);
int main()
{
	srand(time(0));
	long dimensionesMatriz = 0;
	long sumaSinDiagonales = 0;
	//se leen los tamaños del vector cuadrado
	lectura(&dimensionesMatriz);
	//se declara la matriz cuadrada
	long matrizCuadrada[dimensionesMatriz][dimensionesMatriz];
	//se asignan valores aleatorios del 1-999
	asignacionAleatoriaMatriz(dimensionesMatriz, dimensionesMatriz, 
		matrizCuadrada);
	//se imprime la matriz
	impresionMatriz(dimensionesMatriz, dimensionesMatriz, matrizCuadrada);
	//se suman los datos sin las diagonales
	sumaSinDiagonales = sumaMatrizCuadrada(dimensionesMatriz, dimensionesMatriz,
		matrizCuadrada);
	printf("La suma es: %ld\n", sumaSinDiagonales);
	//pasamos al siguiente algoritmo que aparentemente sigue siendo el 6
	printf("Inserte las medidas MxN:\n");
	long dimensionFila = 0;
	long dimensionColumna = 0;
	//se leen los tamaños del vector cuadrado
	lectura(&dimensionFila);
	lectura(&dimensionColumna);
	//se declara la matriz
	long matrizMxN[dimensionFila][dimensionColumna];
	long matrizNxM[dimensionColumna][dimensionFila];
	//se asignan e imprimen los valores
	asignacionMatriz(dimensionFila, dimensionColumna, matrizMxN);
	printf("Matriz original:\n");
	impresionMatriz(dimensionFila, dimensionColumna, matrizMxN);
	invertirColumFilMatriz(dimensionFila, dimensionColumna, matrizNxM,
	 matrizMxN);
	printf("Matriz transpuesta:\n");
	impresionMatriz(dimensionColumna, dimensionFila, matrizNxM);
	return 0;
}
void lectura(long* x){
	//se leen los datos del tamaño de los vectores
    printf("Dame las dimensiones de la matriz cuadrada: \n");
    scanf("%d", x);
}
void impresionMatriz(long filaMatriz, long columnaMatriz, 
	long matriz[][columnaMatriz]){
	//funcion que imprime matrices long enteras
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
//funcion que asigna numeros aleatorio del 0-999 a la matriz
void asignacionAleatoriaMatriz(long filaMatriz, long columnaMatriz, 
	long matriz[][columnaMatriz]){
    for (int i = 0; i < filaMatriz; ++i)
	{
		for (int j = 0; j < columnaMatriz; ++j)
		{
			matriz[i][j] = ((rand() % 1000) + 1);
		}
	}
}
long sumaMatrizCuadrada(long filaMatriz, long columnaMatriz, 
	long matriz[][columnaMatriz]){
	//se generan dos contadores para descartar la diagonal inversa
	long suma = 0;
	long contadorUltimo = columnaMatriz - 1;
	long contadorPrimero = 0;
	for (int i = 0; i < filaMatriz ; ++i)
	{
		for (int j = 0; j < columnaMatriz ; ++j)
		{
			if (i != j)
				//se suman los valores que no perteneces a las diagonales
			{
				suma = suma + matriz[i][j];
				if ((i == contadorPrimero)&&(j == contadorUltimo))
				{
					suma = suma - matriz[i][j];
				}
			}
		}
		contadorUltimo = contadorUltimo - 1;
		contadorPrimero = contadorPrimero + 1;
	}
	return suma;
}
void asignacionMatriz(long filaMatriz, long columnaMatriz,
 long matriz[][columnaMatriz]){
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
void invertirColumFilMatriz(long filaMatriz, long columnaMatriz,
	long matriz[][filaMatriz], long matriz2[][columnaMatriz]){
	//aqui se transpone la matriz usando las mediadas al reves
	for (int i = 0; i < columnaMatriz; ++i)
	{
		for (int j = 0; j < filaMatriz; ++j)
		{
			matriz[i][j] = matriz2[j][i];
		}
	}
}

/*
	QA Reviso: Carlos Chan
	void lectura()
	Entradas: 3
	Salidas: Ninguna
	Es correcto
	
	void asignacionAleatoriaMatriz()
	Entradas: Una matriz 3x3 vacia
	Salidas: Ninguna pero la matriz se encuentra en este estado:
		482	138	930
		857	798	385
		676	802	977
	Llena la matriz con valores aleatorios correctamente.
	
	void impresionMatriz()
	Entradas: Una matriz 3x3
	Salidas: 
		482	138	930
		857	798	385
		676	802	977
		
	void sumaMatrizCuadrada()
	Entradas: 
		482	138	930
		857	798	385
		676	802	977
	Salidas: 2182
	Suma correctamente los numeros que no esten en las diagonales.
	
	void asignacionAleatoriaMatriz()
	Entradas: Una matriz 4x2 vacia
	Salidas: Ninguna pero la matriz se encuentra en este estado:
		1	2
		3	4
		5	6
		7	8
		
	void invertirColumFilMatriz()
	Entradas:
		1	2
		3	4
		5	6
		7	8
	Salidas:
		1	3	5	7
		2	4	6	8
	Crea la matriz transpuesta correctamente.
	
	El programa es correcto
*/
