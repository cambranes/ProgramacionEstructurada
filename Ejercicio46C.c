#include <stdio.h>

int main(){
	float descuentos = 0, total = 0, clientes = 0, x = 1, n = 0, proseguir = 0, monto = 0, descuento = 0, continuacion = 0;
	
	printf("¿Hay clientes?[si(1)/no(0)]\n");
		scanf("%f",&proseguir);
		if (proseguir == 1){
			while (n < x){
				printf("Escriba el monto a pagar para verificar si le corresponde algún descuento:\n");
					scanf("%f",&monto);
					if (monto<500){
						descuento = 1;
					}else{
						if (monto<1000){
							descuento = .95;
							descuentos = descuentos + 1;
						}else{
							if (monto<7000){
								descuento = .89;
								descuentos = descuentos + 1;
							}else{
								if (monto<15000){
									descuento = .82;
									descuentos = descuentos + 1;
								}else{
									descuento = .75;
									descuentos = descuentos + 1;
								}
							}
						}
					}
			monto = monto * descuento;
			printf("Le corresponde pagar un total de: $\n");
			printf("%f", monto);
			total = total + monto;
			n = n + 1;
			clientes = clientes + 1;
			printf("¿Hay más clientes?[si(1)/no(0)]\n");
				scanf("%f",&continuacion);
				if (continuacion == 1){
					x = x + 1;
				}
				else
					printf("No hay más clientes. \n");
			}
			printf("El día de hoy hubieron \n");
			printf("%f", clientes);
			printf(" cliente(s), \n");
			printf("%f", descuentos);
			printf(" descuento(s) aplicados y se recaudó un total de \n");
			printf("%f", total);
			printf(" pesos.\n");
		}
		else
			printf("El día de hoy no hubieron clientes.\n");
	
}
