/*Bustamante rigel
Intruduccion:Este programa servira para retirar dinero de un cajero, donde la cantidad maxima es 3000 y al final calcular el monto que le queda */

#include<stdio.h>


int main() {
	int ext=1;
	int n = 0;
	int t=0;
	int x=0;
	int m = 0;
	int ex = 1;
	do {
		printf("Buen dia, digame cuanto dinero quiere agregar a sus fondos, actuales: %d\n",n);
		scanf("%d",&m); /*fondos del cajero*/
		n = n+m;
		do {
			printf("Cuanto desea retirar\n");
			scanf("%d",&x); /*monto a retirar*/
			t = t+x;
			if (t>3000) {/*se reisa que no pase el limite*/
				printf("Lo sentimos por transaccion solo puede retirar 3000\n");
			} else {
				if (t>n) {
					printf("No cuenta con suficientes fondos\n");/*reviza si hay fondos*/
				} else {
					printf("Retiro efectuado\n");
					n = n-t;
				}
			}
			printf("Su saldo actual es: %d\n",n);
			printf("Desea hacer otro retiro 1 no, 0 si\n"); /*seguir acando dinero*/
			scanf("%d",&ext);
			t = 0;
		} while (ext==0);
		printf("Desea agregar nuevos fondos, o desea retirarse, no 1, si 0\n"); /* meter mas fondos*/
		scanf("%d",&ex);
	} while (ex==0);
	return 0;
}

