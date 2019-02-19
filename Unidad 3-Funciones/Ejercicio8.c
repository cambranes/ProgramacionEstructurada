//8. Escribir el programa para un programa que reciba 2 números y te indique si el 1er numero es múltiplo del segundo.
//  Autor: Rodrigo Hernandez Gongora

#include <stdio.h>
int entradas(int a);
int proceso(int x, int y);
void salidas(int z);
int main(){
    int num1=0, num2=0, val1, val2, flag;
    val1=entradas(num1);
    val2=entradas(num2);
    flag=proceso(val1,val2);
    salidas(flag);
    
    return 0;
}

int entradas(int a){
    printf("Introduce un numero\n");
    scanf("%d", &a);
    return a;
}

int proceso(int x, int y){
    int res;
    if ((x % y)==0) {
        res=1;
    }
    else {
        res=0;
    }
    return res;
}
void salidas(int z){
    if (z==1) {
        printf("El primer numero es multiplo del segundo\n");
    }
    else{
        printf("No son multiplos\n");
    }
    return;
}
/*
Autor QA: Jimmy Nathan Ojeda Arana
Entradas: 10,2
Salidas: "El primer numero es multiplo del segundo"
Proceso: OK
Modularización: OK. El main no puede estar más simple.
 Función entradas: OK
 Función proceso: OK
 Función salidas: OK
*/
