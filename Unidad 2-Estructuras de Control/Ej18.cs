using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ej18
{
    class Program
    {
        static void Main(string[] args)
        {
            int Resultado;
            int a;
            int b;
            int opcion;

            do
            {
                Console.WriteLine("\n--CALCULADORA--");
                Console.WriteLine("\n\n1 .-SUMAR--");
                Console.WriteLine("\n2 .-RESTAR--");
                Console.WriteLine("\n3 .-MULTIPLICAR--");
                Console.WriteLine("\n4 .-DIVIDIR--");
                Console.WriteLine("\n5 .-RESIDUO--");
                Console.WriteLine("\n6 .-SALIR--");

                Console.WriteLine("\n\nELIGE UNA OPCION: ");
                opcion = Convert.ToInt32(Console.ReadLine());

                switch (opcion)
                {
                    case 1: /*SUMA*/
                        Console.WriteLine("\nINTRODUCE EL PRIMER NUMERO: ");
                        a = Convert.ToInt32(Console.ReadLine());
                        Console.WriteLine("\nINTRODUCE EL SEGUNDO NUMERO: ");
                        b = Convert.ToInt32(Console.ReadLine());
                        Resultado = a + b;
                        Console.WriteLine("\nLA SUMA DE {0} + {1} es igual a : {2}", a, b, Resultado);
                        break;
                    case 2: /*RESTA*/
                        Console.WriteLine("\nINTRODUCE EL PRIMER NUMERO: ");
                        a = Convert.ToInt32(Console.ReadLine());
                        Console.WriteLine("\nINTRODUCE EL SEGUNDO NUMERO: ");
                        b = Convert.ToInt32(Console.ReadLine());
                        Resultado = a - b;
                        Console.WriteLine("\nLA RESTA DE {0} - {1}  ES IGUAL A : {2} ", a, b, Resultado);
                        break;

                    case 3: /*MULTIPLICACION*/
                        Console.WriteLine("\nINTRODUCE EL PRIMER NUMERO: ");
                        a = Convert.ToInt32(Console.ReadLine());
                        Console.WriteLine("\nINTRODUCE EL SEGUNDO NUMERO: ");
                        b = Convert.ToInt32(Console.ReadLine());
                        Resultado = a * b;
                        Console.WriteLine("\nLA MULTIPLICACION DE {0} * {1} ES IGUAL A : {2}", a, b, Resultado);
                        break;

                    case 4: /*DIVISION*/
                        Console.WriteLine("\nINTRODUCE EL PRIMER NUMERO: ");
                        a = Convert.ToInt32(Console.ReadLine());
                        Console.WriteLine("\nINTRODUCE EL SEGUNDO NUMERO: ");
                        b = Convert.ToInt32(Console.ReadLine());
                        Resultado = a / b;
                        Console.WriteLine("\nLA DIVISION DE {0} / {1} ES IGUAL A : {2} ", a, b, Resultado);
                        break;

                    case 5: /*RESIDUO*/
                        Console.WriteLine("\nINTRODUCE EL PRIMER NUMERO: ");
                        a = Convert.ToInt32(Console.ReadLine());
                        Console.WriteLine("\nINTRODUCE EL SEGUNDO NUMERO: ");
                        b = Convert.ToInt32(Console.ReadLine());
                        Resultado = a % b;
                        Console.WriteLine("\nEL RESIDUO DE {0} modulo {1} ES IGUAL A :{2}", a, b, Resultado);
                        break;

                    case 6:/*SALIR*/
                        break;


                }
            } while (opcion != 6);
        }
    }
}
//Prueba QA//
/*
Autor QA: Daniel Eduardo Gutiérrez Delfin
Entradas: (Resta (2), 10, -20) (División (4), 1, 0) (Residuo(5), 10, 3)
salidas: -10 correcto, unhandled division correcto(?),1 correcto 
Proceso: Es correcto, funciona adecuadamente, exceptuando divisiones entre 0
*/