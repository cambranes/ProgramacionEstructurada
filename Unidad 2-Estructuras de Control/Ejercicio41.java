/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ejercicios;

import java.util.Scanner;

/**
 *
 * @author kemi_
 */
public class Ejercicio41 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int mayor=0;
        int menor=0;
        Scanner lector = new Scanner(System.in);
        int num,n;
        int i=0;
        int ma=0;
        int me=1000000000;
        
        menor = 0;
        System.out.println("ingrese cantidad de numeros: ");
        n=lector.nextInt();
        
        for(i=1; i<=n; i++){
            System.out.println("ingrese numero: ");
            num=lector.nextInt();
        if(ma<num){
            ma=num;
        }
        if(me>num){
            me=num;
        }
       
        }
        
         System.out.println("mayor es: " +ma);
        System.out.println("menor es: " +me);
        
    }
    
}
