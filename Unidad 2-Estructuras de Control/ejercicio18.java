import java.util.Scanner;
public class Dieciocho
{
    public static void main(String[]ar){
    int a,b,d;
    String c;
    Scanner sc=new Scanner(System.in);
    System.out.print("\n\nIngrese primer entero  ");
    a=sc.nextInt();
    System.out.print("\nIngrese segundo entero: ");
    b=sc.nextInt();
    System.out.print("\nIngrese caracter +|-|*|/|%|: ");
    c=sc.next();
    System.out.print("\n");
    if(c.equals("+")){
        d=a+b;
        System.out.print("La suma es: "+ d);
    }else if(c.equals("-")){
        d=a-b;
        System.out.print("La resta es: "+ d);
    } else if(c.equals("*")){
        d=a*b;
        System.out.print("La multiplicación es: "+ d);
    } else if(c.equals("/")){
        d=a/b;
        System.out.print("La división es: "+ d);
    } else if(c.equals("%")){
        d=a % b;
        System.out.print("El resto es: "+ d);
    }
    
    

    
}
}
