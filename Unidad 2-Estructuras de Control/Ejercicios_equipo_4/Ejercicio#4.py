
#Autor:Jorge Chí 03/Febrero/19
#Entradas: numero (a redondear).
#Salidas: numero (redondeado).
#Procedimiento general: Se ingresa un numero. Si es negativo se pide de nuevo.
#Se redondea el numero a la centena más cercana

#se inicia la variable que guarda el número

numero = int( 0 )

while 1 :

	print( "Ingresa un numero que quieras redondear a la centena mas cercana:" )
	numero = int( input( ) )

	if ( numero < 0 ) :

		print( "ERROR, numero menor que 0" )

	else :

		break

#Proceso : si el número es 100 o menor que 100 se imprime el redondeo 100. sino,
#se hace el proceso de redondeo a la siguiente centena cercana

if (numero <= 100 ) :

	print( "El redondeo es: 100." )

else :

	numero = int( int(( int(( numero + 99 )) / 100) ) * 100 )

	print( "El redondeo es:",numero )

#	QA Reviso: Raul Rivadeneyra
#	Entradas: 1, 50, 23501, 540
#	Salidas: Ok, Ok, Error, Error
#	Se redondea hacia arriba (ceil), no a la centena mas cercana, 23501 claramente está mas cerca a 23500 que 23600
