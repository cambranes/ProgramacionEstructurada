#Autor: Jose Eduardo Mendez Verdejo    09/Marzo/19
#Entradas: 2 cadenas de caracteres numericos de maximo 256 de tamaño
#Salidas: la suma de las 2 cadenas en una nueva cadena
#Proceso: analizar si el numero dado es positivo o negativos, despues remplazar las cadena a valores enteros
#		  en est caso uns str se puede manejar como vector y que los valores numericos de las cadenas
#		  no estan en codigo ascii. sumar las dos cadenas y de ahi pasar el resultado a un str

#----- convertir el primer str a entero -----
def factor1(num1):

	for i in num1:

		#analizando si es positivo o negativo
		if(i == '-'):

			#en caso que sea negativo se toma la cadena despues del signo
			x = num1[1:4]
			suma1 = int(x) * -1 # y el valor entero se multplica por -1 para que se vuelva negativo
		else:
			suma1 = int(num1)

	return suma1

#----- convertir el primer str a entero -----	
def factor2(num2):
	for i in num2:

		#en caso que sea negativo se toma la cadena despues del signo
		if(i == '-'):
			x = num2[1:4]
			suma2 = int(x) * -1 # y el valor entero se multplica por -1 para que se vuelva negativo
		else:
			suma2 = int(num2)

	return suma2			

#----- se obtiene los dos factores y se devuelve su suma -----
def suma(num1,num2):
	return factor1(num1) + factor2(num2)

aux = False

while not aux:
	num1 = str(input("ingresa un numero 1 (hasta 256 digitos): "))
	if (len(num1) < 256 and len(num1) > 1):
		aux = True

aux = False

while not aux:
	num2 = str(input("ingresa un numero 2 (hasta 256 digitos): "))
	if (len(num2) < 256 and len(num2) > 1):
		aux = True

suma = 	suma(num1,num2)

#se transforma el entero de nuevo a cadena de caracteres	
sumaTotal = str(suma)	

print("la suma de {} + {} es: {}".format(num1,num2,sumaTotal))


#QA: Amaury Morales Cerecedo
#
#(Funcion factor1 y factor2)
#Entradas: 123456789, 987654321. 123, -123
#Salidas: Ambas cadenas.
#
#(Funcion suma)
#Entradas: Las cadenas 1 y cadenas 2 de la funcion anterior.
#Salidas: 1111111110, y 0.
