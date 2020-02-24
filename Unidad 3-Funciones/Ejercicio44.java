import java.util.Scanner;

public class Main{
  
    public static void main(String[] args) {
        //Entradas
        int num,num2;
        entradas(num,num2);
        
        //Proceso
        proceso(num,num2);
        
        //Salida
        salida(num);
    }
    
    public static void entradas(int num, int num2){
        System.out.println("Ingrese el número");
        final Scanner entrada = new Scanner(System.in);
        num = entrada.nextInt();
        System.out.println("Ingrese el número");
        num2 = entrada.nextInt();
    }

    public static void procesos(int num, int num2){
        while(num != num2){
            if(num > num2){
                num = num - num2;
            }else{
                num2 = num2 - num;
            }
        }
    }

    public static void salida(int num){
        System.out.println("El resultado es:" + num);
    }
}
