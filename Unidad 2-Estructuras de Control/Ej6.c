/*ejercicio 6.-Escribir el programa para un programa en C que reciba tres números
enteros que representan dos catetos y una hipotenusa y que determine si
cumple con la ecuación de pitágoras.
a2 +b2 = c2 */

#include<stdio.h> //librerias
#include<math.h>

int main(){
    //declaracion de variables
int hipo,cateto1,cateto2,resultado,lados,hipotenusa;

   //entradad de datos
printf("Este programa calcula la suma de los cuadrados de 2 catetos \n y los compara con el cuadrado de la hipotenusa\n");
printf("para testear nuestro programa en catetos puedes usar los valores 3,4\n");
printf("y para la hipotenusa puedes usar el valor 5\n");
printf("Digite los 2 catetos separados por un espacio: ");
scanf("%i %i",&cateto1,&cateto2);
printf("Ahora digite la hipotenusa : ");
scanf("%i", &hipo);

    //proceso de informacion
lados=(pow(cateto1,2)+pow(cateto2,2));
hipotenusa= hipo*hipo;
printf("-----------------------------------------------------\n");

    //comparar a2=b2+c2
if(lados==hipotenusa){
    printf("Los datos introducidos corresponden a un triangulo Rectangulo");
}else{
    printf("Los valores introducidos NO corresponden a un triangulo rectangulo");

}


return 0;
}
