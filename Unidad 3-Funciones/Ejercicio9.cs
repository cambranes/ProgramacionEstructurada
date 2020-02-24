///<summary>
///Autor: Jose Miron
/// Entrada: Numero entero positivo
/// Salida: Cantidad de multiplos de 5 entre 1 y N
///Descripcion:Programa para un programa que reciba un numero N y que te muestre cuantos múltiplos de 5 hay entre 1 y N
/// <summary>


using System;

namespace Ejercicio9
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
            int numero = 0, multiplo = 0, salida = 0;


            //Función que lee la variable
            leerNumero(ref numero);

            //Proceso
            //Funcion que calcula la cantidad de multiplos
            salida = calcularMultiplo(multiplo, numero);

            //Salida
            //Funcion que imprime la salida
            imprimirSalida(salida);

        }
        
        /// <summary>
        /// La funcion leerNumero se encarga de que el usuario de los valores a las variables y luego, a traves de pase
        /// por referencia, las variables del Main tengan los mismos valores de los que se introdujeron en la funcion
        /// </summary>
        /// <param name="_numero"></param>
        static void leerNumero(ref int _numero)
        {
            _numero = Convert.ToInt32(Console.ReadLine());//lectura de la variable
        }


        /// <summary>
        /// La funcion calcularMultiplo recibe a traves de por valor, una copia del valor que esta en el Main,
        /// se encarga de calcular la cantidad de multiplos a partir de 1 hasta N
        /// </summary>
        /// <param name="multiplo"></param>
        /// <param name="_numero"></param>
        /// <returns></returns>
        static int calcularMultiplo(int multiplo, int _numero)
        {
            int aux = 0;//Se inicializa la variable de retorno
            for (int i = 0; multiplo <= _numero; i++)//Ciclo for para fijar limite de multiplos
            {
                multiplo = i * 5;//Multiplicacion por multiplos de 5
                aux = i - 1;//Se resta 1 a la cantidad total de multiplos
            }


            return aux;//Se retorna la variable
        }

        /// <summary>
        /// La funcion imprimirSalida recibe a traves de pase por valor, una copia del valor que esta en el Main
        /// de la variable que contiene la cantidad de multiplos, la funcion solo imprime dicho valor
        /// </summary>
        /// <param name="multiplo"></param>
        static void imprimirSalida(int multiplo)
        {

            //Se imprime la salida
            Console.WriteLine(multiplo);

        }

    }

}
