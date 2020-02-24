
/**
 *
 * Determinar la serie siguiente:
a. ex = 1 + x + x2/2! + x3/3! + … + xn/n!
 */
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {

        //Se determinan las variables
        System.out.println("determinar el resultado de ex = 1 + x + x2/2! + x3/3! + … + xn/n!");
        Scanner valor= new Scanner(System.in);
        int x, n, e, f, y, i;
        
        //se obtienen los valores de entrada
        System.out.println("Ingrese el valor de x:");
        x= valor.nextInt();

        System.out.println("Ingrese el valor de n:");
        n= valor.nextInt();

        e = 1;
        i = 0;
        f = 1;

        //operaciones para determinar el resultado
        while (i < n){
            i = i + 1;
            f = f * i;
            y = ((int)Math.pow(x,i))/f;
            e = e + y;
            }
        //impresion del resultado
            System.out.println("el resultado es: ");
            System.out.println(e);

    }
    }