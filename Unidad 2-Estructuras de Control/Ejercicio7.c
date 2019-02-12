/*
Ejercicio 7 C
Unidad 2 - {Programación Estructurada}
Equipo 1
Autor: Daniel Eduardo Gutierrez Delfin
Fecha: 8 de Febrero 2019
Entradas: Un numero
Salidas: El numero con su respectivo caso
---------------------------------------
Instrucción:
Escribir el programa para un programa que reciba un numero positivo, si
este numero es mayor a 1000 se le sumara un 5%, si el numero es mayor a
3000 se le sumara otro 10% adicional y si el numero es mayor a 5000 se le
sumara otro 5% adicional.
Notese que al final
número > 1000 5%
número > 3000 5% + 10%
número > 5000 5% + 10% + 5%
---------------------------------------
Procedimiento General:
---------------------------------------
1.Leer el numero que ha dado el usuario
2.Verificar que el numero sea positivo, si es negativo se vulve a pedir el numero
3.Ver si el numero es mayor a 5000, si es asi se imprime mas un 20%
4.Ver si el numero es mayor a 3000, si es asi se imprime mas un 15%
5.Ver si el numero es mayor a 1000, si es asi se imprime mas un 5%
6.Si es menor a 1000 solo se imprime el numero
---------------------------------------
*/
#include <stdio.h>

//- Entrada*//
int main() {
	float numero; //Definimos una varible//
	int v = 0;//Y le damos valor de 0//

	do {
		printf("Dame un numero positivo:\n"); //Se le proyecta al usuario que de un numero posiitivo//
		scanf("%f", &numero); 
		
		//- Proceso*//
		if(numero > 0){ //Revisamos si el usuario puso un numero positivo//
			v=1;
			if(numero > 5000){ //vemos si el numero es mayor a 5000//

				numero = (numero + (numero*.20));//Si es asi se imprime el numero mas el 20%//

			}else if(numero > 3000){//Vemos si el numero es mayor a 3000//

				numero = (numero + (numero*.15));//Si es asi se imprime el numero mas el 15%//

			}else if(numero > 1000){//Vemos si el numero es mayor a 1000//

				numero = (numero + (numero*.05));//Si es asi se imprime el numero mas el 5%
			}
		}else printf("El numero es negativo\n");//En caso de que anteriormente se haya puesto un numero negativo se le enviara un mensaje al usuario//
		//Se vueleve a pedir el numero si el numero fue negativo//
	} while(v==0);
	
//- Salida*//
	printf("\n El numero es: %.2f", numero);//Se imprime el numero

	return 0;
}


/*
Autor QA:Emmanuel Azcorra Balam
Entradas:3,1000,1001,3000,,3001,5001
salidas:3,1000,1051.05,3150,3451.15,6001.20
Proceso :Ok, todo correcto.*/

