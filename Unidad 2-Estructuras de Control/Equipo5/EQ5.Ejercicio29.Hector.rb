#!/usr/bin/env ruby
=begin
Hecho por: Hector A. V. Cosgalla
Entradas: Un numero n
Salidas: Todos los factores de n
Procedimiento: Se Comprueba si el numero es mayor que el divisor despues se comprueba si
n es divisible entre el divisor, de ser asi  imprime el divisor y comprueba el siguiente
numero hasta encontrar todos sus factores.
=end
class Ejercicio29
  divisor = 2
  puts 'Dame un Numero: '
  numero = gets.to_i
  while numero >= divisor
    while numero % divisor == 0
      print divisor.to_s + ' x '
      numero = numero / divisor
    end
    divisor = divisor + 1
  end
  print numero.to_s
end
