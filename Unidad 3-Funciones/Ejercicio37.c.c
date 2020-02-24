//Autor: Farid Espadas Escalante   
#include <stdio.h> //Algoritmo en C que calcula la suma de los n primeros números primos, dandole n. 

//Entrada | int n;
//Procesos | Recorrer hasta encontrar los n números primos y hacer la sumatoria correspondiente. 
//Salida | sumatoria de los n primeros números primos. 

int read_n();
int sum(int num);

int main(){ //Función principal

    int n, sum_n_prime;

    n = read_n();
    sum_n_prime = sum(n);

    printf("%d", sum_n_prime);

    return 0;

}

int read_n(){ //Función donde leemos la suma de los n primos a calcular

    int n_suma;
    scanf("%d",&n_suma);
    
    return n_suma;

}


int sum(int num){ //Función donde sucede la sumatoria, cada vez que encuentra un primo, lo suma. 

    int i, j, n, suma = 0, es_primo = 1;

    for (i = 2; num > 0; i++) //a partir de dos están los primos
	{
		for (j = 2; j < i; j++)
		{
			if ( i % j == 0)		
			{
				es_primo = 0;
				break;
			}
		}
		
		if (es_primo)
		{
			suma += i;
			num--;
		}	
		es_primo = 1;
	}

    return suma;
}
