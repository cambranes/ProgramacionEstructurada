import random
#Autor: Jose Eduardo Mendez Verdejo    10/Marzo/19
#Entradas: dos matrices de M X N elementos
#Salidas: una matriz S que es la suma de los elemetos de la misma posicion de los matrices anteriores
#Proceso: Se obtienen las matrices A y B, y se suman los elemetos de la misma posicion [i][j] el resultado 
#		  va en una nueva matriz

#----- Se suman las dos matrices -----
def sumadorMatrices(matrizA,matrizB,matrizS,m,n):
	
	for i in range(0,m):
		for j in range(0,n):
			matrizS[i][j] = matrizA[i][j] + matrizB[i][j]


#----- Se obtienen los valores de las matrices -----
def generateMatriz(matriz):

	for i in range(0,m):
		for j in range(0,n):

			#se generan los elementos de forma aleatoria en un rango de 0 a 999
			matriz[i][j] = random.randrange(0,999) #para ingreso manual " int(input("ingrese un numero: ")) "


#se introducen los tamaños de las matrices
m = int(input("Filas: "))
n = int(input("Columnas: "))

matrizA = []
matrizB = []
matrizS = []

for i in range (0,m):
	matrizA.append([0] * n)

for i in range (0,m):
	matrizB.append([0] * n)	

for i in range (0,m):
	matrizS.append([0] * n)		

#se llaman a las funciones
generateMatriz(matrizA) #para obtener los elemetos de la matrizA
generateMatriz(matrizB) #para obtener los elemetos de la matrizB
sumadorMatrices(matrizA,matrizB,matrizS,m,n) #Donde se suman las matrices

print("matriz A")
for i in range(0,m):
	print(matrizA[i])

print("matriz B")
for i in range(0,m):
	print(matrizB[i])

print("matriz sumados")
for i in range(0,m):
	print(matrizS[i])	

"""
Autor QA:Jimmy Nathan Ojeda Arana
Entradas: Numero N de filas y numero M de columnas
Salidas: Una matriz S que es la suma de los elemetos de la misma posicion de los matrices anteriores
Proceso: Hace el proceso y da las salidas correctamente 
"""

