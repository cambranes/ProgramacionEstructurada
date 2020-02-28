#Ejercicio 10
#Autor: Jorge Limon
#Entrada: N números
#Salida: Los primeros N múltiplos de 7


#Se definen las funciones
def entradaN():
    entrada=int(input())
    return entrada

def multiploSiete(N):
    return N*7

#Variables y entradas

N=entradaN()

#Proceso
if N>=0:
    for x in range(1, N+1):
        print(multiploSiete(x))