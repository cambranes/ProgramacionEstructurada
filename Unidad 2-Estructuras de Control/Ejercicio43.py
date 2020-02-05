#Ejercicio #43
# Programa que lea N valores y que cuente cuantos de ellos son positivos y cuantos
# son negativos (0 es condici'on de fin de lectura)
# Audny D. Correa Ceballos

#ENTRADAS
#Es el n'umero de valores que el usuario ingresa
rangoDeValores = int(input())

#Inicializar en 0 nuestros contadores
contadorNegativo = 0
contadorPositivo = 0

#PROCESO
for i in range(0, rangoDeValores+1):
    #El usuario ingresa los valores
    numero = int(input())
    #Si el numero ingresado el diferente es 0
    if (numero != 0):
        #Si es positivo
        if (numero > 0):
            contadorPositivo += 1
        #Si es negativo
        else:
            contadorNegativo += 1
    #Si el numero es 0
    else:
        #Se detiene el for
        break 

#SALIDAS
#Todos los numeros positivos que se contaron (contadorPositivo)
print("Positivo: ", contadorPositivo)
#Todos los numeros negativos que se contaron (contadorNegativo)
print("Negativo:", contadorNegativo)
    


