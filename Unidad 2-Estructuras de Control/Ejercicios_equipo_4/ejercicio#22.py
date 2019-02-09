# Autor:Jose Eduardo Mendez Verdejo 09/Febrero/19
# Entradas: serie de numeros no definida
# Salidas: el numero menor y el mayor
# Procedimiento general: determinar el numero mayor y el menor de una serie de numeros indefinida
#Entradas --------------------------------------
numero = int(input("ingrese hasta que numero sumar(solo enteros positivos): "))
sumaFactoriales = 0
i = 1
while numero < 0:
	numero = int(input("Numero fuera de rango, ingrese de nuevo otro numero: "))


#Procedimiento ---------------------------------

if numero != 0:    #si el numero es diferente de cero
	while i <= numero:
		factorial = 1
		j = 1
		for j in range(1,i+1):
			factorial *= j #factorial

		sumaFactoriales = sumaFactoriales + factorial    #se suma el factorial a la suma total
		
		i += 1
else:
	sumaFactoriales = 1

#Salidas ---------------------------------------
print("La suma de los factoriales es: ",sumaFactoriales)