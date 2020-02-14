/*
Autor: Pedro Cauich
Entrada: día de la semana que se quiere
Salida: nombre del día
*/

import java.util.Scanner;

public class Main{
    public static void main(String arg[]) {

        // Definir variables [Principio]
        Scanner entrada = new Scanner(System.in);
        int dia = 0;
        String salida = "";
        boolean auxiliar = true;

        String nombreDias[] = new String[7];
        nombreDias[0] = "Lunes";
        nombreDias[1] = "Martes";
        nombreDias[2] = "Miércoles";
        nombreDias[3] = "Jueves";
        nombreDias[4] = "Viernes";
        nombreDias[5] = "Sábado";
        nombreDias[6] = "Domingo";

        dia = entrada.nextInt();


        // Condicional, selección del día, validación y salida[Procedimiento]
        if (dia > 0 && dia <= 7){
            salida = nombreDias[dia - 1];
        } else {
            auxiliar = false;
        }

        //Entrega de salidas 
        if (auxiliar == true){
            System.out.println("El día correspondiente al número es: " + salida);
        } else {
            System.out.println(auxiliar);
        }
    }
}
