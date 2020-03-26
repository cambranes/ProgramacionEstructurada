#include <stdio.h>

int main(){
	float descuentos = 0, total = 0, clientes = 0, x = 1, n = 0, proseguir = 0, monto = 0, descuento = 0, continuacion = 0;
#include <stdio.h>

int main(){
	float descuentos = 0, total = 0, clientes = 0, x = 1, n = 0, monto = 0, descuento = 0, continuacion = 0;
	
		scanf("%f",&n); /*Se lee a cuántos clientes se les va a calcular sus descuentos*/
		if (n != 0){
			while (clientes < n){
					scanf("%f",&monto);/*Se lee los montos individuales de cada cliente*/
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
			printf("%f", monto);/*Se le imprime al cliente su monto final con el descuento aplicado, si hubo*/
			total = total + monto;
			clientes = clientes + 1;
			}
			printf("%f", total);/*Se imprime el total rcaudado del día*/
			
			printf("%f", descuentos);/*Se imprime la cantidad de descuentos aplicados*/
		}
		else
			printf("%f", n);
	
}
