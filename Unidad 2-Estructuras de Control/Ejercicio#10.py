
#Autor:Jorge Chí 03/Febrero/19
#Entradas: numero ("N").
#Salidas: multiplo (de 7), numeroMultiplo (posición de multiplos de 7)
#Procedimiento general: Se ingresa un número N (numero) y se imprimen los primeros N multiplos de 7 (numeroMultiplo y multiplo).
#Si se ingresa 0 o menor que 0, se imprime ERROR y se pide de nuevo el número.

#se inicia la variable a leer y un contador

numero = int( 0 );
contador = int( 0 );

#Entradas: se solicita el número hasta que el usuario de uno mayor que 0

while 1 :

    print( "Ingresa un numero mayor que 0:" )
    numero = int( input( ) )

    if ( numero > 0 ) :

        break

    else :

        print( "ERROR, numero menor o igual a 0." )

#Proceso : se realiza un ciclo while donde se imprimen los múltiplos usando una variable que cuenta en que múltiplo va
#(numeromultiplo) y otra que es el múltiplo en si (múltiplo)

while ( contador < numero ) :

    #Salidas: variables antes mencionadas

    numeroMultiplo = int( contador + 1 )
    multiplo = int( 7 * numeroMultiplo )

    #impresión de los múltiplos

    print( "El múltiplo #",numeroMultiplo,"es",multiplo )

    contador = int( contador + 1 )