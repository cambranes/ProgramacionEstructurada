/*
Autor: Pedro Cauich

Problema:Escribe un programa que reciba 2 números y te imprima cual es el número
mayor, cual es el número menor o si son iguales en caso de que sea
necesario. 
 */
import java.util.Scanner;

 public class Main{
     public static void main(String[] args) {
         //Se hace el scan de la entrada, donde el valor de ella se mete al procesamiento, y ese valor resultante entra a la salida
   
        int numeroUno = leerNumero();
        int numeroDos = leerNumero();
        int caso = procesamiento(numeroUno, numeroDos);
        salida(caso); 
     }
     
     public static int leerNumero(){
        Scanner entra1 = new Scanner(System.in); //Declaramos "entra1" como objeto de entrada
        int num1 = entra1.nextInt(); //Leemos el dato, num1 es una variable local
        return num1; //Regresamos el valor de la funcion
     }
     public static int procesamiento(int x, int y){
        if(x%y == 0){
            return 1;
        }else {
            return 2;
        }
     }
     public static void salida(int c){

         switch (c){
             case 1:
             System.out.println("Si es multiplo");
             break;
             case 2:
             System.out.println("No es multiplo");
         }
     }
 }