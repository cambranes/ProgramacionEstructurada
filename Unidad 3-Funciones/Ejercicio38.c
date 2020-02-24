/*Autor: Diego De Gante Pérez
*Entradas: Todos los digitos de tres digitos
*Salidas: El número en donde la suma de los cubos de los digitos sea igual al número
*Proceso:
Calcular todos los números de tres dígitos tales que la suma de los cubos de
los dígitos es igual al número
*/
#include <stdio.h>

void procesoSalida(int);

int main() {
    
    //Proceso y salidas
    int num = 100;
    ProcesoSalida(num);
    return 0;
}

//Desarrollo donde compara y va restando
void procesoSalida(int num){
    int var = 0, Dig1 = 0, Dig2 = 0, Dig3 = 0, total = 0;

    while (num < 1000){
        var = num;

        Dig3 = var%10;
        var = (var-var%10)/10;

        Dig2 = var%10;
        var = (var-var%10)/10

        Dig1 = var;
        
        total = Dig1*Dig1*Dig1 + Dig2*Dig2*Dig2 + Dig3*Dig3*Dig3;

    if(total == num){
        printf("%i\n",num);
    }
    num = num+1;
}
