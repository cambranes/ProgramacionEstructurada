import random

#Autor: Jose Eduardo Mendez Verdejo    09/Marzo/19
#Entradas: Un vector de tamano "n" con numeros random entre 0,50
#Salidas: la media, la moda y la mediana de ese vector
#Proceso: se define el tamano del vector, se le otorgan valores al vector mientras se suman para obetener la media
#		  la suma obtenida se divide entre el total de elementos "media / n", se pasa a obtener la moda, la cual
#		  se verifica cuantas veces se repite cada numero del 0-50, se analiza cualse repitio mas y en otro vector
#         se anaden los numeros que son la moda, para determinar la mediana hay que determinar si el tam de array 
#		  es par o impar, se determina la mediana  y si s par, se suman los puntos medios y se divide entre 2

#----- Genera los numeros random del vector -----
def generateArray(array,media):
	for i in range(0,n):
		array[i] = random.randrange(0,50)

		#se suman los numeros para calcular la media
		media = media + array[i]
	
	#se divine entre el numero de elementos del vector
	media = media / n

	return media	

#---- obtiene la moda -----
def getModa(trono):

	#determina la cantidad de veces que se repite cada numero de 0 a 50
	for j in range(0,50):
		for i in array:
			if(i == j):
				modaRepite[j] = modaRepite[j] + 1

	#determina cual fue el numero mayor de num. repetidos
	for i in modaRepite:
		if(i > trono):
			trono = i

	#determina los numeros que mas se repitieron y los añade al vector moda, cuales son la moda
	for i in range(0,50):
		if(modaRepite[i] == trono):
			moda.append(i) #añade en la ultima posicion el numero

#----- Obtiene la mediana -----
def getMediana(medianaPos1,medianaPos2):

	#determina si el tam del vector es par o impar
	if(n % 2 == 1):
		medianaPos1 = int(n/2) #se obtiene la pos de la mediana en caso impar
	else:

		#se obtiene la pos de las medianas en caso par
		medianaPos1 = int(n/2) - 1
		medianaPos2 = int(n/2) 

				
	if(medianaPos2 == 0):
		medianas = array[medianaPos1]
	else:
		mediana[0] = array[medianaPos1]
		mediana[1] = array[medianaPos2]	
		medianas = (mediana[0] + mediana[1]) / 2


	return medianas



n = int(input("Define le tamano del vector: "))

array = [None] * n
modaRepite = [0] * 50
moda = []
medianaPos1 = 0
medianaPos2 = 0
mediana = [0,0]
media = 0
trono = -1


media = generateArray(array,media)

getModa(trono)

medianas = getMediana(medianaPos1,medianaPos2)

# if(n % 2 == 1):
# 	medianaPos1 = int(n/2) 
# else:
# 	medianaPos1 = int(n/2) - 1
# 	medianaPos2 = int(n/2) 

			
# if(medianaPos2 == 0):
# 	mediana[0] = array[medianaPos1]
# else:
# 	mediana[0] = array[medianaPos1]
# 	mediana[1] = array[medianaPos2]	

print("Vector ",array)

print("la media es: ",media)

print("La moda es/son: ",moda)	

print("la mediana es:", medianas)

"""
Autor QA: Alejandro Torre Reyes
Entrada: 10
Salida: Vector  [10, 26, 43, 0, 16, 2, 41, 26, 9, 29]
la media es:  20.2
La moda es/son:  [26]
la mediana es: 9.0
Proceso: Ok. Todo correcto
"""
