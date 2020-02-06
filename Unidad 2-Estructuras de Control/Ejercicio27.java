/* 
Autor: Ake Vela Alexis Ivan

Proceso en general:
El programa lee numeros indefinidamente hasta que se ingrese el numero 999 y calcula la 
media aritmetica (promedio) de los numeros hasta antes de ingresar 999

Entradas:
caso 1: 1, 2, 3, 4, 5, 6, 7, 8, 9, 999
caso 2: 2, 4, 6, 8, 10, 12, -12, 999

Salidas:
caso 1: 5.0
caso 2: 3.142857
*/
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        //Variables empleadas
        int numero = 0, sumaNum = 0, contador = 0;
        float promNum = 0;
        
         while(numero != 999){
            numero = entrada.nextInt();
            //Hacemos que el 999 no entre en el promedio
            if(numero != 999){   
                sumaNum = sumaNum + numero;
                contador++;
             }
        }
        promNum =(float) sumaNum/contador;
        System.out.println(promNum);
    }
}