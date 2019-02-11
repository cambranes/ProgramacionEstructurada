=begin
Autor: AMAURY MORALES CERECEDO

Entrada: Cualquier numero entero, ya sea positivo o negativo.

Salida: El numero mas grande y el mas chico de todos los numeros dados por el usuario

Procedimiento general: Se van cambiando los tronos correspondientes dependiendo de los numeros que el usuario introduzca.
Al principio se configuran los 2 tronos como el primer numero dado para evitar problemas.

Notas: No se admiten numeros que no sean enteros. Al principio se inicializan los dos tronos con el primer numero porque al introducir
todos los numeros como negativos, el trono seguira siendo 0 aunque nunca se haya puesto en la lista de numeros a comparar.
No estoy seguro de cuantos numeros pueda comparar, pero estableci como maximo 99999999 en caso de que por memoria no se puedan realizar mas.

=end


#PREMISA#
#Escriba  el programa que  lea  N  números  y  calcule  cual  es  el  mayor  y  el  menor de esos números.
#Utilice una estructura de repetición Para...hasta.

def main()
 #//DECLARACIONES//
 numero = 0 #Numero a introducir por el usuario.
 contador = 0 #Contador para nuestro ciclo.
 tope = 0 #Total de numeros a introducir.

 tronoMin = 0 #Trono del numero mas pequeño.
 tronoMax = 0 #Trono del numero mas grande.

 lista = [] #Lista de todos los numeros introducidos por el usuario

 #//ENTRADAS//
 print "Por favor, introduzca el total de numeros a comparar: "
 tope = gets.chomp.to_i
 #////////////

 for contador in 0..tope-1
  #//ENTRADAS//
  print "Por favor, introduzca un numero: "
  numero = gets.chomp.to_i
  #////////////


  #///PROCEDIMIENTO///
  lista[contador] = numero

  if contador == 0
   tronoMin = numero
   tronoMax = numero
  end
  if numero < tronoMin
   tronoMin = numero
  end
  if numero > tronoMax
   tronoMax = numero
  end
  #////////////////////
 end

 #//SALIDA//
 puts "Numero mayor: #{tronoMax}"
 puts "Numero menor: #{tronoMin}"
 #//////////

 gets

 return 0 #Creo que esto se refiere al ''valor 0''.
end

main()
