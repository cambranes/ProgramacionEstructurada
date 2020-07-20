#----------------------------------Datos del problema-------------------------------------
#Ejercicio #
# Escribe el programaque lea muchos valores de n  y que calcule la expresión
# Roberto Carlos Llanes Montero (Equipo 'about:blank')

#----------------------------------Prototipo de funciones----------------------------------
#Python no permite la creación de prototipos debido al funcionamiento de la definición de 
#sus funciones, de hecho, gran parte de estos conceptos estan haciendo más lento al proceso
#de python :c

#----------------------------------------Funciones------------------------------------------
#También python no acepta poner funciones al final :c

def getEne():
	Ene = int(input())
	return Ene 
def proceso(n):
	print("y = 1",end = ' ')
	if( n == 1 ):
		print("+ x",end = ' ')	
	else:
		for i in range(1,Ene+1):
			salida(i)
				
def salida(n):
	if( n > 1 ):
		if( n % 2 == 0 ):
			print("+ {}x^{}/{}!".format(n,n,n),end = ' ')
		else:
			print("- {}x^{}/{}!".format(n,n,n),end = ' ')

#----------------------------------------Proceso-------------------------------------------
#Obtener el dato de inicio
Ene = getEne()
#Proceso
proceso(Ene)
