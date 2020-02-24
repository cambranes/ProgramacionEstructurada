/*
Autor: Alexis Ake
Problema:Escribir el programa que lea una velocidad e imprima "Muy rápido" si es
superior a 100, si no imprima "Detenido" si la velocidad es cero. 

Entrada: un valor entero
Salida: "Muy rápido" si la entrada es mayor o igual a 100, "Detenido" si la entrada es 0 y "Ingrese una velocidad válida" para cualquier otro valor
 */

 # include <stdio.h>

 //Prototipos
 int leerEntrada();
 int calcularResultado(int a);
 void imprimirResultado(int b);

 int main(){
    //Asignamos a la variable "velocidad" el valor obtenido de la funcion leerEntrada
    int velocidad = leerEntrada();

    //Asignamos a la variable "caso" el valor obtenido de la funcion calcularResultado como imagen de "velocidad"
    int caso = calcularResultado(velocidad);

    //Hacemos el llamado a la funcion imprimirSalida con el valor "caso"
    imprimirResultado(caso);
 }

int leerEntrada(){
    int entrada = 0; //declaramos "entrada" como variable local
    scanf("%i", &entrada);//Asignamos la entrada de datos a la variable "entrada"
    return entrada;//Regresamos el valor de entrada
}
int calcularResultado(int a){
   //Con el parametro "a" que en realidad es el valor de "velocidad" del main, clasificamos el caso posible 
   if(a>=100){
      return 1; //El primer caso sera cuando la velocidad sea igual o mayor a 100
   } else if (a == 0){
      return 2; //El segundo caso sera cuando la velocidad sea igual a 0
   } else{
      return 3; //El caso 3 sera cualquier otro valor
   }
}
void imprimirResultado(int b){
   //Con el parametro "b" que en realidad es el valor de "caso", imprimimos la salida correspondiente
   switch (b){
      case 1: //Cuando la velocidad es igual o mayor a 100
         printf("Muy r%cpido", 160);
         break;
      case 2: //Cuando la velocidad es 0
         printf("Detenido");
         break;
      case 3: //Cualquier otro caso
         printf("Ingrese una velocidad v%clida", 160);
   }
}