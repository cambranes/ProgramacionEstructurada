/// <summary>
/// Autor:Carlos Greene
/// Entrada: Dos fechas con tres numeros enteros cada una
/// Salida: La fecha mayor o un texto con "Son iguales"
/// Descripción: Programa que lee dos fechas (día-mes-año) con tres cantidades enteras e imprima la mayor, si son la misma imprima son iguales.
/// </summary>
using System;

namespace Ejercicio15
{
    class Program
    {        
        /// <summary>
        /// El bloque de abajo es el Main, ahí es donde se ejecuta el código, dentro contiene las variables que se utilizaron
        /// para algoritmo. Tambien contiene las funciones que se encargan de la entrada, proceso y salida
        /// </summary>
        /// <param name="args"></param>
        static void Main(string[] args)
        {
            //Entradas
            //Se inicializan las variables
            int day=0, month=0, year=0, day2=0, month2=0, year2=0; 
            string fechaMayor="";
            
            //Se lee las entradas
            leerEntradas(ref day, ref month, ref year, ref day2, ref month2, ref year2);
            
            //Proceso
            fechaMayor=determinarFechaMayor(day, day2, month, month2, year, year2);

            //Salida
            imprimirSalida(fechaMayor);

        }

        /// <summary>
        /// La función leerEntrada se encarga de que el usuario dé los valores a las variables y luego, a traves de pase por 
        /// referencia, las varieble del Main tengran los mismos valores de los que se introdujeron en la función.
        /// </summary>
        /// <param name="_day">Dia de la primera fecha</param>
        /// <param name="_month">Mes de la primera fecha</param>
        /// <param name="_year">Año de la primera fecha</param>
        /// <param name="_day2">Dia de la segunda fecha</param>
        /// <param name="_month2">Mes de la segunda fecha</param>
        /// <param name="_year2">Año de la segunda fecha</param>

        static void leerEntradas(ref int _day, ref int _month, ref int _year, ref int _day2, ref int _month2, ref int _year2)
        {//Se lee las variables
            _day=Convert.ToInt32(Console.ReadLine());
            _month=Convert.ToInt32(Console.ReadLine());
            _year=Convert.ToInt32(Console.ReadLine());
            _day2=Convert.ToInt32(Console.ReadLine());
            _month2=Convert.ToInt32(Console.ReadLine());
            _year2=Convert.ToInt32(Console.ReadLine());
        }

        
        /// <summary>
        /// La función determinarFechaMayor utiliza, a traves de pase por valor, las copias de los valores del estan en el Main,
        /// con estos valores, se determina los cual es la fecha mayor o si son iguales.
        /// </summary>
        /// <param name="dia">Dia de la primera fecha</param>
        /// <param name="dia2">Dia de la segunda fecha</param>
        /// <param name="mes">Mes de la primera fecha</param>
        /// <param name="mes2">Mes de la segunda fecha</param>
        /// <param name="anio">Año de la primera fecha</param>
        /// <param name="anio2">Año de la segunda fecha</param>
        /// <returns>La función retornará una cadena de texto que contiene el dia, mes y año de la fecha mayor o son iguales</returns>

        static string determinarFechaMayor(int dia, int dia2, int mes, int mes2, int anio, int anio2)
        {//Se determina cual fecha es mayor o son iguales
            string _fechaMayor="";//Se inicializa el valor que va a retornar
            if(anio>anio2)//Se verifica si el primer año es mayor que el segundo
            {
                _fechaMayor=dia + "\n" + mes + "\n" + anio; 
            }
            else if(anio2>anio)//Se verifica si el segundo año es mayor que el primero
            {
                _fechaMayor=dia2 + "\n" + mes2 + "\n" + anio2;
            }
            else if(anio==anio2)//Se verifica si tienen el mismo año
            {
                if(mes>mes2)//Se verifica si el primer mes es mayor que el segundo
                {
                   _fechaMayor=dia + "\n" + mes + "\n" + anio; 
                }
                else if(mes2>mes)//Se verifica si el segundo mes es mayor que el primero
                {
                    _fechaMayor=dia2 + "\n" + mes2 + "\n" + anio2;
                }
                else if(mes==mes2)//Se verifica si tienen el mismo mes
                {
                    if(dia>dia2)//Se verifica si el primer dia es mayor que el segundo
                    {
                       _fechaMayor=dia + "\n" + mes + "\n" + anio;  
                    }
                    else if(dia2>dia)//Se verifica si el segundo dia es mayor que el primero
                    {
                        _fechaMayor=dia2 + "\n" + mes2 + "\n" + anio2;
                    }
                    else if(dia==dia2)//Se verifica si tienen el mismo dia
                    {
                        _fechaMayor="Son iguales";
                    }
                }
            }

            return _fechaMayor;//Se retorna el valor de la fecha mayor
        }

        /// <summary>
        /// La función imprimirSalida recibe, a traves de pase por valor, una copia del valor que está en el Main que contiene
        /// la cadena de texto con la fecha mayor o iguales, la función sólo se encargará de imprimirlo.
        /// </summary>
        /// <param name="_salida">Variable que contiene la cadena de texto con la fecha mayor o iguales</param>
        static void imprimirSalida(string _salida)
        {//Se imprime la fecha mayor o si son iguales
            Console.WriteLine(_salida);
        }
    }
}