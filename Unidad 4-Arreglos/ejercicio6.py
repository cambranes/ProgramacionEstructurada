#Para usar random
import random
 #Autor: Daniel Eduardo Gutiérrez Delfín    11/Marzo/19
#Entradas: una matriz de n X n elementos.
#Salidas: La suma de los valores de la matriz a excepción de la diagonal pricipal e inversa.
#Proceso: Rellenar una matriz de n X n elementos de 0 al 999, sacar la suma de los datos y restar 
#		  las 2 diagonales.

#Definir Funciones
#se usa la estructura
#def Nombre_Funcion(parámetros):
	#Instrucciones
	#return (opcional)
 
def SumaTotal(X):
	Total=0
	for a in X:
		for b in a:
			Total=Total+b
	return(Total)
 
 
def SumaDiagonal1(X):
	Diagonal1=0
	y=len(X)
	for a in range(y):
		Diagonal1=Diagonal1+X[a][a]
	return(Diagonal1)
 
 
def SumaDiagonal2(X):
	Diagonal2=0
	y=len(X)
	for a in range(y):
		Diagonal2=Diagonal2+X[a][y-1-a]
	return(Diagonal2)
 
 
 
 
#No hay que declarar antes las variables
 
#Para imprimir texto
print("Por favor de el numero de las dimenciones de la matriz cuadrada")
print("Ejemplo: Si pone 3 la matriz será de 3x3 lo cual dará 9 datos en matriz")
 
#No se definen las variables antes, así que cuando lees una, debes poner qué tipo es
n=int(input())
#En este caso el int es para decir que es un número lo que vas a leer
 
#Se declara una lista/matriz
M=[]
#Está vacía, la vamos a llenar
 
#En el for, i es tu contador, y range(n) son los números [1,2,3,4,5...n] Así que esos valores toma tu i
for i in range(n):
	M.append([0]*n)
	#Cada [0]*n es una fila con n ceros
	#Con el for logramos poner n filas de n ceros
	#Así logramos poner una matriz de nxn
 
for i in range(n):
	for j in range(n):
		M[i][j]=random.randint(0,1000)
		#Así es el Random de números enteros
 
#Para cada fila i en mi matriz
for i in M:
	#Para cada casilla j en mi fila i
	for j in i:
		#imprimir j
		print j,
	print(" ")
 
T=SumaTotal(M)
print("La suma total es")
print T
 
D1=SumaDiagonal1(M)
print("La suma de la diagonal es")
print D1
 
D2=SumaDiagonal2(M)
print("La suma de la diagonal inversa es")
print D2
 
print("No sé como se llama XD")
print (T-D1-D2)