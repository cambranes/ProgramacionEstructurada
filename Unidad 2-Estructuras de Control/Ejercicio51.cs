//Equipo 4//
//Fecha 05/02/2020//
//Un programa que lea la ID numerica, edad y sueldo de 10 personas y que determine cuantos mayores de 35 años tuvieron salarios comprendidos entre $5000 y $7500//
using System;

namespace Ejercicio51
{
    class Program
    {
        static void Main(string[] args)
        {
            //Entrada//
            int id = 0, edad = 0, cont = 0, salida = 0;
            double sueldo = 0;
            //id: es la ID numerica de la persona, edad: es la edad de la persona, cont: es el contador de ciclos realizados, salida: es el contador de trabajadores que cumplen los estandares solicitados por el problema//
            //sueldo: es el sueldo de la persona, adémas al tener la posibilidad de tener centavos es la unica variable double//
            //Proceso//
           while(cont < 10)//se incia el ciclo//
           {
              Console.WriteLine("Porfavor ingrese su ID:");//se pide el ingreso de la variable id//
              int.TryParse(Console.ReadLine(), out id);
              Console.WriteLine("Porfavor ingrese su edad:");//se pide el ingreso de la variable edad//
              int.TryParse(Console.ReadLine(), out edad);
               if(edad > 0)//se validad que si edad ingresada es valida, es decir mayor que 0 tomando los digitos enteros como años//
               {
                   if(edad < 35)//se valida si la edad ingresada cumple con los estandares de edad requeridos por el problema//
                   {
                       Console.WriteLine("Porfavor ingrese su sueldo:");//se solicita la variable de sueldo//
                       double.TryParse(Console.ReadLine(), out sueldo);
                       if(sueldo > 0)//se valida si el sueldo ingresado es valido, es decir mayor que 0 para que siempre haya ganancia//
                       {
                           if(sueldo >= 5000 & sueldo <= 7500)//se valida si el sueldo ingresado cumple los estandares de sueldo requeridos por el problema//
                           {
                               salida = salida + 1;//si todos los estandares requeridos se cumplen se cuenta a la persona en la salida final//
                           }
                       }
                       else
                       {
                           Console.WriteLine("Ese monto no es valido, por favor intentelo de nuevo:");
                           double.TryParse(Console.ReadLine(), out sueldo);//en caso de que el sueldo no sea valido, es decir mayor 0, se solicita de nuevo que se ingrese un monto para sueldo//
                           if(sueldo >= 5000 & sueldo <= 7500)
                           {
                               salida = salida + 1;//si todos los estandares requeridos se cumplen se cuenta a la persona en la salida final//
                           }
                       }
                   }
               }
               else
               {
                   Console.WriteLine("Esa no es una edad valida, por favor intentelo de nuevo:");
                   int.TryParse(Console.ReadLine(), out edad);//en caso de que la edad no sea valida, es decir mayor a 0, se solicita que se ingrese de nuevo una edad//
                   if(edad > 35)
                   {
                       Console.WriteLine("Porfavor ingrese su sueldo:");//se valida si el sueldo ingresado es valido, es decir mayor que 0 para que siempre haya ganancia//
                       double.TryParse(Console.ReadLine(), out sueldo);
                       if(sueldo > 0)
                       {
                           if(sueldo >= 5000 & sueldo <= 7500)//se valida si el sueldo ingresado cumple los estandares de sueldo requeridos por el problema//
                           {
                               salida = salida + 1;//si todos los estandares requeridos se cumplen se cuenta a la persona en la salida final//
                           }
                       }
                       else
                       {
                           Console.WriteLine("Ese monto no es valido, por favor intentelo de nuevo:");
                           double.TryParse(Console.ReadLine(), out sueldo);//en caso de que el sueldo no sea valido, es decir mayor 0, se solicita de nuevo que se ingrese un monto para sueldo//
                           if(sueldo >= 5000 & sueldo <= 7500)
                           {
                               salida = salida + 1;//si todos los estandares requeridos se cumplen se cuenta a la persona en la salida final//
                           }
                       }
                   }
               }
               cont = cont + 1;//al final de cada ciclo se suma la realización al contador de ciclos, para poder cerrar el ciclo while al llegar a 10//
               Console.WriteLine($"{cont}° registro exitoso");//se imprime el número de ciclo realizado para asi evitar confusiones//
           }
           Console.WriteLine($"{salida} trabajador(es) cumplieron con los estandares establecidos" );//se imprime como salida final, la cantidad de personas que cumplieron los estandares establecidos por el problema//
        }
    }
}