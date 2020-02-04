#Autores: Programa realizado por el Equipo2_CodePain
#Version 1.0
#Programa que imprime numeros de tres digitos cuyos digitos al ser elevados a la tercera potencia
#y sumados dan lo mismo a su numero original

#Entrada: Variables de almacenamiento para checar el numero
num = 100 
numTemp = 0 #Almacen del numero temporal
aDig = 0 #Digito 1
bDig = 0 #Digito 2
cDig = 0 #Digito 3
total = 0 

#Proceso: Obtencion de digitos, elevarlos al cubo y sumarlos, despues evaluar si es igual al original
#Salida: Numeros cuyos digitos al cubo y sumados, dan igual al numero original
while num < 1000:
    numTemp = num

    cDig = numTemp%10
    numTemp = (numTemp-numTemp%10)/10

    bDig = numTemp%10
    numTemp = (numTemp-numTemp%10)/10
    
    aDig = numTemp

    total = aDig**3 + bDig**3 + cDig**3

    if total == num:
        print(str(num))
    num=num+1
