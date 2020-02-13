#Autor:Deyberth Carrillo
#Entrada:Lee el año a evaluar
#Salida:El resultado de la avaluacion del año ingresado

#Se solicita el año a evaluar
year=int(input())

#Evalua si el año es bisiesto
bisiesto=0
condicion=year%4
if condicion==0:
    bisiesto=1
    condicion=year%100
    if condicion==0:
        bisiesto=0
        condicion=year%400
        if condicion==0:
            bisiesto=1

#Imprime un texto dependiendo si el año es bisiesto o no
print(bisiesto)