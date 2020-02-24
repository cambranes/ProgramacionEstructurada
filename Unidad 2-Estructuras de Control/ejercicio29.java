
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author kemi_
 */
public class ejercicio29 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner lector = new Scanner(System.in);
        int num,x=2,i;
        System.out.println("ingrese numero: ");
        num=lector.nextInt();
        while (num<=0){
            for(i=1; i<=num/x; i++){
            
            if (num % x == 0){
                System.out.print(" "+x);
                num=num/x;
            }else
                x=x+1;
        }
        }
    }
    }
