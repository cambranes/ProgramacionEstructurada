#!/usr/bin/env ruby

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
