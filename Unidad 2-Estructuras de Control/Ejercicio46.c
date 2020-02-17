//Equipo4
//Autor:Jose Miron
//Programa que imprima el total a pagar y el descuento aplicado para cada uno de los N clientes,
//el total de ganancias en caja y el total de descuentos aplicados.
//Entrada: Total de la compra
//Salida: Ganancias en caja y numero de descuentos aplicados
#include <stdio.h>
int main()
{
    //Entrada
    double compra, descuento, pago, acumulado = 0; 
    int cliente, contador = 0;

    scanf("%d", &cliente);//Ingreso del numero de clientes

    //Proceso
    for(int i=0; i<=cliente; i++)//Inicia ciclo para N numero de clientes
    {
        scanf("%lf", &compra);

        if(compra < 500)
        {
            descuento = compra * 0; pago = compra - descuento;//Compra menor a 500 pesos sin descuentos
            printf("%f", compra);//Impresion de la venta con el respectivo descuento
            acumulado = acumulado + pago;//acumulador de ventas con descuentos aplicados
        }

        else if(500 <= compra & compra <= 999)
        {
            descuento = compra * 0.05; pago = compra - descuento;//Compra entre 500 y 999 pesos con el 5% de descuento
            printf("%f", compra);//Impresion de la venta con el respectivo descuento
            acumulado = acumulado + pago;//acumulador de ventas con descuentos aplicados
            contador = contador + 1;//contador de descuentos
        }

        else if(1000 <= compra & compra <= 6999)
        {
            descuento = compra * 0.11;
            descuento = compra * 0.11; pago = compra - descuento;//Compra entre 1000 y 6999 pesos con el 11% de descuento
            printf("%f", compra);//Impresion de la venta con el respectivo descuento
            acumulado = acumulado + pago;//acumulador de ventas con descuentos aplicados
            contador = contador + 1;//contador de descuentos
        }

        else if(7000 <= compra & compra <= 14999)
        {
            descuento = compra * 0.18;
            descuento = compra * 0.18; pago = compra - descuento;//Compra entre 7000 y 14999 pesos con el 18% de descuento
            printf("%f", compra);//Impresion de la venta con el respectivo descuento
            acumulado = acumulado + pago;//acumulador de ventas con descuentos aplicados
            contador = contador + 1;//contador de descuentos
        }

        else if(15000 <= compra)
        {
            descuento = compra * 0.25;
            descuento = compra * 0.25; pago = compra - descuento;//Compra mayores a 15000 pesos con el 25% de descuento
            printf("%f", compra);//Impresion de la venta con el respectivo descuento
            acumulado = acumulado + pago;//acumulador de ventas con descuentos aplicados
            contador = contador + 1;//contador de descuentos
        }

    } 

    //Salida
    printf("%f /n", acumulado);//El total de ganancias acumuladas de las ventas
    printf("%d /n", contador);//Salida del numero de descuentos aplicados
    return 0;             
}
