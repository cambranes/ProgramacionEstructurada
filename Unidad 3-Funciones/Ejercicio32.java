/*
Mario Chan Zurita 
Datos de entrada: Dos números que representan dos años
Datos de salida: Cantidad de años bisiestos dentro del rango de los dos años dados
Problema: Dados dos números que representan dos años, determinar la cantidad de años bisiestos
que hay entre los dos años
*/

package ejercicio32;

import java.util.Scanner;

public class Ejercicio32 {
    Scanner entrada = new Scanner(System.in);
    
    //ATRIBUTOS
    int anio1;
    int anio2;
    int i;
    int aniosBisiestos;
    
    //FUNCIONES
    //Obtiene el valor de año(entrada)
    public void entrada(){
        anio1 = entrada.nextInt();
        anio2 = entrada.nextInt();
    }
    //Verificacion de los años que se encuentran dentro del rango dado para saber cuantos años bisiestos hay
    public void calculoAniosBisiestos(){
        for(i=anio1; i<=anio2; i++){
            if(i%4 == 0){
                aniosBisiestos += 1;
            }
        }
    }
    //Imprime el la cantidad de años Bisiestos(salida)
    public void salida(){
        System.out.println(aniosBisiestos);
    }
    
    //MAIN
    public static void main(String[] args) {
        
        Ejercicio32 funcion = new Ejercicio32();
        
        funcion.entrada();
        funcion.calculoAniosBisiestos();
        funcion.salida();
        
    }
    
}
