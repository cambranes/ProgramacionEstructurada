# Autor:Jose Eduardo Mendez Verdejo 04/Febrero/19
# Entradas: id numerico, edad(enteros), sueldo(enteros)
# Salidas: numeros de personas que cumplan una condicion
# Procedimiento general:El contar el numero de personas mayores de 35 anios y con un sueldo desde 5000 hasta 7000

#Entradas --------------------------------------
#definiendo el tamano de los arrays
id_Persona = [None] * 10
edad = [None] * 10
sueldo = [None] * 10
i = 0
mayores_35 = 0
while i < 10	:
	#solicitando datos de cada persona
 	id_Persona[i] = int(input("Ingresa el ID (solo numeros) de la persona num. {}: ".format(i+1)))
 	edad[i] = int(input("Ingresa la edad de la persona num. {}: ".format(i+1)))
 	sueldo[i] = int(input("Ingresa el sueldo de la persona num. {}: ".format(i+1)))
 	print("\n")

#Procedimiento ---------------------------------
	#comprobando si cumple las 3 condiciones
	#1: si es mayor de 35 anios. 2:su sueldo es igual o superios a 5000. 3: pero menos a 7000
 	if edad[i]>35 and sueldo[i]  >= 5000 and sueldo[i] < 7500 :
 		mayores_35  += 1

 	i += 1	

print("\n")


#Salidas ---------------------------------------
i = 0
while i < 10 :
	print("persona {}: ID {}   Edad {}   sueldo {:0.2f}".format(i+1,id_Persona[i],edad[i],sueldo[i]))
	i += 1	

print("\n Total de personas mayores de 35 años y con sueldo entre 5000 y 7500: {}".format(mayores_35))

#QA: Realizó: Guillermo Canto
#Entradas: 0, -1, 18, 5000, 5001, 7500, 7501
#Salidas: Ok, Ok
#El programa funciona correctamente.

