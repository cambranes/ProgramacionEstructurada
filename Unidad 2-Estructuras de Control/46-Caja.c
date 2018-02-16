//Desarrollado por Rodrigo Vera

/*En una tienda efectúan un descuento a los clientes dependiendo del monto
de la compra. El descuento se efectúa con base en el siguiente criterio:
___________________________________
|Monto de la compra Descuento    |
|Menor a $500           | No hay |
|$500 a $999            | 5%     |
|$1000 a $6999          | 11%    |
|$7000 a $14999         | 18%    |
|Mayor o igual a $15000 | 25%    |
----------------------------------
Objetivo del programa: Escribir el programa que imprima el total a pagar y el descuento aplicado
para cada uno de lo N clientes que llegan. Después de recibir todos los
clientes escribir el total en caja y el total de descuentos aplicados*/

//se incluyen la siguiente directiva
#include <stdio.h>

//codigo principal del prgrograma
void menu();
int main()
{
 	    menu();
		return 0;

}//fin del programa
/*
Funcion donde se evaluan los datos ingresados por el cliente
*/
void menu()
{
	//inicio del programa
//declaracion de variables 
/*
variable de incremental para el numero de cleintes
variable de incremental para el numero de descuentos aplicados
variable entrada para detectar el el cierre de la caja
variable de entrada para el precio del producto
varibale de salida para guardar el descento aplicado
variable de salida para guardar el total de la suma de todos los productos cobrados
*/
int contadorClientes=0;
int iContador;
int contadorDescuentosAplicados=0;
int cerrarCaja;
float precio=0;
float valorDescuento=0;
float totalCaja=0;

printf("       Bienvenido. \n-Ya puede empezar a cobrar- \n\n");
//ciclo para repetir el programa hasta que se introduszca 0 
for(contadorClientes=1;1==1;contadorClientes++){
	
	//declaracion de arreglos a utilizar utilizando su longiitud segun las veces se haya recorrido el ciclo
	float arregloPagos[contadorClientes];
	float arregloDescuentos[contadorClientes];
	
	//se introduce el precio
	printf("\nIntroduzca el precio: $");
	scanf("%f",&precio);
	
	//condicion para no generar descuento si el precio es menor a 500
	if(precio<500){
		valorDescuento=0;
		precio=precio;
	}else{
		//condicion para generar un descuento si el precio va de los 500 a 999
		if(precio >=500 && precio <=999){
			valorDescuento=precio*0.05;
			precio=precio*0.95;
			contadorDescuentosAplicados+=+1;
		}else{
			//condicion para generar un descuento si el precio va de los 1000 a 6999
			if(precio >=1000 && precio <=6999){
				valorDescuento=precio*0.11;
				precio=precio*0.89;
				contadorDescuentosAplicados+=1;
			}else{
				//condicion para generar un descuento si el precio va de los 7000 a 14999
				if(precio >=7000 && precio <=14999){
					valorDescuento=precio*0.18;
					precio=precio*0.82;
					contadorDescuentosAplicados+=1;
				}else{
					//condicion para generar un descuento si el precio va de 15000 o mas
					if(precio>=15000){
						valorDescuento=precio*0.25;
						precio=precio*0.75;
						contadorDescuentosAplicados+=1;
					}
		
				}
			}
		}
	}
	
	
	// se guardan los valores en los arreglos
	arregloPagos[contadorClientes]=precio;
	arregloDescuentos[contadorClientes]=valorDescuento;
	
	printf("\nCobrar $%.2f | Descuento aplicado $%.2f \n\n",precio,valorDescuento);
	
	//suma para saber cunato se vendio en total
	totalCaja=totalCaja+arregloPagos[contadorClientes];
	
	

	//se pide insertal un valor para seguir o no con los cobros
	printf("-Inserte 0 para cerrar la caja o 1 para seguir cobrando-\n");
	scanf("%d",&cerrarCaja);
	if(cerrarCaja==1){
	}else{
	
	
	if(cerrarCaja==0){
		//si la caja se cerro se inmprimen los resultados
			printf("\nCaja Cerrada\n\n");
			
		printf("TABLA DE PAGOS\n");
    	printf(" ----------------------------------------------------------------------\n");
    	for(  iContador=0;iContador<contadorClientes;iContador++)
		{
			
			printf("|          Cliente No.%d | Cobrado: $%.2f  | Descuento: $%.2f        |",iContador+1,arregloPagos[iContador+1],arregloDescuentos[iContador+1]);
			printf("\n");
			printf(" ----------------------------------------------------------------------\n");
			}
			printf("DATOS DE LA CAJA\n");
			printf("\n\n ----------------------------------------------------------------------\n");
			printf("|        Dinero en caja: $%.2f |No. de descuentos aplicados: %d      |\n",totalCaja,contadorDescuentosAplicados);
			printf(" ----------------------------------------------------------------------\n");
			break;		
		}else {
			printf("Valor incorrecto. \n\n");
		}
   }
	
	
 }
}
