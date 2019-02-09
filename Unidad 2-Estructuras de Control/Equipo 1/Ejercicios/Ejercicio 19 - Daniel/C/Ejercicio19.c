#include <stdio.h>

int main() {
	int numero1;
	int numero2;
	int numero3;

  int sonIguales = 0;
  int numeroMayor;

		printf("Dame un tres numeros: \n");
		scanf("%d", &numero1);
		scanf("%d", &numero2);
		scanf("%d", &numero3);

		if(numero1==numero2){
			if(numero2==numero3){
				sonIguales = 1;
			}
		}else if(numero1 > numero2){
			if(numero1 > numero3){
			  numeroMayor = numero1;
			} else {
        numeroMayor = numero3;
      }
		} else if(numero2 > numero3){
			numeroMayor = numero2;
		} else {
			numeroMayor = numero3;
		}

    if(!sonIguales){
      printf("El numero mayor es %i", numeroMayor);
    } else {
      printf("Los numeros son iguales");
    }

	return 0;
}
