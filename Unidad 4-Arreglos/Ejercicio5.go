//5. Una empresa de ventas por correo vende cinco diferentes productos, cuyos precios al menudeo
//son: producto1 = $2,98, producto2 = $4,50, producto 3 = $9.98, producto 4 = $4.49 y producto
//5 = $6.87. Escriba el programa que lea una serie de pares de números de la siguiente forma:
//d. Número de producto
//e. Cantidad vendida por día
//Su programa debe calcular y desplegar el valor total al menudeo de los productos vendidos al día.
//Utilice una estructura de selección múltiple (switch) para tal propósito.
//Autor: Rodrigo Hernnadez Gongora
package main
import "fmt"

func leerMatriz(matriz *[5][3] float64) {
	var value float64
    for i:=0; i<5; i++ {
        for j:=0; j<2; j++ {
            switch (j) {
                case 0:
                    fmt.Printf("Introduce el numero de producto\n");
                    break
                    
                default:
                    fmt.Printf("Introduce las ventas del dia\n");
                    break
            }
            fmt.Scanf("%f", &value)
            matriz[i][j]=value
        }
    }
}

func ventas(matriz *[5][3] float64) {
	for i := 0; i < 5; i++ {
		switch (i){
			case 0:
				matriz[i][2]=(matriz[i][1])*2.98
				break
			case 1:
                matriz[i][2]=(matriz[i][1])*4.50
                break
            
            case 2:
                matriz[i][2]=(matriz[i][1])*9.98
                break
                
            case 3:
                matriz[i][2]=(matriz[i][1])*4.49
                break
                
            default:
                 matriz[i][2]=(matriz[i][1])*6.87
                break
		}
	}
}

func salidas(matriz[5][3] float64) {
	for i := 0; i < 5; i++ {
		fmt.Printf("Las ventas del producto %d fueron %f\n", i+1,matriz[i][2])
	}
}

func main() {
	var matriz[5][3]float64
	leerMatriz(&matriz)
	ventas(&matriz)
	salidas(matriz)
}

/*
	QA Reviso: Carlos Chan
	
	void leerMatriz()
		Entradas: (1, 2), (1, 2), (1, 3), (1, 1), (1, 3)
		Salidas: Ninguna, pero la matriz se encuentra de esta manera: (La x representa que esa posicion esta vacia)
			1	2	x
			1	2	x
			1	3	x
			1	1	x
			1	3	x
		
		- La funcion lee datos y los almacena en la matriz correctamente.
	
	void ventas()
		Entradas: 
			1	2	x
			1	2	x
			1	3	x
			1	1	x
			1	3	x
		
		Salidas: Ninguna, pero la matriz se encuentra en este estado:
			1	2	5.96
			1	2	9.0
			1	3	29.94
			1	1	4.49
			1	3	20.61

	void salidas()
		Entradas: 
			1	2	5.96
			1	2	9.0
			1	3	29.94
			1	1	4.49
			1	3	20.61
		
		Salidas:
			- Las ventas del producto 1 fueron 5.96
			- Las ventas del producto 2 fueron 9.0
			- Las ventas del producto 3 fueron 29.94
			- Las ventas del producto 4 fueron 4.49
			- Las ventas del producto 5 fueron 20.61
	
	- El programa funciona de manera incorrecta, ya que se puede ver que unicamente introduje
	el numero de producto 1, por lo cual el programa solo deberia calcular las ventas del producto 1,
	pero en lugar de eso, el programa calculo las ventas de todos los 5 productos, 
	ademas no se sabe cuantas ventas hay por dia (Me lo dijo el maestro),
	por lo que leer unicamente 5 veces el numero de producto y la cantidad vendida es incorrecto. 
*/
