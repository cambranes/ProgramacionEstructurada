#Ejercicio 40
#Dado el sueldo de N trabajadores, considérese un aumento del 15% a cada
#uno de ellos, si el sueldo es inferior a $800. Imprima el sueldo con el
#aumento incorporado si es que corresponde. 
#Autor: Gildardo Maldonado (Equipo 5)
#Entrada: numero de trabajadores en enteros y cuanto gana cada uno en flotante
#Salida: El sueldo de cada uno en flotante

#Entrada
def entrada_Trabajadores(entrada):
    entrada = int(input('¿Cuantos trabajadores hay en la empresa?: '))
    return entrada
    
    
#Proceso    
def sueldo_Trabajador(sueldo):
    if (sueldo < 800):
        sueldo = sueldo + sueldo*0.15
    return sueldo

#Salida
def imprimir_Sueldo(num):
    print('Se le tendra que pagar ', num)
    
#Declaración de variables
trab = 0
i = 0
suel = 0
#Leer cantidad de trabajadores
trab = entrada_Trabajadores(trab)

#Proceso para determinar el pago correspondiente
while i < trab:
    i = i + 1
    print('¿Cuanto gana el trabajador', i, '?')
    suel = float(input())
    suel = sueldo_Trabajador(suel)
    imprimir_Sueldo(suel)