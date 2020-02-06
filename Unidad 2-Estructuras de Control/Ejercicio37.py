# Ejercicio #37
# Determinar la suma de los primeros n números primos
# Autor: Miguel R. Ávila (Equipo 'about:blank')

# Dato de entrada: un número que represente cuantos primos sumar
# Dato de salida: un número que represente la suma de los n primeros numeros

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

#Primero solicitamos el número de primos a imprimir
nPrimes = input()
#Definimos un contador en 0
count = 0
#Definimos un iterador en 0
i = 0
#Y ahora definimos un acumulador de primos
addPrimes = 0

# La salida en este caso es la suma de los primos 
# para lo que desarrollamos un ciclo, en este caso un 'While'
# para que mientras el numero de primos hallados sea menor que el numero solicitado
# el ciclo siga corriendo
while count <= int(nPrimes):
    #Declaramos una condicional para que en el momento en el que en nuestra función
    #encontremos un primo, realice los siguientes pasos
    if isPrime(i) is True:
        #Añada uno al contador y se cotinue o se interrumpa el while
        count = count + 1
        #Sumamos al acumulador el número que estamos analizando
        addPrimes = addPrimes + int(i)
    #Sumamos uno al iterador para que analice el siguente número
    i = i + 1

#Por último imprimimos la suma de todos los números.
print(addPrimes)
