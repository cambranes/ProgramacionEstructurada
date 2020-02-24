import java.util.Scanner;

public class Main{
  public static void main(String arg[]){

    //Proceso y Salida
    int num = 100;
    ProcesoSalida();

  }

  //Procedimiento
  public static void procesoSalida(){
    int var = 0, Dig1 = 0, Dig2 = 0, Dig3 = 0, total = 0;

    while (num < 1000){
        var = num;

        Dig3 = var%10;
        var = (var-var%10)/10;

        Dig2 = var%10;
        var = (var-var%10)/10;

        Dig1 = var;
        
        total = Dig1*Dig1*Dig1 + Dig2*Dig2*Dig2 + Dig3*Dig3*Dig3;

    if(total == num){
        printf("%i\n",num);
    }
    num = num+1;
  }
}
