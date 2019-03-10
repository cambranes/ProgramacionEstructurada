//20.Determinar el valor de la secuencia 1 + 2 + 3 + 4 + 5 +... + n.
//  Autor: Rodrigo Hernandez Gongora
#include <stdio.h>
int entradas(int a);
int proceso(int x);
void salidas(int y, int z);
int main(){
    int num1=0, val1, flag;
    val1=entradas(num1);
    flag=proceso(val1);
    salidas(val1, flag);
    
    return 0;
}

int entradas(int a){
    printf("Introduce un numero\n");
    scanf("%d", &a);
    return a;
}

int proceso(int x){
    int res=0, cont=1;
    while (cont<=x) {
        res=res+cont;
        cont++;
    }
    return res;
}
void salidas(int y, int z){
    printf("La suma de los primeros %d numeros naturales es %d\n", y,z);
}
/*
Autor QA: Alejandro Torre Reyes
Entradas: 100
Salidas: 5050
Proceso: Ok
Modularidad: OK. El main no puede estar más simple.
    funcion entradas: ok
    funcion proceso: Ok. También se pudo haber realizado con la formula de n(n+1)/2
    funcion salidas: Ok
*/
