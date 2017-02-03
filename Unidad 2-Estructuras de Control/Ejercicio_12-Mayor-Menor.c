#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Aqui se definen las variables, m es el primer numero y n el segundo*/
	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);
	/*Aqui es donde empieza la parte de las pruebas para determinar cual de los dos es el mayor */
	if (m > n) {
		printf("%d es mayor que %d", m, n);
	}
	else if(m < n){
		printf("%d es menor que %d", m, n);
	}
	/*Salida*/
	else {
		printf("%d y %d son iguales", m, n);
	}	
	return 0;
}

