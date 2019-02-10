# Autor:Jose Eduardo Mendez Verdejo 09/Febrero/19
# Entradas: serie de numeros no definida
# Salidas: el numero menor y el mayor
# Procedimiento general: determinar el numero mayor y el menor de una serie de numeros indefinida

#Entradas --------------------------------------
print("ingresa un numero indeterminaod de numeros, para salir solo ingresa '999' ")

numero = 0
numeroMenor = 9999
numeroMayor = 0


while numero != 999:

	numero = int(input("ingresa un numero: "))

	#Procedimiento ---------------------------------
	if numero < numeroMenor:
		numeroMenor = numero
	elif numero > numeroMayor:
		numeroMayor = numero	

#Salidas ---------------------------------------
print("\nEl numero mayor de la serie es: ",numeroMayor)
print("El numero menor de la serie es: ",numeroMenor)

#	QA Reviso: Carlos Chan
#	Entradas: 2, 5, -5, 10, 999
#	Salidas: 999, -5
#	
#	El programa funciona correctamente.
