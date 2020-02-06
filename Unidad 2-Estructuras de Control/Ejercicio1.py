#Ejercicio 1 
#Escribe un programa que reciba un número y te diga si ese número es par o impar
#Autor: Pamela Citlali Canul Chacón (Equipo 'about:blank' )

#Dato de entrada: Un número
#Dato de salida: Si el número es par o impar

#Entrada
#Se definen las variables, una donde se guardara el valor del número a analizar y la otra servira como bandera
num = 0 
esPar = 0
#Se le solicita al usuario ingresar un número
num = int(input("Ingresa un número: "))

#Procedimiento
#Se evalua el residuo por medio de una condicional
if num % 2 == 0 :
    #Si el resultado es verdadero se cambia el valor de la bandera
    esPar = 1 
else:
    esPar = 0

#Salida
#Se imprime el resultado dependiendo del valor de la bandera
if esPar == 1: 
    print ("El número ", num, "es par")
else: 
    print ("El número ", num, "es impar") 
