/*
	Autor: Carlos Chan Gongora 15/02/2019
	Entradas: Un numero entero.
	Salidas: El dia de la semana correspondiente al numero ingresado.
	Procedimiento general: Lee un numero, valida que este en el rango de 1 a 7 e Imprime
  el dia correspondiente.
*/
#include <stdio.h>

int entrada();
int validarNumero(int);
void imprimirDia(int);

int main(){
  // Entradas
  int num;
  do{
    num = entrada();
  }while(!validarNumero(num));

  // Proceso
  imprimirDia(num);

  return 0;
}

// Lee un numero
int entrada(){
	int numero = 1;
	printf("Ingrese un numero entre 1 y 7: ");
	scanf("%d", &numero);
	return numero;
}
// Valida que el numero ingresado sea mayor a cero y menor a 8, devuelve 1 si es mayor y 0 si es menor.
int validarNumero(int num){
	int validar = 0;
	if(num > 0 && num < 8){
		validar = 1;
	}
	else{
		validar = 0;
	}
	return validar;
}
// Recibe un entero e imprime el dia correspondiente
void imprimirDia(int num){
  printf("El dia correspondiente al numero %d es: ", num);
  switch (num) {
    case 1: printf("Lunes");
            break;
    case 2: printf("Martes");
            break;
    case 3: printf("Miercoles");
            break;
    case 4: printf("Jueves");
            break;
    case 5: printf("Viernes");
            break;
    case 6: printf("Sabado");
            break;
    case 7: printf("Domingo");
            break;
    default: printf("El numero no esta en el rango de 1 a 7.\n");
  }
}
/*
QA: Hector Abraham V. Cosgalla
Entradas: 4, 2, 8 y 7
Salidas: Jueves, Martes, nada y Domingo (respectivamente)
Comentarios: Todo excelente.
*/
