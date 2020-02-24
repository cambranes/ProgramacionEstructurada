/// <summary>
///Autor:Carlos Greene
//Entrada: Un numero entero impar entre 0 a 10
//Salida: La suma de los numero impares hasta la entrada
//Descripción: Programa que suma los números impares del 0 al 10 y muestre el resultado
/// </summary>
using System;

namespace Ejercicio39
{
    class Program
    {
        /// <summary>
        /// El bloque de abajo es el Main, ahí es donde se ejecuta el código, dentro contiene las variables que se utilizaron
        /// para algoritmo. Tambien contiene las funciones que se encargan de la entrada, proceso y salida.
        /// </summary>
        /// <param name="args"></param>
        static void Main(string[] args)
        {
            //Entrada
            //Se inicializan las variables
            uint entrada=0, suma=0;

            //Función que lee la variable
            leerEntrada(ref entrada);

            //Proceso
            //Función que suma los numeros impares
            suma=sumarNumeros(entrada);

            //Salida
            //Función que imprime la salida
            imprimirSalida(suma);
            
        }

        /// <summary>
        /// La función leerEntrada se encarga de que el usuario dé los valores a las variables y luego, a traves de pase por 
        /// referencia, las varieble del Main tengran los mismos valores de los que se introdujeron en la función.
        /// </summary>
        /// <param name="_entrada">Número entero positivo (Preferiblemente del 0 al 10)</param>
        static void leerEntrada(ref uint _entrada)
        {//Se lee la variable
            _entrada=Convert.ToUInt32(Console.ReadLine());
        }

        /// <summary>
        /// La función sumarNumeros recibe, a traves de pase por valor, una copia del valor que está en el Main, se encarga de 
        /// sumar los números impares del 0 hasta el valor de la variable.
        /// </summary>
        /// <param name="numero">Número en que se detendrá de sumar</param>
        /// <returns>Retorna un una variable uint que contiene la suma de numeros impares</returns>
        static uint sumarNumeros(uint numero)
        {
            uint _suma=0;//Se inicializa la variable de retorno
            if(numero>10)//Se verifica que no sea mayor de 10
            {
                _suma=25;//Si es mayor de diez, la variable de salida será 25
            }
            else
            {
                for(uint i=0; i<=numero; i++)//Se inicia in ciclo for para sumar los numeros impares
                {
                    if(i%2 != 0)//Se verifica que el numero no sea par
                    {
                        _suma = _suma+i;//Se suma los numeros impares
                    }
                }
            }

            return _suma;//Se retorna la suma
        }

        /// <summary>
        /// La función imprimirSalida recibe, a traves de pase por valor, una copia del valor que está en el Main de la variable que
        /// contiene la suma de los impares, la función sólo imprime dicho valor.
        /// </summary>
        /// <param name="_salida">La copia del valor que contiene la suma de impares</param>
        static void imprimirSalida(uint _salida)
        {//Se imprime la salida
            Console.WriteLine(_salida);
        }

    }
}
