# -*- coding: utf-8 -*-
"""
Created on Wed Feb  5 21:04:46 2020

@author: gilox
"""
#Entrada: las entradas serán n y x
#Salidas: El valor de e^x
print('Calcularemos el valor de e^x = 1 + x + x^2/2!...x^n/n!')
x = int(input('dame el valor de x'))
n = int(input('dame el valor de n'))
e = 1
i = 0
f = 1
while i < n:
    i = i + 1
    f = f * i
    y = (x**i)/f
    e = e + y

print('el valor de e^x es', e)
  
