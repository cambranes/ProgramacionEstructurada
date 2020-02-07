import java.util.Scanner;
/*Encontrar el maximo comun divisor de dos numeros.*/
 class ejercicio30 {
    public static void main (String[]args){
        Scanner lector = new Scanner(System.in);
        int num1, num2;
        boolean MCD =false;
        
        while(true) {
        
        System.out.println("ingrese numero 1");
        num1=lector.nextInt();
        System.out.println("ingrese numero 2");
        num2=lector.nextInt();
        
        if (num1 > 0 && num2 >0 && num1 !=num2){
            
            if(num1>num2){
                int aux =num1;
                num1=num2;
                num2=aux;
            }
            int i= num1;
                    while(!MCD && i>=1){
                      if(num1 % i == 0 && num2 % i == 0){
                          System.out.println("El maximo comun divisor es: "+i);
                          MCD = true;
                      }   
                    }
            
        }
        else{
            System.out.println("números iguales");
        }
    }
    }
}
 
