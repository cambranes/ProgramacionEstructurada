//Equipo4
//Autor:Jose Miron
//Programa que imprima el total a pagar y el descuento aplicado para cada uno de los N clientes,
//el total de ganancias en caja y el total de descuentos aplicados.
//Entrada: Total de la compra
//Salida: Ganancias en caja y numero de descuentos aplicados
#include <stdio.h>
main()
{
    double compra; double descuento; double pago; double acumulado; int contador=0; int continuar;

    do
    {
        scanf("%d", compra);//Entrada de la compra

        if(compra<500){descuento=compra*0; pago=compra-descuento;//Si la compra fue menor a 500
        printf(pago, descuento);
        acumulado=acumulado+pago;
        }
        //Si la compra fue entre 500 y 999 
        else if(500<=compra & compra<=999){descuento=compra*0.05; pago=compra-descuento;
        printf(pago, descuento);
        acumulado=acumulado+pago;
        }
        //Si la compra fue entre 1000 y 6999 
         else if(1000<=compra & compra<=6999){descuento=compra*0.11; pago=compra-descuento;
        printf(pago, descuento);
        acumulado=acumulado+pago;
         }
        //Si la compra fue entre 7000 y 14999 
        else if(7000<=compra & compra<=14999){descuento=compra*0.18; pago=compra-descuento;
        printf(pago, descuento);
        acumulado=acumulado+pago;
        }
        //Si la compra fue mayor a 15000 
         else if(15000<=compra){descuento=compra*0.11; pago=compra-descuento;
        printf(pago, descuento);
        acumulado=acumulado+pago;
        }

        contador=contador+1;//contador de descuentos
        scanf("%i", continuar);

    } while (continuar==1);

    printf(acumulado);//Salida del total de ganancias en caja
    printf(contador);//Salida del total de descuentos
    return 0;
    
}