/*
Mario Chan Zurita 
Datos de entrada: Valor de N
Datos de salida: Resultado de la suma de los primeros N numeros pares
Problema: Determinar la suma de los primeros N numero pares
*/

package ejercicio26;

import java.util.Scanner;

public class Ejercicio26 {
    Scanner entrada = new Scanner(System.in);
    
    //ATRIBUTOS
    int N;
    int suma=0;
    int i;
    
    //FUNCIONES
    //Obtiene el valor de N(entrada)
    public void entrada(){
        N = entrada.nextInt();
    }
    //Se hace la busqueda de los pares para posteriormente sumarlos
    public void sumaNPares(){
        for(i=0; i<=2*N; i+=2){
            suma+=i;
        }
    }
    //Imprime el resultado de la suma(salida)
    public void salida(){
        System.out.println(suma);
    }

    //MAIN 
    public static void main(String[] args) {
        
        Ejercicio26 funcion = new Ejercicio26();
        
        funcion.entrada();
        funcion.sumaNPares();
        funcion.salida();
        
    }
    
}
