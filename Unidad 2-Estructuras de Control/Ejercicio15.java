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
   System.out.println("Ingrese el dia(1-31)");
   diaUno = entrada.nextInt();
   System.out.println("Ingrese el mes(1-12)");
   mesUno = entrada.nextInt();
   System.out.println("Ingrese el año");
   anioUno = entrada.nextInt();

   //Solicita y agarra el dato ingresado por el usuario para fecha 2
   System.out.println("Ingrese la 2da fecha");
   System.out.println("Ingrese el dia(1-31)");
   diaDos = entrada.nextInt();
   System.out.println("Ingrese el mes(1-12)");
   mesDos = entrada.nextInt();
   System.out.println("Ingrese el año");
   anioDos = entrada.nextInt();

   //Comprobacion de fecha por orden(Año, mes, dia)
   if(anioUno > anioDos){
       System.out.println("El año mayor es el dia " + diaUno + ", del mes " + mesUno + ", del año " + anioUno);
   } else if(anioDos > anioUno){
       System.out.println("El año mayor es el dia " + diaDos + ", del mes " + mesDos + ", del año " + anioDos);
   } else  if(anioUno == anioDos){
       if(mesUno > mesDos){
           System.out.println("El año mayor es el dia " + diaUno + ", del mes " + mesUno + ", del año " + anioUno);
       } else if(mesDos > mesUno){
           System.out.println("El año mayor es el dia " + diaDos + ", del mes " + mesDos + ", del año " + anioDos);
       } else if(mesUno == mesDos){
           if(diaUno > diaDos){
               System.out.println("El año mayor es el dia " + diaUno + ", del mes " + mesUno + ", del año " + anioUno);
           } else if (diaDos > diaUno){
               System.out.println("El año mayor es el dia " + diaDos + ", del mes " + mesDos + ", del año " + anioDos);
           } else if (diaUno == diaDos){
               System.out.println("Las fechas son iguales");
           }
       }
   }
 }
}