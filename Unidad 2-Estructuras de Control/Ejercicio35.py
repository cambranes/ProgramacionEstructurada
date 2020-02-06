#El usuario debe ingresar un valor entero menor o igual a 10, ya que por la naturaleza de la sintaxis, si el número es mayor la tabla puede verse desacomodada.
#Se utiliza un ciclo para la impresión de la tabla.
valorN=int(input("Ingrese un valor entero (de preferencia, un número que sea menor o igual a 10)"))
for i in range(valorN):
	for j in range(valorN):
		if i<=j:
			#Dado que el ejercicio nos pide que imprimamos la diagonal superior de la tabla, podemos notar que las íes superan los valores de j, por lo tanto ponemos como condicional que se imprimirá siempre y cuando i sea mayor o igual que j,
			#Print naturalmente hace saltos de línea, es por eso que agregamos en end='' para que no salte hasta que la condicióni<=j no se cumpla
			print(str(i) + str(j) + ' ',end = '')
			#Colocamos la suma de cadenas para unir la i y j sin que los valores se sumen
			#Se mirará así ij ij ij ij hasta hasta que j>i
		else:
			#Cuando j>i se imprimirán espacios
			print('   ', end = '')
	print()

#Código hecho por Ileana Castillo del Equipo 5
