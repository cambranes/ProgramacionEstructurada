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
    acum = int(0)
    for i in range (1, initialNumber+1):
        acum += ((i) / (2**i))

    return acum

#Salida
def salida(processNumber):
    print(processNumber)

#----------------------------------------Proceso-------------------------------------------
#Primero pedimos el número iniciañ
initialNumber= entrada()
#Guardamos lo obtenido en nuestro proceso
processNumber = proceso(initialNumber)
#Imprimimos <3 
salida(processNumber)