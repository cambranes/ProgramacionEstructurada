#include <stdio.h>
#include <math.h>
/*
Ejercicio 38
Autor Jorge Anzures
*/


int main(int argc, char *argv[]) {
	/*inicializacion de las variables , como inicio 100 por ser el menor de 3 digitos
	Como final 999 por ser el ultimo
	*/
	int numero = 100;
	int digito1, digito2, digito3;
	int control = 999;
	int condicion=0;
	//Inicio del for para calcular los valores de los digitos
	for(int i=numero;i<=control;i++){
		digito1 = i / 100;
		digito2 = (i-(digito1*100))/10;
		digito3 = (i -((digito1*100)+(digito2*10)));
		//se asigna la suma de los cubos de los digitos a condicion
		condicion=(pow(digito1,3) + pow(digito2,3) + pow(digito3,3));
		//se verifica si condicion es igual al numero
		if( i == condicion){
			//se imprimen los numeros que cumplan
			//NOTA:La otra manera de hacerlo si imprimir en el for es haciendo un vector dinamico pero no sabia si hacerlo
			printf ("El numero %d cumple con la condicion \n",i);
		}
	}
	
	return 0;
}

/*Q\A: usaron una libreria que no esta permitida (<math.h>.
a pesar de eso el programa funciona correctamente
ya que raliza un ciclo for y analiza todos los numeros 
de 3 digitos y da como datos de salida los numeros que 
al sumar los cubos de cada digito dan el mismo numero y 
son los siguientes (153, 370, 371, 407). Q\A realizado por Carlos Eduardo Avila Criollo(Equipo 5 "dinamita"  */
