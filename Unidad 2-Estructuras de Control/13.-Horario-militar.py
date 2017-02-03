#Autor: Equipo #5
#29/enero/2017
#Entradas: se pide que se introduzca la hora a verificar y convertir.
#salida: La hora en formato 12 horas (am y pm)
#procedimiento:
verificador = True
print("Favor de escribir la ")
while verificador == True:
 #entrada de las horas en formato militar.
 hora = int(input("hora en horario militar\n"))
 horas = (hora//100)
 minutos = (hora%100)
 #verificamos que horas y minutos sean validos.
 if(horas>=0 and horas<24):
     if(minutos>=0 and minutos<60):
         if(horas>12):
         #PM
             horas = horas%12
             #salida
             print(horas,":",minutos,"pm\n")
             verificador=False
         else:
         #AM
             #salida
             print(horas,":",minutos,"am\n")
             verificador=False
     else:
         #salida
         print("Minutos no validos favor de volver a escribir la ")
         verificador=True
 else:
     #salida
     print("Horas no validas favor de volver a escribir la ")
     verificador=True
  
 
