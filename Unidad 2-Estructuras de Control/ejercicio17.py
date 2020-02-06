# -*- coding: utf-8 -*-
"""
Created on Wed Feb  5 20:52:27 2020

@author: gilox
"""
#Entradas: Dos ángulos
#Salidas: Clasificación de los ángulos según sus valores
ang1 = int(input('Dáme un ángulo: '))
ang2 = int(input('Dáme un segundo ángulo: '))
if ang1 == ang2 and ang1 and ang2 != 180 and ang1 and ang2 != 90:
    print('ángulos iguales')
elif ang1 != ang2:
    print('ángulos diferentes')
elif ang1 and ang2 < 90:
    print('ángulos agudos')
elif ang1 and ang2 == 90:
    print('ángulos rectos')
elif ang1 and ang2 > 90 and ang1 and ang2 < 180:
    print('ángulos obtusos')
elif ang1 and ang2 == 180:
    print('ángulos llanos')
else:
    ang1 and ang2 > 180
    print('ángulos cóncavos')
    