//autor: Jorge Alberto Chi leon
//Crear una matriz con numeros del 1 al n*n que no se repitan y
//verificar si lo formado es un cuadrado magico
//Entradas: Tamaño de las filas, columnas
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void lectura(long* x);
void asignacionAleatoriaMatriz(long filaMatriz, long columnaMatriz,
	long matriz[][columnaMatriz]);
void asignacionInicialMatriz(long filaMatriz, long columnaMatriz,
	long matriz[][columnaMatriz]);
void impresionMatriz(long filaMatriz, long columnaMatriz,
	long matriz[][columnaMatriz]);
int sumaFila(long filaMatriz, long columnaMatriz,
	long matriz[][columnaMatriz]);
int sumaColumna(long filaMatriz, long columnaMatriz,
	long matriz[][columnaMatriz]);
int main()
{
	//se declaran banderas para determinar si es magico el cuadrado
	int determinadorMagicoUno = 0;
	int determinadorMagicoDos = 0;
	srand(time(0));
	long dimensiones = 0;
	//se leen las dimensiones
	lectura(&dimensiones);
	//se declara la matriz
	long matriz1alanXn[dimensiones][dimensiones];
	//se asignan y aleatorizan los numero
	asignacionInicialMatriz(dimensiones, dimensiones, matriz1alanXn);
	impresionMatriz(dimensiones, dimensiones, matriz1alanXn);
	asignacionAleatoriaMatriz(dimensiones, dimensiones, matriz1alanXn);
	printf("Matriz:\n");
	impresionMatriz(dimensiones, dimensiones, matriz1alanXn);
	//se calcula si es magico (muy raro xddd) el cuadrado
	determinadorMagicoUno = sumaFila(dimensiones, dimensiones, matriz1alanXn);
	if (determinadorMagicoUno == 0)
	{
		printf("El cuadrado no es magico...\n");
	}else{
		determinadorMagicoDos = sumaColumna(dimensiones, dimensiones,
		matriz1alanXn);
		if (determinadorMagicoDos == 0)
		{
			printf("El cuadrado no es magico...\n");
		} else if (determinadorMagicoUno == determinadorMagicoDos)
		{
			printf("El cuadrado es magico.\n");
		} else {
			printf("El cuadrado no es magico...\n");
		}
	}

	return 0;
}
void lectura(long* x){
	//se leen los datos del tamaño de los vectores
	while(1){
	printf("Dame un numero natural como maximo 11 e impar: \n");
    scanf("%d", x);
    if ((*x<=11)&&(*x>0)&&((*x % 2)!=0))
    {
    	break;
    }
	}

}
void asignacionAleatoriaMatriz(long filaMatriz, long columnaMatriz,
	//se revuelven de forma aleatorio los numeros
	long matriz[][columnaMatriz]){
	long temporal = 0;
	long randomizer = 0;
	long randomizer2 = 0;
    for (int i = 0; i < filaMatriz; ++i)
	{
		for (int j = 0; j < columnaMatriz; ++j)
		{
			randomizer = (((rand()) % filaMatriz));
			randomizer2 = (((rand()) % filaMatriz));
			temporal = matriz[i][j];
			matriz[i][j] = matriz[randomizer2][randomizer];
			matriz[randomizer2][randomizer] = temporal;
		}
	}
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
void asignacionInicialMatriz(long filaMatriz, long columnaMatriz,
	//se asignan los numeros del 1 al n*n
	long matriz[][columnaMatriz]){
	long contador = 1;
	for (int i = 0; i < filaMatriz; ++i)
	{
		for (int j = 0; j < columnaMatriz; ++j)
		{
			matriz[i][j] = contador;
			contador = contador + 1;
		}
	}
}
int sumaFila(long filaMatriz, long columnaMatriz,
	//se ve si todas las filas dan el mismo numero
	long matriz[][columnaMatriz]){
	long suma = 0;
	long anterior = 0;
	int bandera = 1;
	for (int i = 0; i < filaMatriz; ++i)
	{
		for (int j = 0; j < columnaMatriz; ++j)
		{
			suma = suma + matriz[i][j];
		}
		if (i > 0)
		{
			if (suma != anterior)
			{
				bandera = 0;
				i = filaMatriz + 1;
			}
		}
		anterior = suma;
		suma = 0;
	}
	if (bandera != 0)
	{
		bandera = anterior;
	}
	return bandera;
}
int sumaColumna(long filaMatriz, long columnaMatriz,
	//se ve si todas las columnas dan el mismo numero
	long matriz[][columnaMatriz]){
	long suma = 0;
	long anterior = 0;
	int bandera = 1;
	for (int i = 0; i < filaMatriz; ++i)
	{
		for (int j = 0; j < columnaMatriz; ++j)
		{
			suma = suma + matriz[j][i];
		}
		if (i > 0)
		{
			if (suma != anterior)
			{
				bandera = 0;
				i = filaMatriz + 1;
			}
		}
		anterior = suma;
		suma = 0;
	}
	if (bandera != 0)
	{
		bandera = anterior;
	}
	return bandera;
}
