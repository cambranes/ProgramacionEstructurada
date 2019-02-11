#!/usr/bin/env ruby

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
