#Ejercicio #43
# Programa que lea N valores y que cuente cuantos de ellos son positivos y cuantos
# son negativos (0 es condici'on de fin de lectura)
# Audny D. Correa Ceballos (Equipo 'about:blank')

#ENTRADAS:
#Cuantos valores va a ingresar 
lengLista = int(input())
listaNumeros = []
#Asignar los numeros que se van a comparar
for i in range(1, lengLista + 1):
    numero = int(input())
    listaNumeros.append(numero)
#Lista de numeros
valores = listaNumeros

#PROCESO: evaluar si los numeros asignados son positivos (>0), negativos(<0) o 0
def main (valores):
    #Inicializar los contadores
    contadorPositivo = 0
    contadorNegativo = 0
    for i in valores:
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
    return (contadorPositivo, contadorNegativo)

#SALIDAS: los contadores de los numeros positivos y negativos
positivo, negativo = main(valores)
print ("Positivos: ", positivo)
print ("Negativos: ", negativo)