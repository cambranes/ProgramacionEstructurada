
/*Autor: José De La Rosa Baeza Pérez
Intoduccion: El programa va recibir N canditad de numeros,
y va determinar que numero es mayor y que numero es menor*/

#include <stdio.h>
	
	int main()
{
	int numeros[100],mayo, menor,N,i=0;/*En este lugar se definen las variables que voy a utilizar*/
	
	printf("cuantos numeros vas a ingresar? ");
	scanf("%d",&N);
	printf("Ingresa los numeros ");
	printf("\n");
	/*Procedimiento*/
	do
	{
		scanf("%d",&numeros[i]); /*Aqui se escanean todos los numeros*/
		i=i+1;
	} while(i!=N);/*Aqui esta la condicion para que el ciclo se pare*/
	if		((numeros[0])>(numeros[1]))
		/*Aqui se definen el mayor y el menor, para luego compararlas con los demas numeros para que determinar el numero mayor y menor*/
	{	
		mayo=numeros[0];
		menor=numeros[1];
	}
	else
	{
		mayo=numeros[1];
		menor=numeros[0];
	}
	i=0;/*Se vuelve a inicializar el indice en 0 para que se inicie desde el primer vector*/
	do{
		if((numeros[i])>mayo)
		{
			mayo=(numeros[i]);/*Aqui se define el numero mayor*/
		}
		else if ((numeros[i])<menor)
		{
			menor=(numeros[i]);/*Aqui se define el numero menor*/
		}
		i=i+1;
	} while(i<N);
	/*Salidas*/
	printf("EL numero mayor es %d", mayo);
	printf("\n");
	printf("El numero menor es %d", menor);
	
	
	
	return (0);
}
/* 
QA CArlos Alvares
entradas y salidas correctas, pero no verifica que la entrada para el arreglo sea positiva
permite por lo tanto "crear" arreglos de dimension -10, al ser de dimension 1,regresa 2 numeros
aunque solo exista 1
Prueba 1:
Entrada:
Arreglo(1)
numero 5
Salida:
Mayor:48
Menor:5
Prueba 2:
Arreglo -5
numeros:
1
2
3
4
5
6
....(se cicla y no termina)
salida:
No sale nada pues se cicla la entrada
Prueba 3:
Arreglo(2)
Entrada:
1,9
Salida
Mayor:9
Menor:1
*/

