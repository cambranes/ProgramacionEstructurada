/*
Ejercicio 19 C
Unidad 2 - {Programación Estructurada}
Equipo 1
Autor: Daniel Eduardo Gutierrez Delfin
Fecha: 8 de Febrero 2019
Entradas: 3 numeros
Salidas: El numero mayor
---------------------------------------
Instrucción:
Escribir un programa que lea tres números y determine el mayor de los tres.
---------------------------------------
Procedimiento General:
---------------------------------------
1.Se leen los 3 numeros dados por el usuario.
2.Se verifica que los numeros no sean iguales
3.Vemos si el primer numero es mayor que el segundo, si es asi vemos si es mayor al tercero y si es asi se imprime el primer numero
4.Si el primer numero no es mayor al segundo, vemos si el segundo numero es mayor al tercero y si es asi se imprime el segudno numero
5.Si no es ninguno de los primeros 2 cosos por default el mayor es el tercer numero y se imprime.
---------------------------------------
*/
#include <stdio.h>
//Definimos variables//
int main() {
	int numero1;
	int numero2;
	int numero3;

  int sonIguales = 0;
  int numeroMayor;
  //- Entrada*//
		printf("Dame un tres numeros: \n");//Le pedimos al usuario que nos de 3 numeros//
		scanf("%d", &numero1);//Se lee el numero 1//
		scanf("%d", &numero2);//Se lee el numero 2//
		scanf("%d", &numero3);//Se lee el numero 3//
		//- Proceso*//
		if(numero1==numero2){ //Revisamos que los numeros no sean iguales, de ser asi se imprime//
			if(numero2==numero3){
				sonIguales = 1;
			}
		}else if(numero1 > numero2){//vemos si el numero 1 es amyor al numero 2//
			if(numero1 > numero3){//Si es asi vemos si el numero 1 es mayor al numero 3)
			  numeroMayor = numero1; //Si fue asi el numero uno toma el trono
			}else {
              numeroMayor = numero3;
			}
		} else if(numero2 > numero3){//Si el numero 1 no fue mayor al numero 2, comparamos si el numero 2 es mayor al numero 3//
			numeroMayor = numero2;//Si es asi el numero 2 ocupa el trono//
		} else {
			numeroMayor = numero3;//Si no se cumplio lo anterior por default el mayor es el numero 3//
		}

    if(!sonIguales){
      printf("El numero mayor es %i", numeroMayor);//Se imprime el trono//
    } else {
      printf("Los numeros son iguales");
    }
	return 0;
}


/*
Autor QA:Emmanuel Azcorra Balam
Entradas:(1,2,3),(3,2,1),(2,1,3),(9,3,10)
salidas:3,3,3502080,4087808
Proceso:THIS IS NOW SOLVED Al poner un numero intermedio luego el numero mas pequeño y al final el numero mayor el numero que da en salida es incorrecto.

*/

