#Ejercicio 17
#Escribir un programa que dados dos ángulos positivos (valores enteros),
#determine lo siguiente:
#a. Si los ángulos son iguales
#b. Si los ángulos son menores a 90, imprimir “ángulos agudos”
#c. Si los ángulos son iguales a 90, imprimir “ángulos rectos”
#d. Si los ángulos son mayores a 90, imprimir “ángulos obtusos”
#e. Si los ángulos son iguales a 180, imprimir “ángulos llanos”
#f. Si los ángulos son mayores a 180, imprimir “ángulos cóncavos”

#Autor: Gildardo Maldonado (Equipo 5)
#Entradas: Ángulos en valores enteros
#Salidas: Impresión del tipo de ángulo

#Se solicitan ambos angulos
aAng1 = int(input('Dáme un ángulo: '))
aAng2 = int(input('Dáme un segundo ángulo: '))
#Se realizan las comparaciones y se imprime seg�n su clasificaci�n
if aAng1 == aAng2 and aAng1 !=180 and aAng2 != 180 and aAng1 != 90 and aAng2 != 90:
    print('ángulos iguales')
elif aAng1 < 90 and aAng2 < 90:
    print('ángulos agudos')
elif aAng1 == 90 and aAng2 == 90:
    print('ángulos rectos')
elif aAng1 > 90 and aAng2 > 90 and aAng1 < 180 and aAng2 < 180:
    print('ángulos obtusos')
elif aAng1 == 180 and aAng2 == 180:
    print('ángulos llanos')
else:
    aAng1 > 180 and aAng2 > 180
    print('ángulos cóncavos')
    