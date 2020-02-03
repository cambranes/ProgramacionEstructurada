#Autores: Programa realizado por el Equipo2_CodePain
#Este programa recibe dos números e indica si el primero es 
#múltiplo del segundo


#Entrada: Dos números aMult y bNum 
aMult=int(input())
bNum=int(input())


#Proceso: Operación para determinar si son múltiplos (módulo)
#Salida: Impresión de si son o no múltiplos
if aMult%bNum==0:
    print("Si es Multiplo")
else:
    print("No es multiplo")