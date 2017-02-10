/*
Autor: Daniel Medina 30/Enero/17
Entradas: El saldo inicial y cuanto se quiere retirar
Salidas: El saldo despues del retiro
Procedimiento general: despues de ingresar el saldo y cuanto
queremos retirar debemos ver que el retiro sea menor al saldo y que no
sea mayor a 3000
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
	int saldoInicial, saldoFinal, retiro;
		/*Entrada*/
	printf("Introduzca el saldo que tiene\n");
	scanf("%d", &saldoInicial);
	printf("Introduzca cuanto desea retirar\n");
	scanf("%d", &retiro);
	/*procedimiento*/
	/*
	Primero hay que verificar que el saldo inicial sea mayor
	al lo que se quiere retirar
	*/
	if(saldoInicial < retiro)
	{
		printf("No cuenta con saldo suficiente para realizar la operacion\n");
	}
	else
	{
		/*
		Aqui verificaremos si lo que se quiere retirar no supere el limite
		que es 3000
		*/
		if(retiro > 3000)
		{
			printf("El maximo para retirar es $3000");
		}
		else
		{
			/*
			Ya que pasa los dos chequeos anteriores se hace la resta del
			retiro al saldo incial
			*/
			saldoFinal = saldoInicial - retiro;
			printf("Transaccion realizada, saldo actual: %d", saldoFinal);
		}
	}
	return 0;
}

/*Notas de QA
Se realizaron 3 casos de prueba:
se retira mas del saldo disponible.
se retira todo el saldo disponible.
se retira menos del saldo disponible.
en los cuales:
programa realiza correctamente las operaciones,
o en su defecto devuelve un mensaje de error que
corresponde a una entrada de datos incorrecta.
*/
