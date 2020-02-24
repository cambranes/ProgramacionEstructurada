#EJERCICIO 18
#Realizar una calculadora basica que lea 2 numeros y un operador y que realice la operacion correspondiente
# + suma los 2 numeros
# - resta los 2 numeros
# * multiplica los 2 numeros
# / divide los dos numeros
# % calcula el modulo de los numeros
# AUTOR: Audny Desiree Correa Ceballos
# Equipo '(about: blank)'
 
#Leer los numeros
def leerNumeros():
    num = int(input())
    return num

#leer el operador
def leerOperador():
    operador = input()
    return operador

#PROCESO: comparar al operador hasta encontarlo y realizar la operación correspondiente
def realizarOperacion (num1,caracter,num2):
    resultado = 0
    if caracter == '+' :
        resultado == num1 + num2
    elif caracter == '-' :
        resultado = num1 - num2
    elif caracter == '*' :
        resultado = num1 * num2
    elif caracter == '/' :
        resultado = num1 / num2
    elif caracter == '%' :
        resultado = num1 % num2
    return resultado

#Imprimir el resultado d la operacion
def imprimirResultado (respuesta):
    print(respuesta)

def main():
    #Entradas
    num1 = leerNumeros()
    caracter = leerOperador()
    num2 = leerNumeros()
    #Proceso
    respuesta = realizarOperacion(num1,caracter,num2)
    #Salidas
    imprimirResultado(respuesta)
