/// <summary>
/// Autor:Carlos Greene
/// Entrada: Un numero entero positivo
/// Salida: Número cercarno al valor Euler
/// Descripción: Programa que que estime el valor de la constante matemática e, el numero introducido es la precisión con la que 
/// se quiere obtener el valor de e.
/// </summary>
using System;

namespace Ejercicio50
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
            uint entrada=0; 
            float suma=0;

            //Se lee el la entrada
            LeerEntrada(ref entrada);

            //Proceso
            //Con el valor introducido, se obtiene la suma que hacerca a Euler
            suma=sumaParaEuler(entrada);
        
            //Salida
            //Se imprime la suma
            imprimirSalida(suma);
        }

        /// <summary>
        /// La función leerEntrada se encarga de que el usuario dé los valores a las variables y luego, a traves de pase por 
        /// referencia, las varieble del Main tengran los mismos valores de los que se introdujeron en la función.
        /// </summary>
        /// <param name="_entrada">Número entero positivo</param>
        static void LeerEntrada(ref uint _entrada)
        {//Funcion que lee la entrada
            _entrada=Convert.ToUInt32(Console.ReadLine());
        }

        /// <summary>
        /// La función sumaParaEule recibe, a traves de pase por valor, una copia del valor de entrada que está en el Main, se encarga
        /// hacer una sumatoria de una serie de 1 entre factorial de un numero hasta llegar el valor de la variable que se hubica en 
        /// en el parámetro de la función, con el fin de acercarse al valor de Euler.
        /// </summary>
        /// <param name="numero">Número en que se detendrá la serie</param>
        /// <returns>Una variable de tipo float que contiene la suma que se acerca a Euler</returns>
        static float sumaParaEuler(uint numero)
        {//Funcion que hacerca a Euler
            float euler=0, fact=1;
            if(numero == 0) //Se compara si el número introducido es cero
            {
                euler = 1; //Si el número es cero, entonces su factorial será 1 por conveniencia
            }
            else
            { //Si no es igual a cero entonces
              for(int i = 1; i <= numero; i++) //Se hace un ciclo repetitivo para sumar la serie de factoriales
                {
                    fact=1; //Se inicializa la variable fact

                    for(float n = 1; n <= i; n++) //Se hace otro ciclo repetitivo para calcular factoriales
                    {
                        fact = fact*n; //Se calcula factorial multiplicando la veriable fact por n del ciclo
                    }

                    euler = euler + (1/fact); //Se suma la variable euler con 1 entre la variable facorial

                }  
            }
            return euler;//Retorna el valor de euler
        }

        /// <summary>
        /// La función imprimirSalida recibe, a traves de pase por valor, una copia del valor que está en el Main de la variable que
        /// contiene la suma que acerca al valor de Euler. La función solo imprimerá dicho valor.
        /// </summary>
        /// <param name="_salida"></param>
        static void imprimirSalida(float _salida)
        {//Funcion que imprime la salida
            Console.WriteLine(_salida);
        }

    }
}
//Nota del autor: En C# las variables de tipo float imprimimen hasta 7 decimales y elimina los ceros decimales, por ejemplo, una variable
//float tiene un valor de 1.5000000, imprimirá exactamente 1.5, se quitan los 0 decimales. En cambio en C solo imprimimen hasta 6 decimales y
//no elimina los 0.
