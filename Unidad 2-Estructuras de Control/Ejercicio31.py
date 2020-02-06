# Ejercicio #31
# Dado un número determinar si es primo
# Autor: Miguel R. Ávila (Equipo 'about:blank')

# Dato de entrada: un número 
# Dato de salida: un valor booleano que represente si el número es primo

#Definimos una función para hallar si el número es primo
def isPrime(initialNumber):
    #Primero consideramos si el número es menor que uno
    if initialNumber < 1:
        return False
    #Ahora consideramos si el número es 2
    elif initialNumber == 2:
        return True
    else:
    #Por último hacemos un ciclo para que analice si el número (mayor a 2)
    #es primo
        for i in range (2, initialNumber):
            #Establecemos esta condicional para
            #que en el momento en el que el residuo del número
            #sea igual a cero, el valor de la función retorne false
            #y poder imprimir que nuestro número no es primo

            if initialNumber % i == 0:
                return False
        #En caso de que nuestro número no tenga division exacta
        #(o residuo 0), entonces nuestra función retorna el valor
        #booleano true
        return True

# Entrada: Solicitamos un número
initialNumber = int(input())
out = isPrime(initialNumber)

#Salida: Imprimimos si se trata de un primo o no
if out is True:
    print("1")
else:
    print("0")


