"""
Creado por: Hector A. V. Cosgalla
Entradas: un numero n positivo natural
Salidas: el triangulo de pascal invertido
Procedimiento: Se inicia la matriz con las primeras 2 posiciciones del triangulo
de pascal, posteriormente se inicia un ciclo con un vector, con ayuda de un
ciclo for, se suman los numeros de en medio y se guardan en el vector, despues
al vector se le agrega el 1 del final de la linea y a la matriz se le aumenta el
vector, este proceso se repite n-1 veces, esto es por que la primera posicion ya
la tenemos, cuando se termina de formar el triangulo se le da la vuelta y se
manda a imprimir
"""

def entradas():
    breik = 1
    while breik < 2:
        print("ingresa un numero")
        n=int(input())
        if n > 0:
            breik = breik + 1
        else:
            print("Ingresa un numero valido")
    return n

def procedimiento(n):
    triangulo = [[1],[1, 1]]
    for i in range(1, n-1):
        numsEnMedio = [1]
        for m in range(0,len(triangulo[i])-1):
            numsEnMedio.extend([triangulo[i][m] + triangulo[i][m+1]])
        numsEnMedio = numsEnMedio + [1]
        triangulo.append(numsEnMedio)
    resultado = triangulo
    resultado.reverse()
    return resultado

def salidas(resultado):
    for i in resultado:
        print(i)

n = entradas()
resultado = procedimientos(n)
salidas(resultado)

