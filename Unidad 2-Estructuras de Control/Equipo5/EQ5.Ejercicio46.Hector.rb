#!/usr/bin/env ruby

class Ejercicio46
  Desc1 = 0.05
  Desc2 = 0.11
  Desc3 = 0.18
  Desc4 = 0.25
  Descuento1 = 0.0
  Descuento2 = 0.0
  Descuento3 = 0.0
  Descuento4 = 0.0
  PrecDesc1 = 0.0
  PrecDesc2 = 0.0
  PrecDesc3 = 0.0
  PrecDesc4 = 0.0
  TotalCaja = 0.0
  TotalPago = 0.0
  puts 'Ingrese la cantidad de articulos'
  Articulos = gets.to_i
  n = 0
  TotalN = 0
  while n < Articulos
    n = n + 1
    puts 'Ingrese el precio del articulo ' + n.to_s
    PrecioN = gets.to_i
    TotalN = TotalN + PrecioN
  end
  if TotalN < 500
    puts 'El total de compra es ' + TotalN.to_s
    puts 'No obtuvo descuento'
    Totalpago = TotalN
  elsif TotalN >= 500 and TotalN < 1000
    PrecDesc1 = TotalN * Desc1
    TotalPago = TotalN - PrecDesc1
    puts 'El total de compra es: ' + TotalPago.to_s
    puts 'Tiene un descuento de: ' + PrecDesc1.to_s
    Descuento1 = Descuento1 + PrecDesc1
  elsif TotalN >= 1000 and TotalN <7000
    PrecDesc2 = TotalN * Desc2
    TotalPago = TotalN - PrecDesc2
    puts 'El total de compra es: ' + TotalPago.to_s
    puts 'Tiene un descuento de: ' + PrecDesc2.to_s
    Descuento2 = Descuento2 + PrecDesc2
  elsif TotalN >= 7000 and TotalN < 15000
    PrecDesc1 = TotalN * Desc3
    TotalPago = TotalN - PrecDesc3
    puts 'El total de compra es: ' + TotalPago.to_s
    puts 'Tiene un descuento de: ' + PrecDesc3.to_s
    Descuento3 = Descuento3 + PrecDesc3
  elsif TotalN >= 15000
    PrecDesc4 = TotalN * Desc4
    TotalPago = TotalN - PrecDesc4
    puts 'El total de compra es: ' + TotalPago.to_s
    puts 'Tiene un descuento de: ' + PrecDesc4.to_s
    Descuento4 = Descuento4 + PrecDesc4
  end
  TotalCaja = TotalCaja + TotalPago
  TotalDesc = Descuento1 + Descuento2 + Descuento3 + Descuento4
  puts 'El total de venta fue de: ' + TotalCaja.to_s
  puts 'Se desconto un total de: ' + TotalDesc.to_s
end
