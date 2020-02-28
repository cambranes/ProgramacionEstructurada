#Ejercicio 51
#Autor: Jorge Limon
#Entradas: Identificación, sueldo y edad
#Salida: De los 10 participantes, aquellos quienes tienen más de 35 años y cuyo sueldo está entre 7500 y 5000


#Definir las funciones
def organizarSalarios(x, y):
    if 7500>x>=5000 and y>35:
        contadorHombres=1
    else:
        contadorHombres=0
    return contadorHombres

#Variables
Id = 0
sueldo = 0
edad = 0
hombresImportantes = 0
n = 0
#proceso
while n<10:
    Id=int(input("ID"))
    sueldo=int(input("Sueldo"))
    edad=int(input("Edad"))
    if organizarSalarios(sueldo, edad) == 1:
        hombresImportantes = hombresImportantes+1
    n = n + 1
#Se imprime el total
print(hombresImportantes)