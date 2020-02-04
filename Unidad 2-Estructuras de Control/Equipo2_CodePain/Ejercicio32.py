#Autores: Programa realizado por Equipo2_CodePain
#Version 1.0
#Programa que determina la cantidad de años bisiestos que hay entre dos años

#Entrada: Lectura de baseYear y topYear
baseYear=-1
topYear=-1
place=0
quantity=0

while baseYear<0 or topYear<0: #Comprueba que esten ordenados y positivos
    baseYear=int(input())
    topYear=int(input())
    if baseYear>topYear:
        baseYear=-1
        topYear=-1

#Proceso: Detecta cuantos años le falta para ser viciesto y encuentra la cantidad presente en el rango
place=baseYear%4

if place==0:
    quantity=int((topYear-baseYear)/4+1)
else:
    if place==1:
        quantity=int((topYear+1-baseYear)/4)
    else:
        if place==2:
            quantity=int((topYear+2-baseYear)/4)
        else:
            quantity=int((topYear+3-baseYear)/4)


#Salida: La cantidad de años bisiestos en el rango de años
print(quantity)