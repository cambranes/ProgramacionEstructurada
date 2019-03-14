"""
Creado por: Hector A. V. Cosgalla
Entradas:
Salidas: Puntos silla en una matriz de 25 x 40
Procedimiento: Se genera la matriz de 25x40 y se llena con numeros aleatorios
del 0 al 999, despues se busca el numero menor de la fila y cuando se encuentra
se compara con las columnas y si es el mayor se considera como punto silla de lo
contrario se sigue buscando, hasta que termine de revisar toda la matriz
"""

import random

def Matriz():
    matriz = [[0 for x in range(25)]for y in range(40)]
    for i in range(40):
        for m in range(25):
            matriz[i][m] = random.randint(0, 999)
            
    print("Para la matriz:")
    for i in matriz:
        print (i)
    return matriz

def busquedaSillas(matriz):
    sillas = 0
    for i in range(40):
        bandera_fila = matriz[i][0]
        bandera_columna = matriz[i][0]
        for m in range(25):
            if bandera_fila > matriz[i][m]:
                bandera_fila = matriz[i][m]
                bandera_columna = matriz[i][m]
                for n in range(40):
                    if bandera_columna < matriz[n][m]:
                        bandera_columna = matriz[n][m]
        if bandera_fila == bandera_columna:
            sillas = sillas + 1
    return sillas

def Salidas(sillas):
    print("Hay " + str(sillas) + " punto(s) silla")

matriz = Matriz()
sillas = busquedaSillas(matriz)
Salidas(sillas)

"""
QA: Amaury Morales Cerecedo
--Nota: He probado el codigo original pero he modificado el tamaño de la matriz aparte para poder verificar los puntos silla.

(Funcion Matriz)
Entradas: Ninguna
Salidas: Una matriz de 5 x 10 con numeros aleatorios del 0 al 999.

(Funcion busquedaSillas)
Entradas: Una matriz de 5 x 10. En especifico la que saca el programa en la funcion Matriz.
Salidas: El numero de puntos silla de la matriz.

(Funcion Salidas)
Entrada: Nada
Salida: Hay 2 puntos silla (lo cual es correcto).
"""
