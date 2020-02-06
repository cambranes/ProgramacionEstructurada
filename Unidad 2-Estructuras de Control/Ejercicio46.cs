//Equipo4
//Fecha 04/02/2020
//Autor: José Mirón

//Programa que imprime el total a pagar y el numero de descuentos aplicados
//para cada uno de los N clientes

//Entrada: Numero entero positivo
//Salida: Acumulado de las ganancias y numero de descuentos aplicados

using System;

namespace Ejercicio46
{
    class Program
    {
        static void Main(string[] args)
        {

            //Escribir el programa que imprima el total a pagar y el descuento aplicado 
            //para cada uno de lo N clientes que llegan.Después de recibir todos los
           //clientes escribir el total en caja y el total de descuentos aplicados.
            double compra; double descuento; double pago; int contador=0; double acumulado = 0; int continuar;
            
            do
            {
                Console.WriteLine("Ingrese valor de la compra");
                compra = Convert.ToDouble(Console.ReadLine());//Se ingresan el valor de la compra

                if (compra < 500) { descuento = compra * 0; pago = compra - descuento;//Compra menor a 500 pesos sin descuentos
                    Console.WriteLine("El pago total es " + pago + "con un descuento aplicado de " + descuento);
                    acumulado = acumulado + pago;//acumulador de ventas con descuentos aplicados
                }

                else if (500 <= compra & compra <= 999)
                { descuento = compra * 0.05; pago = compra - descuento;//Compra entre 500 y 999 pesos con el 5% de descuento
                    Console.WriteLine("El pago total es " + pago + "con un descuento aplicado de " + descuento);//Impresion de la venta con el respectivo descuento
                    acumulado = acumulado + pago;//acumulador de ventas con descuentos aplicados
                }

                else if (1000 <= compra & compra <= 6999) { descuento = compra * 0.11;
                    descuento = compra * 0.11; pago = compra - descuento;//Compra entre 1000 y 6999 pesos con el 11% de descuento
                    Console.WriteLine("El pago total es " + pago + "con un descuento aplicado de " + descuento);//Impresion de la venta con el respectivo descuento
                    acumulado = acumulado + pago;//acumulador de ventas con descuentos aplicados
                }

                else if (7000 <= compra & compra <= 14999) { descuento = compra * 0.18;
                    descuento = compra * 0.18; pago = compra - descuento;//Compra entre 7000 y 14999 pesos con el 18% de descuento
                    Console.WriteLine("El pago total es " + pago + "con un descuento aplicado de " + descuento);//Impresion de la venta con el respectivo descuento
                    acumulado = acumulado + pago;//acumulador de ventas con descuentos aplicados
                }

                else if (15000 <= compra) { descuento = compra * 0.25;
                    descuento = compra * 0.25; pago = compra - descuento;//Compra mayores a 15000 pesos con el 25% de descuento
                    Console.WriteLine("El pago total es " + pago + "con un descuento aplicado de " + descuento);//Impresion de la venta con el respectivo descuento
                    acumulado = acumulado + pago;//acumulador de ventas con descuentos aplicados
                }

                contador = contador + 1;//contador de ventas
                
                Console.WriteLine("¿Desea continuar registrando compras?");
                continuar = Convert.ToInt32(Console.ReadLine());//Opcion para decidir si continuar o no con las ventas


            } while (continuar == 1) ;
            Console.WriteLine("El acumulado en caja fue de: " + acumulado);//El total de ganancias acumuladas de las ventas
            Console.WriteLine("El total de descuentos aplicados fue de: " + contador);//Salida del numero de descuentos aplicados
            Console.ReadLine();

        }
    }
}
