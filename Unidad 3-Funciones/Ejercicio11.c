#include <stdio.h>
/*Autor: Guillermo Canto Dzul
Entradas: Monto a retirar del cajero
Salidas: Saldo luego del retiro
*/
float entrada();
float proceso(float montoARetirar);
void salida(float saldo);
int main(int argc, char *argv[]){
	float montoARetirar, saldo;
	montoARetirar = entrada();
	saldo = proceso(montoARetirar);
	salida(saldo);
	return 0;
}
//Lee el monto a retirar
float entrada(){
	float montoARetirar;
	printf("Ingrese el monto a retirar:\n");
	scanf("%f", &montoARetirar);
	return montoARetirar;
}
//Calcula el saldo restante
float proceso(float montoARetirar){
	float saldo = 3000;
	if (montoARetirar > 3000 || montoARetirar <=0){
		printf("La operacion no pudo realizarse\n");
	}
	else{
		saldo = saldo - montoARetirar;
	}
	return saldo;
}
//imprime el saldo restante
void salida(float saldo){
	printf("Tu saldo es de %f\n", saldo);
}



