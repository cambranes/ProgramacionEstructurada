#----------------------------------Datos del problema-------------------------------------
#Ejercicio #36
# Escribe un programa que dado un número N, imprima  las  posiciones  de  las  celdas  de  la  
# diagonal  superior hacia abajo.
# Miguel R. Ávila (Equipo 'about:blank')

#----------------------------------------Funciones------------------------------------------
# Entrada
def entrada():
    initialNumber = int(input())
    return initialNumber
# Proceso
def proceso(initialNumber):
    
    for i in range(0,initialNumber):
        for j in range(0, initialNumber):
            if j <= i:
                print(i, end="")
                print(j, "", end="")
        print("")
        print("")

#----------------------------------------Proceso-------------------------------------------
#Primero pedimos nuestra N inicial
initialNumber= entrada()
#Ya que en si, la salida es el proceso de nuestro código, solo hacemos el proceso
proceso(initialNumber)
