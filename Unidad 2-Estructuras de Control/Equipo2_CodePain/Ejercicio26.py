#Programa que suma los primeros n números pares


#Declaración e inicialización de variables
nNums = 0  #El número par a sumarse
totalNumeros = 0  #El total de números pares a sumar
totalSuma = 0 #Suma de los números pares introducidos
i = 1 #Contador de nuestro ciclo for

#Lectura de cuantos números pares se van a leer
#Entrada 1: cantidad de números a sumarse, entero positivo
totalNumeros = int(input())

#verificación de haber ingresado en totalNumeros un numero entero mayor a cero
#Salida si el número es negativo o cero: "Error, ingrese otro número\n"
while(totalNumeros <= 0 & totalNumeros != int):
    print("Error, ingrese otro número\n") 
    totalNumeros = int(input())


#Leer el total de los números pares especificados
#Entradas:  números enteros pares
#salida:  "Error, ingrese otro número\n" si coloca un número que no sea entero o par
for i in range(totalNumeros):
    nNums = int(input)
    while nNums != int & nNums%2 != 0: 
        print("Error, ingrese otro número\n") 
        nNums = int(input)
    totalSuma = totalSuma + nNums


#Impresion de la suma de todos los números pares ingresados
    print(totalSuma)
