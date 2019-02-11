//38.Calcular todos los numeros de tres digitos tales que la suma de los cubos de los digitos es igual al numero.
//Autor: Rodrigo Hernandez Gongora
//Entradas: Numeros enteros de tres digitos
#include <stdio.h>
int main(){
int a,b,c,x;
printf("Este algoritmo imprimira todos los numeros que cumplan que la suma de los cubos de sus digitos es igual a el numero original");
a=0;
x=0;
while(a<10){
    b=0;
    while(b<10){
        c=0;
        while(c<10){
            if(((a*a*a)+(b*b*b)+(c*c*c))==x){
            printf("El numero %d", x);
            printf("cumple con esta regla");
            }
            c++;
            x++;
}
        b++;
}
    a++;
}
}

//QA//
//Por: Amaury Morales Cerecedo
//Entradas: 123 y 444
//Salida: 1241 y 882
//Notas: No funciona. La suma de los cubos de los digitos da una cantidad erronea. A veces no corre.
