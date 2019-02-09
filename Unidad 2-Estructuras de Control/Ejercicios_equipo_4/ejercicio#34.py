# Autor:Jose Eduardo Mendez Verdejo 09/Febrero/19
# Entradas:Tamanio de la lista de numeros a querer
# Salidas: La lista incrementando de 1 a 1
# Procedimiento general: Se solicita un numero n del cual se hara una lista del 1 hasta el numero n

#Entradas --------------------------------------
i = 1
numero = int(input("ingresa hasta que numero quieres la cadena: "))
numeros = [None] * numero

#Procedimiento ---------------------------------
while i <= numero:
	numeros[i-1] = i
	
#Salidas ---------------------------------------
	print(numeros[:i])
	i += 1

