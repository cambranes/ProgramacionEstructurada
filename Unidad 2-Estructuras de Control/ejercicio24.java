import java.util.Scanner;

/**
S.B.T.M
 */

class Ejercicio_30 {
  public static void main(String Args[]){

  /* suma de terminos de 1/2 + 2/2^2 + 3/2^3....N/2^N.*/

    Scanner lector = new Scanner(System.in);


    int n;
    float resultado = 0;

    System.out.println("Ingrese numero: ");
     n = lector.nextInt();

      for(int i=1; i<=n; i++){
         
         resultado = resultado+(i/2^i);

          }

           System.out.println("la suma es: " + resultado);
   
  }
}
