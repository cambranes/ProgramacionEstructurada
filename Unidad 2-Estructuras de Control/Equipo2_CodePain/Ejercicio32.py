#Autores: Programa realizado por Equipo2_CodePain
#Programa que determina la cantidad de años bisiestos que hay entre dos años

 
baseYear=-1
topYear=-1
place=0
quantity=0


#Entrada: Dos números baseYear y topYear
#Proceso: Se realiza una serie de divisiones que determinan los divisibles de 3 los cuales son los años bisiestos
while baseYear<0 or topYear<0:
    baseYear=int(input())
    topYear=int(input())
    if baseYear>topYear:
        baseYear=-1
        topYear=-1

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