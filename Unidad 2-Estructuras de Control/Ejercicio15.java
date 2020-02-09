//Equipo 3
//Diego De Gante
//Programa que lea dos fechas (día-mes-año) con tres cantidades enteras 
//e imprima la mayor, si son la misma imprima son iguales.
//Entrada:diaUno, diaDos, mesUno, mesDos, anioUno, anioDos
//Salida: La fecha mayor o si las fechas son iguales

import java.util.Scanner;

public class Main{
 public static void main(String arg[]){

   //Definir variables
   Scanner entrada = new Scanner(System.in); 
   int diaUno = 0, mesUno = 0, anioUno = 0;
   int diaDos = 0, mesDos = 0, anioDos = 0;

   //Solicita y agarra el dato ingresado por el usuario para fecha 1
   System.out.println("Ingrese la 1er fecha");
   
   do{
    System.out.println("Ingrese el dia(1-31)");
    diaUno = entrada.nextInt();
   }while(diaUno>0 || diaUno<32);
   
   do{
    System.out.println("Ingrese el mes(1-12)");
    mesUno = entrada.nextInt();
   }while(mesUno>0 || mesUno<13);

   System.out.println("Ingrese el año");
   anioUno = entrada.nextInt();

   //Solicita y agarra el dato ingresado por el usuario para fecha 2
   System.out.println("Ingrese la 2da fecha");

   do{
   System.out.println("Ingrese el dia(1-31)");
   diaDos = entrada.nextInt();
   }while(diaDos>0 || diaDos<32);

   do{
    System.out.println("Ingrese el mes(1-12)");
    mesDos = entrada.nextInt();
   }while(mesDos>0 || mesDos<13);

   System.out.println("Ingrese el año");
   anioDos = entrada.nextInt();

   //Comprobacion de fecha por orden(Año, mes, dia)
   if(anioUno > anioDos){
       System.out.println(diaUno); 
       System.out.println(mesUno);
       System.out.println(anioUno);
   } else if(anioDos > anioUno){
      System.out.println(diaDos);
      System.out.println(mesDos);
      System.out.println(anioDos);;
   } else  if(anioUno == anioDos){
       if(mesUno > mesDos){
          System.out.println(diaUno); 
          System.out.println(mesUno);
          System.out.println(anioUno);
       } else if(mesDos > mesUno){
          System.out.println(diaDos);
          System.out.println(mesDos);
          System.out.println(anioDos);
       } else if(mesUno == mesDos){
           if(diaUno > diaDos){
              System.out.println(diaUno); 
              System.out.println(mesUno);
              System.out.println(anioUno);
           } else if (diaDos > diaUno){
               System.out.println(diaDos);
               System.out.println(mesDos);
               System.out.println(anioDos);
           } else if (diaUno == diaDos){
               System.out.println("Las fechas son iguales");
           }
       }
   }
 }
}