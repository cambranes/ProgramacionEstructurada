//Equipo4
//Fecha 04/02/2020
//Autor: José Mirón

//Programa que imprime el total a pagar y el numero de descuentos aplicados
//para cada uno de los N clientes

//Entrada: Numero entero positivo
//Salida: Acumulado de las ganancias y numero de descuentos aplicados

using System;

namespace Ejercicio46for
{
    class Program
    {
        static void Main(string[] args)
        {
            double compra; double descuento; double pago; int contador = 0; double acumulado = 0; int continuar; int cliente;

            cliente = Convert.ToInt32(Console.ReadLine());//Se ingresan el valor de la compra
            for (int i=0; i<=cliente; i++)
            {
                
                compra = Convert.ToDouble(Console.ReadLine());//Se ingresan el valor de la compra

                if (compra < 500)
                {
                    descuento = compra * 0; pago = compra - descuento;//Compra menor a 500 pesos sin descuentos
                    Console.WriteLine(pago);
                    acumulado = acumulado + pago;//acumulador de ventas con descuentos aplicados
                }

                else if (500 <= compra & compra <= 999)
                {
                    descuento = compra * 0.05; pago = compra - descuento;//Compra entre 500 y 999 pesos con el 5% de descuento
                    Console.WriteLine(pago);//Impresion de la venta con el respectivo descuento
                    acumulado = acumulado + pago;//acumulador de ventas con descuentos aplicados
                    contador = contador + 1;//contador de descuentos
                }

                else if (1000 <= compra & compra <= 6999)
                {
                    descuento = compra * 0.11;
                    descuento = compra * 0.11; pago = compra - descuento;//Compra entre 1000 y 6999 pesos con el 11% de descuento
                    Console.WriteLine(pago);//Impresion de la venta con el respectivo descuento
                    acumulado = acumulado + pago;//acumulador de ventas con descuentos aplicados
                    contador = contador + 1;//contador de descuentos
                }

                else if (7000 <= compra & compra <= 14999)
                {
                    descuento = compra * 0.18;
                    descuento = compra * 0.18; pago = compra - descuento;//Compra entre 7000 y 14999 pesos con el 18% de descuento
                    Console.WriteLine(pago);//Impresion de la venta con el respectivo descuento
                    acumulado = acumulado + pago;//acumulador de ventas con descuentos aplicados
                    contador = contador + 1;//contador de descuentos
                }

                else if (15000 <= compra)
                {
                    descuento = compra * 0.25;
                    descuento = compra * 0.25; pago = compra - descuento;//Compra mayores a 15000 pesos con el 25% de descuento
                    Console.WriteLine(pago);//Impresion de la venta con el respectivo descuento
                    acumulado = acumulado + pago;//acumulador de ventas con descuentos aplicados
                    contador = contador + 1;//contador de descuentos
                }

            } 
            Console.WriteLine( acumulado);//El total de ganancias acumuladas de las ventas
            Console.WriteLine(contador);//Salida del numero de descuentos aplicados
            Console.ReadLine();
        }
    }
}