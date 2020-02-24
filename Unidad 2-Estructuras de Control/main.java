
import java.util.Scanner;


/**
 *
 * @author suemy
 */
public class Main{

    private static double i;

   
    @SuppressWarnings("empty-statement")
    public static void main(String[] args) {
        
       //entrada: el valor de n
       // salida: suma de terminos de 1/2 hasta n/2^n
        Scanner lector=new Scanner(System.in);
        int n;
        double resultado;
        resultado = 0;
      
      System.out.println("ingrese un numero entero positivo");
      n=lector.nextInt();
      
   for (i=1; i<=n; i++){
    resultado=resultado+ i/Math.pow(2, i);
    
   }
   System.out.println(resultado);
    }
}
    
   