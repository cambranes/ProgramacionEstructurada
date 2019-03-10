#Autor: Jose Eduardo Mendez Verdejo    09/Marzo/19
#Entradas: un parrafo y una palabra que quieras buscar del parrafo
#Salidas: el numero de veces que se repite la palabra a buscar
#Proceso: se ingresa el parrafo con el numero de lineas que quieras hasta poner ☺, de escribes que
#		  palabra quieres buscar, en el parrafo se verifica si se encuentra la primera letra de la palabra
#		  a buscar, si existe se comparan las siguientes letras de la palabra para ver si son iguales, si
#		  son iguales, se suma 1 al numero de repeticiones


#----- Se verifica si se encuentra la primera letra de la cadena -----
def cadenaRepite(texto,cadena):

	repetir = 0

	for i in range(0,len(texto)):
		if(texto[i] == cadena[0]):
			repetir += repite(i,cadena,texto) # si existe se compara la cadena en la funcion repite()

	return repetir	

#----- Se verifica si la cedena es igual los siguientes valores del parrafo -----
def repite(i,cadena,texto):

	pos = 0 #para la poscision de la cadena
	repetir = 0
	coincidencias = 0 #el numero de letras que son iguales

	for j in range(i,i + len(cadena)):

		#si la letra del parrafo es igual la letra en la poscion de la cadena, se suma en 1 coincidencias
		if(texto[j] == cadena[pos]):
			coincidencias += 1
			pos += 1

		#si coincidecias es igual al tamaño de la cadena, es que son iguales
		if(coincidencias == len(cadena)):
			repetir += 1 #y se suma en uno las repeticiones

	return repetir					


print("Para dejar de insertar lienas de texto pon '☺' con alt+1")
print("ingresa tu texto")
texto = ''
aux = False

#ciclo para el num de lineas del parrafo
while not aux:

	texto +=input()+"\n"

	for i in texto:
		if(i == '☺'):
			aux = True


cadena = str(input("Que palabra deseas buscar? "))

contadorRepeticiones = 	cadenaRepite(texto,cadena)

print("El numero de veces que {} se repite en el parrafo es: {}".format(cadena,contadorRepeticiones))
