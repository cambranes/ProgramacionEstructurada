"""
Creado por: Hector A. V. Cosgalla
Entradas: un numero natural impar menor o igual que 11
Salidas: Comprobacion de si es un cuadrado magico o no
Procedimiento1: Despues de leer el numero n se genera una matriz de nxn
y se hace un conteo desde 1 hasta n^2 y se va asignando uno de esos numeros
a una posicion al azar
Procedimiento2: Se generan 2 vectores para guardar la suma de cada una de las
columnas y las filas al final en el bloque de salida se comprueba que sean
iguales
"""
import random

def Entradas():
    breik = 1
    while breik < 2:
        print("Ingresa uno de los siguientes numeros:")
        print("1, 3, 5, 7, 9, 11")
        n = int(input())
        if n == 1 or n==3 or n==5 or n==7 or n==9 or n==11:
            breik = breik + 1
        else:
            print("Escribe un numero valido")
    return n

def Procedimiento1():
    cuadrado = [[0 for x in range(n)]for y in range(n)]
    nporn=n*n
    for i in range(1, nporn):
        nmenos=n-1
        x = random.randint(0,nmenos)
        y = random.randint(0,nmenos)
        cuadrado[x][y] = i
    return cuadrado

def Procedimiento2():
    acumulador1 = [0,0,0,0,0,0,0,0,0,0,0]
    acumulador2 = [0,0,0,0,0,0,0,0,0,0,0]
    for i in range(n):
        for m in range(n):
            acumulador1[i] = acumulador1[i] + cuadrado[i][m]
            acumulador2[i] = acumulador2[i] + cuadrado[m][i]
    return acumulador1, acumulador2


def Salidas():
    numsigual1 = 0
    numsigual2 = 0
    for i in range(n):
        if acumulador1[1] == acumulador1[i]:
            numsigual1 = 1
        else:
            print("no es un cuadrado magico")
            break
        if acumulador2[1] == acumulador2[i]:
            numsigual2 = 1
        else:
            print("no es un cuadrado magico")
            break
    if numsigual1 == 1 and numsigual2 == 1:
        print ("es un cuadrado magico")

n = Entradas()
cuadrado = Procedimiento1()
acumulador1, acumulador2 = Procedimiento2()
Salidas()

"""
Autor QA:Alejandro Torre Reyes
Entradas: 3,1
Salidas: No es un cuadrado mágico, es un cuadrado magico.
Proceso: Es correcto solo que la unica forma de comprobarlo es leyendo el código ya que el 
programa no imprime el "cuadrado mágico". 
"""
