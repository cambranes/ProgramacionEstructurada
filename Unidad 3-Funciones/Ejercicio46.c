#include <stdio.h>

/*
Autor: Jose Eduardo Mendez Verdejo  16/Febrero/19
Entradas:
Salidas:
Procedimiento:
*/

int entrada(float,int);
float proceso(int, float*, float*);
void salida(float,float,float,int);

int main() {
	
	int tam;
	printf("Cantidad de clientes a cobrar: ");
	scanf("%i",&tam);
	printf("\n\n");
	
	float pagar;
	float pagarC[tam];
	float descuentoC[tam];
	float pagarDC[tam];
	float totalCaja=0;
	float totalDescuentos=0;
	int i = 0;
	
	while(i < tam){
	
	pagarC[i] = entrada(pagar,i);
	
	proceso(pagarC[i],&descuentoC[i],&pagarDC[i]);
	
	totalCaja = totalCaja + pagarDC[i];
	totalDescuentos = totalDescuentos + descuentoC[i];
	
	i++;
	}
	
	printf("\n");
	
	for(i = 0; i < tam ; i++ ){
		salida(pagarC[i],descuentoC[i],pagarDC[i],i);
	}
	
	printf("\n");
	printf("Total de dinero en caja: %.2f \n",totalCaja);
	printf("Total de descuentos aplicados: %.2f",totalDescuentos);
	
	return 0;
}

int entrada(float pagar,int i){
	
	printf("Cantidad a pagar del cliente %i: ",i+1);
	scanf("%f",&pagar);
	return pagar;
	
}

float proceso(int pagarC,float *descuentoC, float *pagarDC){
	
	if(pagarC>=500 && pagarC<1000)
		{
			*descuentoC=pagarC*0.05;
			*pagarDC=pagarC*0.95;
		}
		else if(pagarC>=1000 && pagarC<7000)
		{
			*descuentoC=pagarC*0.11;
			*pagarDC=pagarC*0.89;
		}
		else if(pagarC>=7000 && pagarC<15000)
		{
			*descuentoC=pagarC*0.18;
			*pagarDC=pagarC*0.82;
		}
		else if(pagarC>=15000)
		{
			*descuentoC=pagarC*0.25;
			*pagarDC=pagarC*0.75;
		}
		else
		{
			*descuentoC=0;
			*pagarDC=pagarC;
		}
}

void salida(float pagarC, float descuentoC, float pagarDC, int i){
	
	if(pagarC<500)
		{
			printf("Cliente %i:(no alcanzo descuento) Total a pagar %.2f \n",i+1,pagarDC);
		}
		else	
		{
			printf("Cliente %i: Monto inicial %.2f  Descuento %.2f  Total a pagar %.2f \n",i+1,pagarC,descuentoC,pagarDC);
		}
}
/*
QA: Amílcar Ramírez
entrada():
Todos los valores numericos ingresados funcionan, OK
proceso():
Calcula correctamente el n numero de clientes a comprar, el monto por cada cliente del producto, el descuento junto con el precio 
mas el descuento, a su vez determina el dinero en caja por los montos a pagar de todos los clientes, y el dinero del total de
descuentos aplicados, OK
salida():
Muestra correctamente y ordenado todos los datos, Ok
Prueba integral:
El codigo compila correctamente; como nota usa arreglos, ademas de no haber definido cuales son sus entradas, procesos, salidas
en el lugar comentado correspondiente.
*/
