#Autor:Deyberth Carrillo
#Entrada: Los numeros positivos de los cuales se desea saber la media
#Salida: La media de los numeros positivos ingresados

#Funciones
def media_Numeros(sumaNumeros,totalNumeros):
    media=sumaNumeros/totalNumeros
    return media

def imprimir_Media(media):
    print(media)
    
#EntradaYProceso

#Inicializacion de variables
numero = 1
sumaNumeros = 0
totalNumeros = 0
mediaNumeros= 0
#Introduccion de numeros y proceso de suma y total de numeros
while numero != 0:
    numero = int(input())
    if numero != 0:
        sumaNumeros+=numero
        totalNumeros+=1
#Calculo de la media de los numeros
mediaNumeros=media_Numeros(sumaNumeros,totalNumeros)

#Salida
imprimir_Media(mediaNumeros)

