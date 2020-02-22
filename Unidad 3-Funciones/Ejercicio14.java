/*
Autor: Alexis Ake


Problema:Escribir el programa que lea una velocidad e imprima "Muy rápido" si es
superior a 100, si no imprima "Detenido" si la velocidad es cero. 
 */
import java.util.Scanner;

 public class Main{
     public static void main(String[] args) {
         /*De la clase "Main", llamamos una de sus funciones(entrada())
        Se va a la parte de la funcion y esta regresa un valor que se asigna a la variable
        */
        int velocidad = Main.entrada();
        int caso = procesamiento(velocidad);
        salida(caso); 
     }
     
     public static int entrada(){
        Scanner entra = new Scanner(System.in); //Declaramos "entra" como objeto de entrada
        int velo = entra.nextInt(); //Leemos el dato, velocidad es una variable local
        return velo; //Regresamos el valor de la funcion
     }
     public static int procesamiento(int a){
        if(a>100){
            return 1;
        } else{
            return 2;
        }

     }
     public static void salida(int b){
         switch (b){
            case 1:
                System.out.println("Muy rapido");
                break;
            case 2:
            System.out.println("Detenido");
         }
     }

 }