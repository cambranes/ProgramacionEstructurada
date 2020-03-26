#Autor:Deyberth Carrillo
#Entrada:Lee el año a evaluar
#Salida:El resultado de la avaluacion del año ingresado

#Se solicita el año a evaluar
<<<<<<< HEAD
print("Ingrese el año que desea evaluar")
=======
>>>>>>> b59401ad4195ebbde55d550f0d4ba0b9ab9a1219
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
<<<<<<< HEAD
if bisiesto==1:
    print("El año ingresado es bisiesto")
else:
    print("El año ingresado no es bisiesto")      
=======
print(bisiesto)
>>>>>>> b59401ad4195ebbde55d550f0d4ba0b9ab9a1219
