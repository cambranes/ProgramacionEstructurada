/*
	Autor: Carlos Chan Gongora 16/02/2019
	Entradas: ID, Edad y sueldo de 10 personas.
	Salidas: El numero de personas con mas de 35 años  entre 5000 y 7500.
	Procedimiento general: Lee los datos y luego compara si el sueldo esta en
 	el rango de 5000 y 7500 para aumentar el valor de un contador.
*/
#include <stdio.h>

void leerDatos(int[], int[], int[]);
int contarMayores(int[], int[]);
void imprimirResultados(int);

int main(){
  // Entradas
  int id[10], edad[10], sueldo[10];
  int mayores35 = 0;

  // Procedimiento
  leerDatos(id, edad, sueldo);
  mayores35 = contarMayores(edad, sueldo);

  // Salida
  imprimirResultados(mayores35);

  return 0;
}
// Lee los datos
void leerDatos(int id[], int edad[],int sueldo[]){
  for(int i = 0; i < 10; i++){
    printf("Persona: %d\n", (i + 1));
    printf("ID: ");
    scanf("%d", &id[i]);
    printf("Edad: ");
    scanf("%d", &edad[i]);
    printf("Sueldo: ");
    scanf("%d", &sueldo[i]);
    printf("\n");
  }
}
// Recorre el array de sueldo y cuenta los que esten entre 5000 y 7500
int contarMayores(int edad[], int sueldo[]){
  int contador = 0;
  for(int i = 0; i < 10; i++){
    if(edad[i] > 35){
      if(sueldo[i] >= 5000 && sueldo[i] <= 7500){
        contador++;
      }
    }
  }
  return contador;
}
// Imprime los resultados
void imprimirResultados(int mayores35){
  printf("La cantidad de personas con mas de 35 anios y sueldo entre 5000 - 7500 es: %d", mayores35);
}

/*
QA: Realizó: Jose Mendez
Entradas: (id,35,5000)(id,64,6500)(id, 65,7500)
Salidas: 3 personas mayores. 
Funciona Correctamente.
*/
