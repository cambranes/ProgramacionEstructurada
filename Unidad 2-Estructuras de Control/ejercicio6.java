import java.util.Scanner
public class ejercico1
{
    public static void main(String[] args)
    {
        double cateto1, cateto2, hipotenusa;
        cateto1= LeerNumeroReal ("Introduzca el valor del primer cateto: ");
        cateto2= LeerNumeroReal ("Introduzca el valor del segundo cateto: ");
        hipotenusa= LeerNumeroReal ("Introduzca el valor de la hipotenusa: ");


        hipotenusareal= Math.sqrt(Math.pow(cateto1, 2) + Math.pow(cateto2, 2));
        

        if ( hipotenusa == hipotenusareal) {

            System.out.printf ("Los Numeros Si Cumplen Con El Teorema De Pitagoras");
    
    } else {
    
        System.out.printf ("Los Numeros No Cumplen Con El Teorema De Pitagoras");
    
    }
    }
}