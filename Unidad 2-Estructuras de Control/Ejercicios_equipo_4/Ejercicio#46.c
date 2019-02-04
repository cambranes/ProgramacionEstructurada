/*
Autor:Jose Eduardo Mendez Verdejo 23/Enero/19
Entradas:num. de clientes, y el total a pagar de cada uno
Salidas: total de cada cliente (algunos con descuento), total en caja y total de descuentos
Procedimiento general: se aplicara un descuento al total de cada cliente dependiento de la cantidad a pagar
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Entradas*/
	int tam;
	printf("Cantidad de clientes a cobrar: ");
	scanf("%i",&tam);
	printf("\n\n");
	
	float pagarC[tam];
	float descuentoC[tam];
	float pagarDC[tam];
	float total_Caja=0;
	float total_Descuentos=0;
	int i=0;
	
	
	while(i < tam)
	{
		//ingresando el monto a cobrar al cliente
		printf("Cantidad a pagar del cliente %i: ",i+1);
		scanf("%f",&pagarC[i]);
		
		/*Procedimiento*/
		//condicional del descuento a aplicar segun el monto a pagar
		if(pagarC[i]>=500 && pagarC[i]<1000)
		{
			descuentoC[i]=pagarC[i]*0.05;
			pagarDC[i]=pagarC[i]*0.95;
		}
		else if(pagarC[i]>=1000 && pagarC[i]<7000)
		{
			descuentoC[i]=pagarC[i]*0.11;
			pagarDC[i]=pagarC[i]*0.89;
		}
		else if(pagarC[i]>=7000 && pagarC[i]<15000)
		{
			descuentoC[i]=pagarC[i]*0.18;
			pagarDC[i]=pagarC[i]*0.82;
		}
		else if(pagarC[i]>=15000)
		{
			descuentoC[i]=pagarC[i]*0.25;
			pagarDC[i]=pagarC[i]*0.75;
		}
		else
		{
			descuentoC[i]=0;
			pagarDC[i]=pagarC[i];
		}
		total_Caja = total_Caja + pagarDC[i];
		total_Descuentos = total_Descuentos + descuentoC[i];
		i++;
	}
	
	
	printf("\n\n");
	
	/*Salidas*/
	for (i=0;i<tam;i++)
	{
		if(pagarC[i]<500)
		{
			printf("Cliente %i:(no alcanzo descuento) Total a pagar %.2f \n",i+1,pagarDC[i]);
		}
		else	
		{
			printf("Cliente %i: Monto inicial %.2f  Descuento %.2f  Total a pagar %.2f \n",i+1,pagarC[i],descuentoC[i],pagarDC[i]);
		}
	}
	printf("\n");
	printf("Total de dinero en caja: %.2f \n",total_Caja);
	printf("Total de descuentos aplicados: %.2f",total_Descuentos);
	return 0;
}
