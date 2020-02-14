/*
Autor: Ake Vela Alexis Ivan

Proceso en general:
Leer el numero de las primeras tablas de multiplicar a imprimir (mayores a 0), leer el inicio y final 
que tendran esas tablas de multiplicar, determinamos el funcionamiento del contador segun el inicio 
y el final, calculamos e imprimimos los resultados

Entrada:
Caso 1: 2, 1, 3
Caso 2: 3, -10, -8
Caso 3: -2, 2, 1, 2

Salida:
Caso 1: las primeras 2 tablas de multiplicar desde 1 hasta 3
Caso 2: las primeras 3 tablas de multiplicar desde -10 hasta -8
Caso 3: las primeras 2 tablas de multiplicar desde 1 hasta 2
*/

#include <stdio.h>

int main(){
       //Variables usadas
       int numTablas = 0, inicio = 0, fin = 0, contador = 1, result = 0; 
       
       //Leemos las n primeras tablas
       scanf("%i", &numTablas);

       //Verificamos que las tablas sean mayores a 0, de lo contrario se vuelve a leer
       while(numTablas<=0){
           scanf("%i", &numTablas);;
       }

       //Leemos los valores de inicio y final de las tablas
       scanf("%i", &inicio);
       scanf("%i", &fin);

       //Determinamos la forma del contador
       if(inicio>fin){
           contador = -1;}

       //Ciclo para las primeras tablas de multiplicar
       for(int n= 1; n<= numTablas; n++){
        for (int i= inicio; i<= fin; i = i + contador){
            result = n*i;
            printf("%i\n", result);
            }
        }
}