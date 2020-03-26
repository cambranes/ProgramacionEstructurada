#Autor:Deyberth Carrillo
#Entrada: Un numero n
#Salida: La suma de 1! hasta n!

#Funciones
def entrada_N():
    entrada=int(input())
    return entrada
def factorial(num):
    factorialNum=1
    for i in range(1,num+1):
        factorialNum=factorialNum*i
    return factorialNum
def imprimirSuma(sumaFactoriales):
    print(sumaFactoriales)
    
#Main

#Inicialización de variables
n=0
sumaFactorial = 0
#Entrada
n=entrada_N()

#Proceso
#Se calcula la suma de 1! hasta n!
for i in range(1,n+1):
    sumaFactorial += factorial(i)
#Salida
imprimirSuma(sumaFactorial)
