import random,math

#Autor: Jose Eduardo Mendez Verdejo    09/Marzo/19
#Entradas: Un vector de tamano "n" con numeros random entre 0,100
#Salidas: la media, la varianza y la desviacion estandar
#Proceso: Calcular la media cuando se agregan elementos al vector sumando el elemento, y despues la suma total
#		  se divide entre le numero de elementos, la varianza se calcula aproximadamente igual que la media, solo
#		  que se suma (elemento - media) y se divide entre el total de elementos, la desviacion es la raiz de la varianza

#----- Genera los numeros random del vector -----
def generateArray(array,media):
	for i in range(0,n):
		array[i] = random.randrange(0,100)

		#se suman los numeros para calcular la media
		media = media + array[i]
	
	#se divine entre el numero de elementos del vector
	media = media / n

	return media	

#----- Se obtiene la varianza -----
def getVariazna(array,arrayVarianza,media):

	varianza = 0
	j = 0

	for i in array:

		#a un vector nuevo se le otorga el resultado de (x-media)^2
		arrayVarianza[j] = (i - media) * (i - media) 
		varianza += arrayVarianza[j] #se suman los elementos

		j += 1

	varianza /= n #se divide entre n y se obtiene la varianza
	return varianza

#----- Obtener desviacion estandar -----
def getDesEst(varianza):
	desviacionEstandar = math.sqrt(varianza) #se obtiene la raiz de varianza
	return desviacionEstandar

#se define el tamaño del vector
n = int(input("Define le tamano del vector: "))

array = [None] * n	
arrayVarianza = [None] * n
media = 0

media  = generateArray(array,media)
varianza = getVariazna(array,arrayVarianza,media)
desviacionEstandar = getDesEst(varianza)

print("Vector ",array)
print("media: ",media)
print("varianza: ",varianza)
print("desviacion Estandar: ",desviacionEstandar)