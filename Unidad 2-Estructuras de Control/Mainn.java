import java.util.Scanner;




/*Entrada: dos numeros enteros positivos*/
/*salida: Maximo comun divisor de los dos numero*/


public class Main {
    private static final Scanner sc = new Scanner(System.in);
    
    public static void main (String[] args){
        
        System.out.println("ingrese numeros]: ");
        int a=sc.nextInt();
        int b=sc.nextInt();
        int resultado = mcd(a, b);
        
        System.out.println(resultado);
   
    
    }
    
    public static int mcd (int a, int b){
            if (a % b == 0){
                return b;
            } else{
                return mcd(b, a % b);
            }
    }
    }