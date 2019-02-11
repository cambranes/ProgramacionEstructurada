#!/usr/bin/env ruby
=begin
Creado por: Hector Abraham Valdivieso Cosgalla
Entradas: Articulos, PrecioN, Decs
Salidas: Cliente, TotalCaja, TotalDesc, TotalN, PrecDesc1, PrecDesc2, PrecDesc3, PrecDesc4
Procedimiento: Se ingresa la cantidad de articulos y se lee el precio de cada uno,
Esto se guarda en una variable llamada TotalN, Posteriormente se lee TotalN y dependiendo
de la suma se decide el descuento que se le hace, y se le informa al cliente,
al terminar esto informa cuanto se desconto, cuanto se cobro y cuantos clientes
fueron atendidos.
Notas: El codigo fue diseñado para tener un ciclo Do ... while ... pero no funciono
por eso se elimino y quedaron algunas cosas "raras"
=end
class Ejercicio46
  Desc1 = 0.05
  Desc2 = 0.11
  Desc3 = 0.18
  Desc4 = 0.25
  descuento1 = 0.0
  descuento2 = 0.0
  descuento3 = 0.0
  descuento4 = 0.0
  precDesc1 = 0.0
  precDesc2 = 0.0
  precDesc3 = 0.0
  precDesc4 = 0.0
  totalCaja = 0.0
  totalPago = 0.0
  puts 'Ingrese la cantidad de articulos'
  Articulos = gets.to_i
  n = 0
  totalN = 0
  while n < Articulos
    n = n + 1
    puts 'Ingrese el precio del articulo ' + n.to_s
    precioN = gets.to_i
    totalN = totalN + precioN
  end
  if totalN < 500
    puts 'El total de compra es ' + totalN.to_s
    puts 'No obtuvo descuento'
    totalPago = totalN
  elsif totalN >= 500 and totalN < 1000
    precDesc1 = totalN * Desc1
    totalPago = totalN - precDesc1
    puts 'El total de compra es: ' + totalPago.to_s
    puts 'Tiene un descuento de: ' + precDesc1.to_s
    descuento1 = descuento1 + precDesc1
  elsif totalN >= 1000 and totalN <7000
    precDesc2 = totalN * Desc2
    totalPago = totalN - precDesc2
    puts 'El total de compra es: ' + totalPago.to_s
    puts 'Tiene un descuento de: ' + precDesc2.to_s
    descuento2 = descuento2 + precDesc2
  elsif totalN >= 7000 and totalN < 15000
    precDesc3 = totalN * Desc3
    totalPago = totalN - precDesc3
    puts 'El total de compra es: ' + totalPago.to_s
    puts 'Tiene un descuento de: ' + precDesc3.to_s
    descuento3 = descuento3 + precDesc3
  elsif totalN >= 15000
    precDesc4 = totalN * Desc4
    totalPago = totalN - precDesc4
    puts 'El total de compra es: ' + totalPago.to_s
    puts 'Tiene un descuento de: ' + precDesc4.to_s
    descuento4 = descuento4 + precDesc4
  end
  totalCaja = totalCaja + totalPago
  totalDesc = descuento1 + descuento2 + descuento3 + descuento4
  puts 'El total de venta fue de: ' + totalCaja.to_s
  puts 'Se desconto un total de: ' + totalDesc.to_s
end


#QA: Luis Leon 
#Entradas: Articulos, PrecioN, Decs
#Salidas: Cliente, TotalCaja, TotalDesc, TotalN, PrecDesc1, PrecDesc2, PrecDesc3, PrecDesc4
