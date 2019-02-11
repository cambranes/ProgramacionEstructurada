/*
Creado por: Hector Abraham Valdivieso Cosgalla
Entradas: Articulos, PrecioN, Decs
Salidas: Cliente, TotalCaja, TotalDesc, TotalN, PrecDesc1, PrecDesc2, PrecDesc3, PrecDesc4
Procedimiento: Se ingresa la cantidad de articulos y se lee el precio de cada uno,
Esto se guarda en una variable llamada TotalN, Posteriormente se lee TotalN y dependiendo
de la suma se decide el descuento que se le hace, y se le informa al cliente,
al terminar esto informa cuanto se desconto, cuanto se cobro y cuantos clientes
fueron atendidos.
Notas: El codigo fue diseñado para tener un ciclo Do ... while ... pero no funciono
por eso se elimino y quedaron algunas cosas "raras"
*/

#include <stdio.h>

int main(){
  //Variables de Entrada, proceso y salidas
  float Desc1 = .05, Desc2 = .11, Desc3 = .18, Desc4 = .25, TotalN, Descuento1 = 0, Descuento2 = 0, Descuento3 = 0, Descuento4 = 0;
  float PrecDesc1 = 0, PrecDesc2 = 0, PrecDesc3 = 0, PrecDesc4 = 0, TotalDesc = 0, TotalCaja = 0, TotalPago = 0, PrecioN = 0;
  int n, Articulos;
  n = 0;
  TotalN = 0;
  //Entradas: Se leen los articulos.
  printf("Ingrese la cantidad de articulos\n");
  scanf("%d",&Articulos);
  //Se lee el precio de cada articulo.
  while (n<Articulos) {
    n = n + 1;
    printf("Ingrese el precio del articulo %d\n", n);
    scanf("%f", &PrecioN);
    TotalN = TotalN + PrecioN;
  }
  //Proceso: Dependiendo del total de los productos se realiza la operacion
  //correspondiente y se informa al usuario.
  if (TotalN < 500) {
    printf("El total de compra es %f\n", TotalN );
  	printf("No obtuvo descuento\n" );
  	TotalPago = TotalN;
  }
  else {
    if (TotalN >= 500 && TotalN <1000) {
      PrecDesc1 = TotalN * Desc1;
			TotalPago = TotalN - PrecDesc1;
      printf("El total de compra es %f\n", TotalPago );
    	printf("Tiene un descuento de %f\n", PrecDesc1);
    	Descuento1 = Descuento1 + PrecDesc1;
    }
    else {
      if (TotalN >= 1000 && TotalN < 7000) {
        PrecDesc2 = TotalN * Desc2;
        TotalPago = TotalN - PrecDesc2;
        printf("El total de compra es %f\n", TotalPago );
        printf("Tiene un descuento de %f\n", PrecDesc2);
        Descuento2 = Descuento2 + PrecDesc2;
      }
      else {
        if (TotalN >=7000 && TotalN <15000) {
          PrecDesc3 = TotalN * Desc3;
          TotalPago = TotalN - PrecDesc3;
          printf("El total de compra es %f\n", TotalPago );
          printf("Tiene un descuento de %f\n", PrecDesc3);
          Descuento3 = Descuento3 + PrecDesc3;
        }
        else{
          if (TotalN >= 15000) {
            PrecDesc4 = TotalN * Desc4;
            TotalPago = TotalN - PrecDesc4;
            printf("El total de compra es %f\n", TotalPago );
            printf("Tiene un descuento de %f\n", PrecDesc4);
            Descuento4 = Descuento4 + PrecDesc4;
          }
        }
      }
    }
  }
  //Proceso: Se hacen las operaciones correspondientes
  TotalCaja = TotalCaja + TotalPago;
  TotalDesc = Descuento1 + Descuento2 + Descuento3 + Descuento4;
  //Salidas: Informa cuanto se cobro y cuanto se desconto.
  printf("El total de venta fue de: %f\n", TotalCaja );
  printf("Se desconto un total de: %f\n", TotalDesc);
  return 0;
}
