/*
  Autor: Amilcar Ramirez Patron
  Entradas:La cantidad a retirar.
  Salidas: El monto que se retira, junto con el saldo; la operación no se puede realizar.
  Procedimiento general: Creé 3 variables. 1 como un saldo que se tiene de la máquina, siendo el máximo; el segundo fue para evaluar el 
  dinero restante en la máquina. El tercero es para que el usuario elija la cantidad que quiere sacar.
  Puse que si no se cumplen los requisitos de poner un número (en retirar) de que no sean mayores a 3000 o menores de 0, la operación no se
  realiza.
*/
#include <stdio.h>

int main(){
	int x = 3000;
	int saldo;
	int retirar;
	scanf("%d", &retirar);
	if ((retirar <= 3000)&&(retirar >= 0)){
		saldo = x - retirar;
		printf("El monto que se le ha dado ha sido de: %d\n", retirar);
		printf("el saldo de su cuenta es de: %d \n", saldo);
	}
	else{ 
		printf("la operacion no puede realizarse\n");
	}
	return 0;
}
/*
QA: Luis Gerardo Leon Ortega
entradas: la cantidad a retirar
salidas: el monto q ue se retira, junto con el saldo */
