/* Ejercicio #48
Programa que lee el suldo base y antiguedad del empleado
Calcula el incentivo con base a ello e imprime el sueldo base, incentivo y sueldo a pagar
- Audny D. Correa Ceballos (Equipo: 'about:blank') */
#include <stdio.h>
int main(){
    // DEFINIMOS LAS VARIABLES
    int sueldoBase;
    int antiguedad;
    float incentivo = 0;
    float sueldoaPagar = 0;
    //ENTRADAS
    //Sueldo base del empleado
    scanf("%i" ,&sueldoBase);
    //Antiguedad del empleado en la empresa
    scanf("%i", &antiguedad);
    //PROCESO
    //Encontrar cual condicion de antiguedad cumple y calcular el incentivo
    if(antiguedad >= 1 & antiguedad <= 3){
        incentivo = sueldoBase * 0.01;
    }else if(antiguedad >= 4 & antiguedad <= 6){
        incentivo = sueldoBase * 0.03;
    }else if(antiguedad >= 7 & antiguedad <= 9){
        incentivo = sueldoBase * 0.05;
    }else if(antiguedad >= 10){
        incentivo = sueldoBase * 0.07;
    }

    sueldoaPagar = incentivo + sueldoBase;
    // SALIDAS
    //Sueldo Base del empleado
    printf("\n %i", sueldoBase);
    // Incentivo generado de acuerdo a su antiguedad y su sueldo Base
    printf("\n %f", incentivo);
    // Sueldo a pagar
    printf("\n %f", sueldoaPagar);

    return 0;
}