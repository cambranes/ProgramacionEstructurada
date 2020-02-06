
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int primo, residuo, acum;

        //entrada de numero entero 
        primo = entrada.nextInt();

        //División del número introducido entre los numeros comprendidos entre el mismo y el 1
        acum = 0;
        for (int i = 1; i <= primo; i++) {
            residuo = primo % i;
            if (residuo == 0) {
                acum += 1;
            }
        }
        
        //Verificacion del resultado de las divisiones
        if (acum == 2) {
            System.out.println("1");
        } else {
            System.out.println("0");
        }

    }

}

/*
Mario Chan Zurita
Programa para saber si un número dado es primo o no
Entrada: Un número entero 
Salida: 1 si el número es primo, 0 si el numero no es primo
*/