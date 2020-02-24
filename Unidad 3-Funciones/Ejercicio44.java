/*Autor: Diego De Gante Pérez
*Entradas: dos numeros enteros a dividir num, num2
*Salidas: El MCD de dos números con el algoritmo de Euclides
*Proceso:
a. Dividir el mayor de los dos números por el más pequeño
b. A continuación dividir el divisor por el resto
c. Continuar el proceso de dividir el último resto hasta que la división sea exacta.
d. El último divisor es el MCD
*/
import java.util.Scanner;

public class Main{
  
    public static void main(String[] args) {
        
        //Entradas
        int num,num2;
        entradas(num,num2);
        
        //Proceso
        proceso(num,num2);
        
        //Salida
        salida(num);
    }
    
    public static void entradas(int num, int num2){
        System.out.println("Ingrese el número");
        final Scanner entrada = new Scanner(System.in);
        num = entrada.nextInt();
        System.out.println("Ingrese el número");
        num2 = entrada.nextInt();
    }

    public static void procesos(int num, int num2){
        while(num != num2){
            if(num > num2){
                num = num - num2;
            }else{
                num2 = num2 - num;
            }
        }
    }

    public static void salida(int num){
        System.out.println("El resultado es:" + num);
    }
}
