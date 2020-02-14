#Autores: Programa realizado por el Equipo2_CodePain
#Version 1.2
#Este programa recibe dos números e indica si el primero es multiplo del segundo


#Entrada: Dos numeros aMult y bNum 
aMult=int(input())
bNum=int(input())


#Proceso: Operacion para determinar si son multiplos (modulo)
#Salida: Impresion de si son o no multiplos

if aMult==0 and bNum==0:
    print("Si es multiplo")
elif aMult!=0 and bNum==0:
    print("No es multiplo")
elif aMult%bNum==0:
    print("Si es multiplo")
else:
    print("No es multiplo")