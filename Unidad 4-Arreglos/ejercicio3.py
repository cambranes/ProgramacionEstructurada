import random

#Autor: Jose Eduardo Mendez Verdejo    10/Marzo/19
#Entradas: Matriz de 50 X 50 elementos aleatorios
#Salidas: una matriz S que es la suma de los elemetos de la misma posicion de los matrices anteriores
#Proceso: Se genera aleatoriamente una matriz de 50 X 50 elementos, se analiza cada elemento si es par o impar,
#		 si es par se imprime enuna nueva matriz, si es impar se añade a un contador de impares que se imprime al final


#-------------------------------------------
#Notas del autor: por fines practicos le recomiendo cambiar los 50 por un numero menor
#--------------------------------------------

#----- Se obtienen los valores de las matriz -----
def generateMatriz(matriz):

	for i in range(0,50):
		for j in range(0,50):
			#se generan los elementos de forma aleatoria en un rango de 0 a 999
			matriz[i][j] = random.randrange(0,100) 

#----- Se determina el numero de impares -----
def matrizImpares(matriz,pares):
	sumadorImp = 0 #se inicia un contador de impares

	for i in range(0,50):
		for j in range(0,50):

			#se comnpara si el valor es par o impar
			if(matriz[i][j] % 2 == 0):

				#si es par se añade a una nueva matriz donde estaran los numeros pares
				pares[i].append(matriz[i][j])
			else:
				#si es impar se incrementa en 1 el contador
				sumadorImp += 1

	return 	sumadorImp			



matriz = []
pares = []

#se define el tamaño de las matrices
for i in range (0,50):
	matriz.append([0] * 50)

for i in range (0,50):
	pares.append([] * 1)

#se obtienen elementos
generateMatriz(matriz)
impares = matrizImpares(matriz,pares)	

print("Matriz")
for i in range(0,50):
	print(matriz[i])

print("")

print("Numeros pares")
for i in range(0,50):
	print(pares[i])	

print("")

print("El numero de impares es:",impares)	

"""
Autor QA:Jimmy Nathan Ojeda Arana
Entradas: Se generan 2,500 numero al azar del 1 al 100
Salidas: Se imprimen los numeros pares encontrados en la matríz generada y se señala la cantidad de numeros impares en dicha matríz
Proceso: Hace el proceso y da las salidas correctamente 
"""
