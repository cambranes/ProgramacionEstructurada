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
        boolean auxiliar = false;

        String nombreDias[] = new String[7];
        nombreDias[0] = "Lunes";
        nombreDias[1] = "Martes";
        nombreDias[2] = "Miércoles";
        nombreDias[3] = "Jueves";
        nombreDias[4] = "Viernes";
        nombreDias[5] = "Sábado";
        nombreDias[6] = "Domingo";

        System.out.println("Escriba el número del día que quiere(Empezando en lunes)");
        try {
            dia = entrada.nextInt();
        } catch (final Exception e) {
            System.out.println("Ese es un dato no válido, amiguito ");
            System.exit(0);
        }

        // Condicional, selección del día, validación y salida[Procedimiento]
        if (dia > 0 && dia <= 7){
            salida = nombreDias[dia - 1];
        } else {
            auxiliar = true;
        }

        //Entrega de salidas [Salida]
        if (auxiliar == false){
            System.out.println(salida);
        } else {
            System.out.println("El número proporcionado está fuera de rango [1,7]");
        }
    }
}
