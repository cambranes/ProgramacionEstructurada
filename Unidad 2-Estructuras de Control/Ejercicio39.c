/*
Autor: Ake Vela Alexis Ivan

Proceso en general:
Determina si un numero es impar a partir del 0 hasta al 10 e imprime la suma de los impares

Entrada:
-Ninguna

Salida:
25
*/
int main(){
    int suma = 0;
    //Ciclo principal para calcular
    for(int i=0; i<=10; i++){

        //Evaluamos que no sea par y de no serlo se suma
        if(i%2 !=0){
            suma = suma + i;
        }
    }
    printf("%i", suma);

    return 0;
}