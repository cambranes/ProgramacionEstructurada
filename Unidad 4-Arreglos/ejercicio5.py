#Autor: Daniel Eduardo Gutérrez Delfín    11/Marzo/19
#Entradas: Una matriz de 10 * 10 con numeros entre 0 a 10
#Salidas: el promedio de 20 alumnos en otra matriz
#Proceso: se solicitan pares de datos (num producto y cantidad vendida), entra a una estrctura if, donde se
#		  se selecciona el tipo de producto y se calcula el total de la cantida vendida, el cual se agrega en
#		  en una matriz nueva.

#----- se calcula el total del producto vendido correspondiente al num de producto -----
def productoVendido(numProducto,cantidadVendida,matrizProducto):
	i = numProducto - 1
	matrizProducto[i][1] = (cantidadVendida * matrizProducto[i][0]) + matrizProducto[i][1] 

#----- ingresa el numero de producto y la cantidad vendida -----
def entradas():

	numProducto = 0

	while not(numProducto > 0 and numProducto < 6): #el num de producto debe estar entre 1 y 5
		numProducto = int(input("Numero de producto: "))

	cantidadVendida = -1

	while not(cantidadVendida > -1) :	#la cantidad de ventas no puede ser negativo
		cantidadVendida  = int(input("Cantidad vendida: "))

	return numProducto, cantidadVendida #se retornan los pares de valores

#se crea una matriz donde se guarda el total del producto vendido y su precio original
matrizProducto = []
for i in range(0,5):
	matrizProducto.append([0] * 2)

#se le agregan los precios de cada producto correspondiente del numero de producto
matrizProducto[0][0] = 2.98	
matrizProducto[1][0] = 4.50
matrizProducto[2][0] = 9.98
matrizProducto[3][0] = 4.49
matrizProducto[4][0] = 6.87

#ciclo while para determinar las cantidad de veces que desee ingresar la info
continuar = False
while not(continuar):
	numProducto, cantidadVendida = entradas()

	#esructura para cao de producto (no existe switch case)
	if(numProducto == 1):
		productoVendido(numProducto,cantidadVendida,matrizProducto)

	if(numProducto == 2):
		productoVendido(numProducto,cantidadVendida,matrizProducto)

	if(numProducto == 3):
		productoVendido(numProducto,cantidadVendida,matrizProducto)

	if(numProducto == 4):
		productoVendido(numProducto,cantidadVendida,matrizProducto)

	if(numProducto == 5):
		productoVendido(numProducto,cantidadVendida,matrizProducto)	

	#se pregunta si desewa ingresar datos
	continuar = int(input("deseas continuar (0 para continuar, 1 para salir) : "))	

#impresion de los datos
for i in range(0,5):
	print("producto {} su total es: {}".format(i+1,matrizProducto[i][1]))
"""
Entradas: 3,3
Salida: producto 3 su total es 29.94
Proceso: OK.Todo correcto
"""
