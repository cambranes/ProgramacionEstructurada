//Equipo4
//Fecha 04/02/2020
//Autor: José Mirón

//Programa que lee secuencia indeterminada de numeros y termina 
//cuando se ingresa el numero 999, entrega numero mayor y menor
//de la serie

//Entrada: Numero entero
//Salida: Numero mayor y menor de la serie indeterminada de numeros


using System;
namespace Ejercicio28
{
    class Program
    {
        static void Main(string[] args)
        {
            int numero; int numerodos; int mayor; int menor; int numeros;
            
            do
            {
                Console.WriteLine("Ingrese numero");
                numero = Convert.ToInt32(Console.ReadLine()); //Ingreso del primer numero

                Console.WriteLine("Ingrese numeros");
                numerodos = Convert.ToInt32(Console.ReadLine()); //Ingreso del segundo numero

                //Primer caso.  //si el primer numero introducido resulta mayor que el segundo
                if (numero > numerodos)
                     menor = numerodos; mayor = numero; menor = numerodos; //Asignacion de valores de mayor y menor
                do
                    { 
                    
                    {                
                            Console.WriteLine("Ingrese numeros nuevos");
                            numeros = Convert.ToInt32(Console.ReadLine()); // Ingreso de la serie de numeros
                            if (numeros > mayor) { 
                            mayor = numeros; //el  numero mayor es reemplazado de cumplirse que el numero introducido sea mayor que el anterior
                                Console.WriteLine("Numero mayor es: " + mayor); //Impresion del numero mayor
                            }
                            else if (numeros < menor) { menor = numeros; //el  numero menor es reemplazado de cumplirse que el numero introducido sea menor que el anterior
                            Console.WriteLine("Numero menor es: " + menor);//Impresion del numero menor
                        }
                        }
                    } while (numeros != 999); //Mientras el numero introducido sea distinto de 999

                //Segundo caso.  //si el segundo numero introducido resulta mayor que el primero
                if (numero < numerodos) 
                    menor = numero; mayor = numerodos; menor = numeros; //Asignacion de valores de mayor y menor
                do
                {
                    Console.WriteLine("Ingrese numeros nuevos"); 
                    numeros = Convert.ToInt32(Console.ReadLine()); //Ingreso de la serie de numeros
                    if (numeros > mayor)//Si el numero introducido es mayor que el valor mayor actual
                    {
                        mayor = numeros; //el  numero mayor es reemplazado de cumplirse que el numero introducido sea mayor que el anterior                      
                        Console.WriteLine("Numero mayor es: " + mayor);//Impresion del numero mayor
                    }
                    else if (numeros < menor) //Si el numero introducido es menor que el valor menor actual
                    {
                        menor = numeros;  //el  numero menor es reemplazado de cumplirse que el numero introducido sea menor que el anterior
                        Console.WriteLine("Numero menor es: " + menor);//Impresion del numero menor
                    }

                } while (numeros != 999); //Mientras el numero introducido sea distinto de 999

            } while (numeros != 999 ); //Mientras el numero introducido sea distinto de 999
            
    }   }
 }
