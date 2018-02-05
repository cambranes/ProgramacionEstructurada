/*
Autor:Oscar Perera 30/Enero/17
Entradas: el entero al que se le desea obtener el factorial y un valor que llamaremos factorial y nos ayudará en el proceso
Salidas: el factorial del numero
Procedimiento general: mediante un ciclo que se llevará acabo mientras el número sea mayor a 0, se multiplicará el número por el factorial, y cada vez que se multiplique se reducirá en 1 su valor
*/
/*este programa recibirá un número entero y calculará su factorial*/

#include <stdio.h>
/*entradas*/
int main(int argc, char *argv[]) {
	
	int numero;
	int factorial=1;
	printf("ingresar numero: \n");
	scanf ("%d",&numero);
	

/*desarrollo*/
	while (numero>0){
	factorial = factorial*numero;
		numero--;
		
		
		
	}
/*salidas*/
	printf ("el factorial del numero es: %d \n", factorial);
	
	
	
	
	
	return 0;
}
