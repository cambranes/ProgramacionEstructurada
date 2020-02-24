#include <stdio.h>

int main(int argc, char *argv[]) {
	//entrada: numero del cual se sabran los factores
	//salida: los factores del numero ingresado
	
	int num;
	int i;
	do{
	printf("ingrese numero: ");
	scanf ("%d", &num);
	} while (num<=0);
	
	for (i=1; i<=num/2; i++){
		if(num % i == 0){
			printf("%d", i);
		}
	}
	printf("%d", num);
	
	return 0;
}

