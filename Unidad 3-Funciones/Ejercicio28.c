//28.Leer una secuencia de números no determinada (finalizará la lectura cuando el último número sea igual a 999) y determinar el valor mayor y el valor menor .
// Autor: Rodrigo Hernandez Gongora
/*int main(){
 int x=0, trMax=0, trMin=99999;
 while (x!=999) {
 printf("Introduce un numero\n");
 scanf("%d", &x);
 if (x>trMax) {
 trMax=x;
 }
 if (x<trMin) {
 trMin=x;
 }
 }
 printf("%d, %d", trMax, trMin);
 return 0;
 }
 */
#include <stdio.h>
void asignacion(int* x, int* y);
void salidas(int a, int b);
int main(){
    int trMax=0, trMin=99999;
    asignacion(&trMax, &trMin);
    salidas(trMax, trMin);
}

void asignacion(int* x, int* y){
    int num=0;
    while (num!=999) {
        printf("Introduce un numero\n");
        scanf("%d", &num);
        if (num>*x) {
            *x=num;
        }
        if (num<*y) {
            *y=num;
        }
    }
}

void salidas(int a, int b){
    printf("El numero mayor es %d y el numero menor es %d\n", a, b);
}
