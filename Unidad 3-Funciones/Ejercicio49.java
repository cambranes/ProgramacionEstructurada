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