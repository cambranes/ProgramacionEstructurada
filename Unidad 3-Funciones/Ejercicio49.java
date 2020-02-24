/*Autor: Diego De Gante Pérez
*Entradas: Sin entradas
*Salidas: Tablas de multiplicar del 2 al 9
*Proceso:
Con dos ciclos multiplica cada uno de los números del 1 al 10 para pasar al siguiente
*/
import java.util.Scanner;

public class Main{
  public static void main(String arg[]){

    //Definir variables
    int i = 0, j = 0;

    //Llama la función e imprime salida
    int productos = producto();

  }

  //Procedimiento
  public static void producto(){
    int i = 0, j = 0;

    //Ciclo for de multiplicacion e imprimir tabla
    for(i=2; i<=9; i++){
      for(j=1; i<=10; i++){
        System.out.println(i*j);
      }
    }
  }
}