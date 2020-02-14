/* 
Autor: Ake Vela Alexis Ivan

Proceso en general:
El programa lee numeros indefinidamente hasta que se ingrese el numero 999 y calcula la 
media aritmetica (promedio) de los numeros hasta antes de ingresar 999

Entradas:
caso 1: 1, 2, 3, 4, 5, 6, 7, 8, 9, 999
caso 2: 2, 4, 6, 8, 10, 12, -22, 999

Salidas:
caso 1: 5.0
caso 2: 3.142857
*/
#include <stdio.h>
#include <math.h>
 
int main(){
    int numero = 0, sumaNum = 0, contador = 0;
    float promNumDeci = 0;

    while(numero != 999){
        scanf("%i", &numero);
        //Hacemos que el 999 no entre en el promedio
        if(numero != 999){
            sumaNum = sumaNum + numero;
            contador++;
        }
    }

     //Comprobamos la necesidad de puntos decimales
    if(sumaNum % contador ==0){
        printf("%i\n", sumaNum/contador);
    } else{
        promNumDeci = (float) sumaNum/contador;
        /*Multiplicamos por 100 para salvar los primeros 2 decimales, redondeamos el valor y dividmos entre 100
            para imprimir el valor con unicamente 2 decimales
            */
            promNumDeci = round((promNumDeci*100.0))/100.0;
            printf("%0.2f\n", promNumDeci); 
    }
    return 0;
}