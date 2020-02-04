#Ejercicio 19 
#Escribir un programa que lea tres números y determine el mayor de los tres.
#Autor: Pamela Citlali Canul Chacón (Equipo 'about:blank' )

#Dato de entrada: Tres números
#Dato de salida: El número mayor entre los tres.

#Entrada
#Definimos una variable donde se guardará al número mayor
numMayor = 0 

#Se definen las variables a utilizar
num1 = 0
num2 = 0 
num3 = 0 

#Se solicita que el usuario ingrese los números 
num1 = float(input("Ingresa un numero: "))
num2 = float(input("Ingresa un segundo numero: "))
num3 = float(input("Ingresa un tercer numero: "))

#Procedimiento 
#Primero se analiza si el número 1 es el mayor, comporándolo con los otros números
if num1 > num2 and num1 > num3:
    #Si resulta el mayor de los tres se guarda en la variable antes definida
    numMayor = num1 
#Si el primer número no es el mayor se analiza el segundo número
elif num2 > num1 and num2 > num3:
    #Si resulta el mayor de los tres se guarda en la variable antes definida
    numMayor = num2
#Si nunguno de los dos primeros números resulta el mayos, entonces, se infiere que el tercer número es el mayor
else: 
    #Se guarda el valor en la variable antes definida
    numMayor = num3

#Salida
#Por último se imprime el resultado 
print ("El número mayor es:" , numMayor)