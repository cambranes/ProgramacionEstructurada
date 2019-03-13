import random

#Autor: Daniel Eduardo Gutiérrez Delfín    11/Marzo/19
#Entradas: una matriz de 9 X 9 elementos
#Salidas: si la matriz es un sudoku o no
#Proceso: Rellenar una matriz de 9 X 9 elementos de 1 al 9, analizar si en una fila o columna se repite 
#		  en la misma, si se repite ya no representa un sudoku

#----- generar la matriz -----
def generateSudoku(sudoku):

	for i in range(0,9):
		for j in range(0,9):

			#se generan los elementos de forma aleatoria en un rango de 1 a 9
			sudoku[i][j] = random.randrange(1,10)


#----- verifica si es un sudoku o no -----
def verificador(sudoku):

	#se inicializa una variable que determina si es o no es un sudoku
	esSudoku = False

	#se analiza el caso por filas
	for i in range(0,9):

		for j in sudoku[i]:
			aux = 0 #variable oara determinar si un numero se repite 2 veces

			for k in range(0,9):
				if(j == sudoku[i][k]):
					aux += 1 
		
			if(aux > 1 ):
				esSudoku = True	#si el numero se repite dos veces, entonces se cambia su valor a True 

	#Se analiza el caso por columnas
	for i in range(0,9):

		for j in sudoku[i]:
			aux = 0 #variable oara determinar si un numero se repite 2 veces

			for k in range(0,9):
				if(j == sudoku[k][i]):
					aux += 1

			if(aux > 1 ):
				esSudoku = True	#si el numero se repite dos veces, entonces se cambia su valor a True 			

	return esSudoku		

				



sudoku = []

for i in range(0,9):
	sudoku.append([0] * 9)

generateSudoku(sudoku)	

esSudoku = verificador(sudoku)

#impresion de la matriz
for i in range(0,9):
	print(sudoku[i])

print("")	

#si la variable es True entonces imprime "no es sudoku"
if(esSudoku):
	print("La matriz no es sudoku")
else:
	#en caso contrario, entonces si lo es
	print("Si es sudoku")	