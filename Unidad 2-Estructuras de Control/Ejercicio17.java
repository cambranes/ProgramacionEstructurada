
/**
 *
 * Escribir un programa que dados dos ángulos positivos (valores enteros),
determine lo siguiente:
a. Si los ángulos son iguales
b. Si los ángulos son menores a 90, imprimir “ángulos agudos”
c. Si los ángulos son iguales a 90, imprimir “ángulos rectos”
d. Si los ángulos son mayores a 90, imprimir “ángulos obtusos”
e. Si los ángulos son iguales a 180, imprimir “ángulos llanos”
f. Si los ángulos son mayores a 180, imprimir “ángulos cóncavos”
 */
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        // Definicion y solicitud de las variables
        Scanner angulo= new Scanner(System.in);
        int angulo1, angulo2;
     
        System.out.println("Ingrese el angulo 1:");
        angulo1= angulo.nextInt();
        System.out.println("Ingrese el angulo 2:");
        angulo2= angulo.nextInt();

        //Operaciones para determinar los tipos de angulos y la impresion del resultado
        if (angulo1==angulo2){

            System.out.println("Los angulos son iguales");
        }
        if ((angulo1)<90 && (angulo2)<90){

            System.out.println("Los angulos son agudos");
        }
        if ((angulo1)==90 && (angulo2)==90){

            System.out.println("Los angulos son iguales");
        }
        if ((angulo1)>90 && (angulo2)>90){

            System.out.println("Los angulos son obtusos");
        }
        if ((angulo1)==180 && (angulo2)==180){

            System.out.println("Los angulos son llanos");
        }
        if ((angulo1)>180 && (angulo2)>180){

            System.out.println("Los angulos son concavos");
        }
    }
}