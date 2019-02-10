# Autor:Jose Eduardo Mendez Verdejo 03/Febrero/19
# Entradas:num de trabajadores y su sueldo
# Salidas:su nuevo sueldo en caso de que se aplicara un aumento, sino solo su sueldo
# Procedimiento general: se aplicara un aumento a cada trabajador dependiendo de su sueldo

#Entradas --------------------------------------
tam = int(input("Ingresa el numero de trabajadores: "))
trabajador = [None] * tam

i = 0
print("\n")
while i < tam:
	#se solicita el sueldo del trabajador
	trabajador[i] = float(input("ingresa el sueldo del trabajador {} :".format(i+1) ))

#Procedimiento ---------------------------------
	#se compara si el sueldo es menor que 800 pesos
	if (trabajador[i] < 800):
		trabajador[i] = trabajador[i]*1.15
	i += 1	

#Salidas ---------------------------------------
i = 0
print("\n")
while i < tam:
	print("El sueldo del trabajador {} es de: {:0.2f}".format(i+1,trabajador[i]))
	i += 1		
	
#QA
#Revisó: Guillermo Canto
#Entradas: 0, 2,1000,500, 2,1000,800
#Salidas: Ok, Ok, Ok	
#El programa funciona correctamente
