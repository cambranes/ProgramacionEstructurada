
#Autor:Jorge Chí 03/Febrero/19
#Entradas: numero (colección de números).
#Salidas: media (de la suma de numero)
#Procedimiento general: Se ingresan numeros que se suman en la variable numero y luego se
#calcula la media de estos. Si se teclea un 0 se deja de tomar entradas. si se teclea un negativo se informa de esto.

#se inicia la variable que lee los numeros, la suma de estos y un contador

numero = float( 0 )
suma = float( 0 )
contador = int( 0 )

#//Entradas: se solicitan los numeros del conjunto, se cuentan los numeros en total y se suman

while 1 :

	print( "Ingresa un numero del conjunto al cual quieres sacar media(teclea 0 para terminar):" )
	numero = float( input( ) )

	if ( numero == 0 ) :

		break

	elif ( numero < 0 ) :

		print( "ERROR, numero menor que 0" )

	else :

		suma = float( suma + numero )

		contador = int( contador + 1 )

#Proceso : si ningun dato fue ingresado se infor de ello, en otro caso
#se calcula la media y se imprime

if ( suma == 0 ) :

	print( "Ningun dato fue insertado." )

else :

	media = float( suma / contador )

	print( "La media es:",media )