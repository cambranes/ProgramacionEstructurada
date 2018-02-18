/*
Titulo:3-diaSemana.c
Autor: Carlos Alejandro Pool Quintal"28/01//2018Entradas: Numeros enteros en un intervalo de [1,7]Salidas: Dia de la semana correspondiente al nuestro ingresadoProcedimiento General: Se determina el dia de la semana a partir del numerocorrespondiente utilizando la estructura if-else

*/#include <stdio.h>int main(int argc, char *argv[]) {	int numero;		printf ("Dime un numero del 1-7 para decirte el dia:\n");	scanf ("%d", &numero); /*Se ingresa el numero a evaluar (Entrada)*/		if ( numero >= 1 && numero <= 7){ /*Primeramente se pide que el numero ingresado se encuentre en el intervalo que el problrma indica*/
		if ( numero ==1){ /*Ahora se pregunta si es la primera respuesta posible*/
			printf ("El dia es Lunes."); /*En caso de que sea se imprime el resultado*/
		}else{
			if ( numero ==2){
				printf ("El dia es Martes.");
			}else{
				if ( numero ==3){
					printf ("El dia es Miercoles.");
				}else{
					if ( numero ==4){
						printf ("El dia es Jueves.");
					}else{
						if ( numero ==5){
							printf ("El dia es Viernes.");
						}else{
							if ( numero ==6){
								printf ("El dia Sabado.");
							}else{
								printf ("El dia es Domingo."); /*Debido a que no queda otra respuesta posible se coloca la que queda, en este caso el domingo*/
							}
						}
					}
				}
			}
		}
	}else{
		printf ("El numero ingresado no es valido"); /*En caso de que no sea el correcto se avisa (Salida)*/
	}
return 0;
}
