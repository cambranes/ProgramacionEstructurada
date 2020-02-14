/* Ejercicio #43
Programa que lea N valores y que cuente cuantos de ellos son positivos y cuantos
son negativos (0 es condici'on de fin de lectura).
- Audny D. Correa Ceballos (Equipo 'about:blank') */
#include <stdio.h> 
int main(){
    //ENTRADAS
    int rangoDeValores; //Cantidad de valores que leera el problema
    int numero; //Numero que va a comparar el programa
    //PROCESO 
    int i; //Definir el iterador
    //inicializar los contadores
    int contadorNegativo = 0; 
    int contadorPositivo = 0;
    //Leer la cantidad de valores que leera el programa
    scanf("%i", &rangoDeValores);
    //Ciclo para leer todos los numeros y compararlos
    for(i=1; i<=rangoDeValores; i++){
        scanf("%i", &numero);
        // si es diferente de 0
        if (numero != 0){
            if (numero > 0){
                contadorPositivo += 1;
            }else{
                contadorNegativo += 1;
            }
        }else{ // si es 0
            break; 
        }
    }
    //SALIDAS
    printf("\n %i", contadorPositivo); //Este es el contador positivo
    printf("\n %i", contadorNegativo); //Este es el contador negativo
    return 0;
}