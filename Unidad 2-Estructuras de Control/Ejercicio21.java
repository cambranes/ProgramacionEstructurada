//Equipo 3
//Diego De Gante
//Programa que dado un número entero n determina su factorial.
//Entrada:num (numero deseado por el usuario ha sacar factorial)
//Salida:factor (resultado de la factorial del numero dado)

import java.util.Scanner;

public class Main{
 public static void main(String arg[]){
   
   //Definir variables
   Scanner entrada = new Scanner(System.in); 
   int num = 0, i = 0, factor = 1;

   //Solicita y agarra el dato ingresado por el usuario
   System.out.println("Ingrese el numero a sacar factorial");
   num = entrada.nextInt();
   
   //Ciclo for de multiplicacion
   for(i = num; i > 0; i--){
     factor = (factor*i);
   }

   //Imprimir resultados
   System.out.println("El numero " + num + "!" + " da como resultado: " + factor);

 }
}