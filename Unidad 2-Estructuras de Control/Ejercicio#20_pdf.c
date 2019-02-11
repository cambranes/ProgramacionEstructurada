//20.Determinar el valor de la secuencia 1 + 2 + 3 + 4 + 5 +... + n.
//Autor: Rodrigo Hernandez Gongora
//Entradas un numero entero
#include <stdio.h>
int main(){
int n,sum,cnt;
//Proceso:
printf("Introduce un numero entero: ");
scanf("%d", &n);
sum=0;
cnt=0;
while(cnt<=n){
    sum=sum+cnt;
    cnt++;
}
//Salidas: la suma de todos los numeros enteros hasta el numero introducido
printf("La suma de los numeros es : %d", sum);
return 0;
}

//QA//
//Por: Amaury Morales Cerecedo
//Entradas: -1,0,1,2,3,4,5,6,7,8,9
//Salida: 44
//Notas: Funciona correctamente.
