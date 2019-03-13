import random

#Autor: Daniel Eduardo Gutiérrez Delfí    11/Marzo/19
#Entradas: Una matriz de 10 * 10 con numeros entre 0 a 10
#Salidas: el promedio de 20 alumnos en otra matriz
#Proceso: se llena una matriz de 10 * 10 y los 5 primero elementos de una fila soin del alumno 1, los otros 5
#		  son del 2do alumno, de ahi se calcula su promedio, sumando esos 5 elementos y dividirlos entre 5
#		  se colocan en otro matriz para saber su posicion.

#----- Calcula el promedio de los alumnos -----
def promedio(calificaciones,promedios):

	for i in range(0,10):
		sum1 = 0 #se cran dos sumadores para los dos alumnos de cada fila
		sum2 = 0
		for j in range(0,10):

			#se checa si es menor de 5, son el 1er alumno, en caso contrario son del 2do
			if(j < 5 ):
				sum1 += calificaciones[i][j]
			else:
				sum2 += calificaciones[i][j] 	

		#las suman se dividen entre el numero de calificaciones		
		sum1 = sum1 / 5	
		sum2 = sum2 / 5	

		#se añaden a una nueva matriz
		promedios[i][0] = sum1 
		promedios[i][1] = sum2 

#----- se obtienen las calif del alumno -----
def calificacionesAlumno(calificaciones):

	for i in range(0,10):
		for j in range(0,10):

			#se generan los elementos de forma aleatoria en un rango de 0 a 10
			calificaciones[i][j] = random.randrange(0,11)	

calificaciones = []
promedios = []

#se crea la matriz vacia, de la forma que añade en cada iteracion un nueo vector de 10 elementos
for i in range(0,10):
	calificaciones.append([0] * 10)

for i in range(0,10):
	promedios.append([0] * 2)	

calificacionesAlumno(calificaciones)	
promedio(calificaciones,promedios)

#se imprime la matriz de calificaciones
for i in range(0,10):
	print(calificaciones[i])

print("")

n = 0

#se imprime los promedios
for i in range(0,10):
	print("promedio del alumno {} es: {} 	promedio del alumno {} es: {}".format(i+1+n,promedios[i][0],i+2+n,promedios[i][1]))
	n += 1