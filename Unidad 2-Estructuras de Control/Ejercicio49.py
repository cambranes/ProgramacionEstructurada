#Autores: Programa realizado por el Equipo2_CodePain
#Version 1.1
#Programa que imprime la tabla de multiplicar del 2 al 9

#Entrada: Declaracion de variables
prod=0 
x = 0 
y = 0

#Proceso: Inicio de ciclos "for" para imprimir las tablas de multiplicar solicitadas
#Salida: Las tablas de multiplicar del 2 al 9
for x in range(2,10):
    for y in range(1,11):
        prod = x * y
        print(str(prod)) 
