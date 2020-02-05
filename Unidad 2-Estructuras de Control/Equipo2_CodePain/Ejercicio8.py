#Autores: Programa realizado por el Equipo2_CodePain
#Version 1.2
#Este programa recibe dos números e indica si el primero es multiplo del segundo


#Entrada: Dos numeros aMult y bNum 
aMult=int(input())
bNum=int(input())


#Proceso: Operacion para determinar si son multiplos (modulo)
#Salida: Impresion de si son o no multiplos

while bNum==0:
    print("0 No tiene multiplos, Ingrese de nuevo")
    aMult=int(input())
    bNum=int(input())
if aMult%bNum==0:
    print("Si es Multiplo")
else:
    print("No es multiplo")