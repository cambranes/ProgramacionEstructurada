#Entradas:La cantidad a retirar.
#Salidas: El monto que se retira, junto con el saldo; la operación no se puede realizar.
#Procedimiento general: Creé 3 variables. 1 como un saldo que se tiene de la máquina, siendo el máximo; el segundo fue para evaluar el 
#dinero restante en la máquina. El tercero es para que el usuario elija la cantidad que quiere sacar.
#Puse que si no se cumplen los requisitos de poner un número (en retirar) de que no sean mayores a 3000 o menores de 0, la operación no se
#realiza.

x = 3000
gets retirar

if (retirar <= x) and (retirar > 0) then
  saldo = x - retirar
  print("El monto que se le ha dado ha sido de: " + retirar.to_s + "\n")
  print("el saldo de su cuenta es de: " + saldo.to_s + "\n")
else
  print("la operacion no puede realizarse\n");
end
