/// <summary>
///  //Autor:Giovanni Quintal
/// Entrada: Un numero real 
/// Salida: "Promedio"
/// Descripción: Determinara el promedio de los datos dados.
/// </summary>
using System;

namespace Ejercicio27
{

	class Program
	{
		/// <summary>
		/// El bloque de abajo es el Main, ahí es donde se ejecutara el código, dentro contiene la variable que se se utilizaron
		/// para el algoritmo. Tambien contiene las funciones de la entrada, proceso y la salida.
		/// </summary>
		/// <param name="args"></param>

		static void Main(string[] args)
		{
			//Entrada
			//Se inicializan las varibles
			float contador = 0, i = 0, sum = 0, mediaarit = 0;
			
			//Función que lee la variable
			leerEntrada(ref i);

			//Proceso
			//Función que saca el promedio
			mediaarit = promediar(i, sum, contador);

			//Salida
			//Función que imprime la salida
			imprimirSalida(mediaarit);
		}
		/// <summary>
		/// La función leerEntrada se encarga de de pedir el valor de la variable i y a traves con el pase de refencia,
		/// la variable del main tendra los mismo valores dado por el usuario
		/// </summary>
		/// <param name="i"></param>Número entero 
		
		static void leerEntrada(ref float i)
		{
			float.TryParse(Console.ReadLine(), out i);
		}

		/// <summary>
		/// La función promediar sumara todos los numeros y los dividira entre la cantidad dada.
		/// </summary>
		/// <param name="i"></param>
		/// <param name="sum"></param>
		/// <param name="contador"></param>
		/// <returns></returns>retorna la variable float que contiene el resultado final
		static float promediar(float i, float sum, float contador)
		{
			float mediaarit = 0;
			while (i < 999)
			{
				sum = sum + i;
				contador = contador + 1;

				leerEntrada(ref i);
			}
			mediaarit = sum / contador;

			return mediaarit;
		}
		/// <summary>
		/// La función imprimirSalida, recibe un un pase del valor, una copia del valor cont desde el main
		/// </summary>
		/// <param name="mediaarit"></param>El promedio de datos dados.
		static void imprimirSalida(float mediaarit)
		{
			Console.WriteLine(mediaarit);
		}
	}
}