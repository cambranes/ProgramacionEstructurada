
/**
 *
 * Escribir una función que reciba un entero y calcule el Octal correspondiente
 */

import java.util.Scanner;

public class Octal {

  public static void main(String[] args) {
                 
        System.out.println( "Introduce un número decimal: "); 
        Scanner strDecimal = new Scanner(System.in);       
        int decimal = strDecimal.nextInt();
         
        System.out.println("Decimal a Octal");
         
        // 1º método con toOctalString 
        String octal = Integer.toOctalString(decimal);
        System.out.printf("El Decimal es: %d,y su Octal es: %s", decimal, octal);
         
       
                
    }
}