#!/usr/bin/env ruby
=begin
Hecho por:Hector A. V. Cosgalla
Entradas:Un numero n
Salidas:La diagonal superior de una tabla de nxn
Procedimiento:Empiza leyendo un numero n y atraves de 2 ciclos for
imprime la primera fila y cuando termina imprime la siguiente fila
=end
class Ejercicio35
  puts 'ingresa un numero'
  n = gets.to_i
  n = n - 1
  for i in 0..n
    for m in 0..n
      if i <= m
        print i.to_s + m.to_s + '  '
      else
        print '    '
      end
    end
    puts ''
  end
end

#QA: Luis Leon 
#Entradas:Un numero n
#Salidas:La diagonal superior de una tabla de nxn