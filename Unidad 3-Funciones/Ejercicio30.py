#Ejercicio 30
#Calcular el MCD de dos numeros enteros
#AUTOR : Audny Desiree Correa Ceballos
#Equipo: '(about: blank)'

#Leer primer Numero
def leerPrimerNumero():
    num = int(input())
    return num

#Leer el segundo Numero
def leerSegundoNumero():
    num = int(input())
    return num

# Establecer el numero mayor para poder realizar la división y no obtener decimales
def definirNumeroMayor(num1,num2):
    if num1 > num2:
        return num1
    else:
        return num2

#Establecer el numero menor
def definirNumeroMenor(num1,num2):
    if num1 < num2:
        return num1
    else:
        return num2

#dividir el numero mayor entre el menor y obtener el módulo, 
#este se convertirá en el nuevo numero menor y se calculará de nuevo hasta que
#el modulo de 0 el numero menor que logre dar modulo 0 es el MCD
def calcularMCD(nMayor, nMenor):
    aux = nMayor % nMenor
    while aux > 0:
        nMayor = nMenor
        nMenor = aux
        aux = nMayor % nMenor
    return nMenor
    
#Imprimir el resultado
def imprimirSalida(resultado):
    print(resultado)

#ENTRADAS
num1 = leerPrimerNumero()
num2 = leerSegundoNumero()
#PROCESO
nMayor = definirNumeroMayor(num1, num2)
nMenor = definirNumeroMenor(num1, num2)
resultado = calcularMCD(nMayor, nMenor)
#SALIDA
imprimirSalida(resultado)