/*
Autor: Pedro Cauich
Entrada: número del día de la semana que se quiere
Salida: nombre del día
*/

import java.util.Scanner;

public class Main{
    public static void main(String arg[]) {

        // Definir variables [Entradas]
        Scanner entrada = new Scanner(System.in);
        int multiplos = 0;
        int resultado = 0;
        int limite = 0;

        try {
            limite = entrada.nextInt();
        } catch (Exception e) {
            System.exit(0);
        }

        //Bucle para los múltiplos y validación[Procedimiento] 
        if (limite < 5){
            System.exit(0);
         } else if(limite >= 5) {
             multiplos = limite/5;
         }

         //Impresión de salidas
         for(int i = 0; i < multiplos; i++){
             resultado = resultado + 5;
             System.out.println(resultado);
         }
    }
}

