import java.util.Scanner;
public class Ejercicio6
{
    public static void main(String[] args)
    {
        Scanner reader = new Scanner(System.in);               
        int cateto1, cateto2, hipotenusa;
        System.out.println("Ingrese el valor del primer cateto: ");
        cateto1 = reader.nextInt();

        System.out.println("ingrese el valor del segundo catero: ");
        cateto2 = reader.nextInt();

        System.out.println("Ingrese el valor de la hipotenusa: ");
        hipotenusa = reader.nextInt();
    


    Number hipotenusareal;
        hipotenusareal= Math.sqrt(Math.pow(cateto1, 2) + Math.pow(cateto2, 2));
        
    Number hipotenus, hipotenusarea;
        hipotenusarea=hipotenusareal;
        hipotenus=hipotenusa;
        

    if ( hipotenus == hipotenusarea) {

            System.out.printf ("Los Numeros Si Cumplen Con El Teorema De Pitagoras");
    
    } else {
    
        System.out.printf ("Los Numeros No Cumplen Con El Teorema De Pitagoras");
    
    }
    }
}