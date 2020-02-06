import java.util.Scanner;
public class ejercico1
{
    public static void main(String[] args)
    {
        Scanner reader = new Scanner(System.in);                
int Numero1, Numero2;
                
    System.out.println("Ingrese El Primer Numero: ");
    Numero1 = reader.nextInt();

    System.out.println("Ingrese El Segundo Numero: ");
    Numero2 = reader.nextInt();


    if ( Numero1>Numero2) {

        System.out.printf (Numero1 + "es mayor que " + Numero2);

    } else {

        System.out.printf (Numero2 + "es mayor que " + Numero1);

}
    }
}