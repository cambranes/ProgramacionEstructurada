import random
#Autor: Jose Eduardo Mendez Verdejo    10/Marzo/19
#Entradas: una matriz de 15 x 12 elementos numericos
#Salidas: el numero menor de la matriz, la suma de sus primeras 5 filas y la suma de las 5 ultimas columnas
#Proceso: se obtiene una matriz de 15 x 12, se busca el elementos menor, se suman las 5 primeras filas y las
#		  ultimas 5 columnas.


#----- Se obtiene la matriz -----
def generarMatriz(matriz):

	for i in range(0,15):
		for j in range(0,12):

			#se generan los elementos de forma aleatoria en un rango de 0 a 999
			matriz[i][j] = random.randrange(0,1000) #para ingreso manual " int(input("ingrese un numero: ")) "

#----- Se busca el elemento menor -----
def menorMatriz(matriz):
	trono = 99999 #se asiga a una variable un valor mas grande para realizar la comparacion
	
	for i in range(0,15):
		for j in range(0,12):
			
			#si un numero es menor al trono se remplaza
			if(matriz[i][j] < trono):
				trono = matriz[i][j]

	return trono			

#----- Se suman las 5 filas -----
def sumaFilas(matriz,n):

	sumador = 0

	for i in range(0,5):
		for j in range(0,n):
			sumador += matriz[i][j]

	return sumador			

#----- Se suman las 5 columnas -----
def sumaColumnas(matriz,n):
	
	sumador = 0

	for i in range(0,15):
		for j in range(n-5,n):
			sumador += matriz[i][j]

	return sumador	


matriz = []
n = 12

for i in range (0,15):
	matriz.append([0] * n)


generarMatriz(matriz)
menor = menorMatriz(matriz)
sumaF = sumaFilas(matriz,n)
sumaC = sumaColumnas(matriz,n)

#se imprime la matriz para verificar datos
for i in range(0,15):
	print(matriz[i])

print("numero menor es: ",menor)
print("suma total de las 5 filas es: ",sumaF)
print("suma total de las ultimas 5 columnas es: ",sumaC)		