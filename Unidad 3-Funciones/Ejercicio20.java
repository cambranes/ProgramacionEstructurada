/*
Autor: Alexis Ake

Problema: Determinar el valor de la secuencia 1 + 2 + 3 + 4 + 5 +... + n.
Entrada: "n" como un numero natural
Salida: la suma de los naturales hasta "n"
*/

import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        //Asignamos a la variable "numero", el valor obtenido de la funcion leerEntrada
        int numero = Main.leerEntrada();

        //Asignamos a la variable "resultado", el valor obtenido de la funcion calcularResultado como imagen de "numero"
        int resultado = Main.calcularResultado(numero);

        //Llamamos a la funcion imprimirSalida con el valor de resultado
        imprimirSalida(resultado);
    }
    public static int leerEntrada(){
        Scanner entrada = new Scanner(System.in); //Objeto que lee entradas

        //A la variable local "num" lo usamos como un lector de entrada
        int num = entrada.nextInt();
        return num; //Devolvemos el valor de "num", es decir, la entrada
    }
    public static int calcularResultado(int a){
        /*Calculamos la suma con la formula n(n+1)/2
        donde n es el valor de "a", el cual es el de "numero" del main
        */
        int suma = a*(a+1)/2;
        return suma; //Regresamos el valor de "suma"
    }
    public static void imprimirSalida(int b){
        //Imprimimos "b" que en realidad es "resultado" del main
        System.out.println(b);
    }
}