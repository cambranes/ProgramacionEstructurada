///<summary>
///Autor: Jose Miron
/// Entrada: Numero entero positivo
/// Salida: Factorial del numero entero N
///Descripcion: //Dado un número entero n determina su factorial
/// <summary>

using System;

namespace Ejercicio21
{
    class Program
    {
        /// <summary>
        /// El bloque de abajo es el Main, ahi es donde se ejecuta el codigo, dentro contiene las variables que se utilizaron
        /// para el algoritmo. Tambien contiene las funciones que se encargan de la entrada, proceso y salida.
        /// </summary>
        /// <param name="args"></param>
        static void Main(string[] args)
        {
            //Entrada
            //Se inicializan las variables
            int entrada = 0, fact = 0;

            //Función que lee la variable
            leerEntrada(ref entrada);

            //Proceso
            //Funcion que calcula el factorial
            fact = calcularFactorial(entrada);

            //Salida
            //Funcion que imprime la salida
            imprimirSalida(fact);
        }

        /// <summary>
        /// La funcion leerNumero se encarga de que el usuario de los valores a las variables y luego, a traves de pase
        /// por referencia, las variables del Main tengan los mismos valores de los que se introdujeron en la funcion
        /// </summary>
        /// <param name="_entrada"></param>
        static void leerEntrada(ref int _entrada)
        {
            //lectura de la variable
            _entrada = Convert.ToInt32(Console.ReadLine());
        }

        /// <summary>
        /// /// La funcion calcularFactorial recibe a traves de por valor, una copia del valor que esta en el Main,
        /// se encarga de calcular el factorial de un numero entero positivo N
        /// </summary>
        /// <param name="numero"></param>
        /// <returns></returns>
        static int calcularFactorial(int numero)
        {
            int factorial = 1;

            if (numero != 0) //Se compara si el número introducido es cero
            {
                for (int i = 1; i <= numero; i++) //Se hace otro ciclo repetitivo para calcular factoriales
                {
                    factorial = factorial * i; //Se calcula factorial multiplicando la variable fact por n del ciclo
                }

            }

            return factorial;//Se retorna la variable
        }


        /// <summary>
        /// /// La funcion imprimirSalida recibe a traves de pase por valor, una copia del valor que esta en el Main
        /// de la variable que contiene el factorial de N, la funcion solo imprime dicho valor
        /// </summary>
        /// <param name="_fact"></param>
        static void imprimirSalida(int _fact)
        {
             //Se imprime la salida
            Console.WriteLine(_fact);
        }
    }
}
