--[[
Autor: Chan Gongora Carlos 04/2/2019
Entradas:(n € Z | 1 <= n <= 7)
Salidas: El dia de la semana correspondiente al numero ingresado
Procedimiento general: Compara el valor ingresado entre 1 y 7 e imprime su respectivo dia
]]--

-- Inputs
n = 0
repeat
	io.write("\nEnter a value between 1 and 7: ")
	n = io.read("*n")
until n >= 1 and n <= 7

-- Process
if n == 1 then
	io.write("\nThe day is Monday")
elseif n == 2 then
	io.write("\nThe day is Tuesday")
elseif n == 3 then
	io.write("\nThe day is Wednesday")
elseif n == 4 then
	io.write("\nThe day is Thursday")
elseif n == 5 then
	io.write("\nThe day is Friday")
elseif n == 6 then
	io.write("\nThe day is Saturday")
elseif n == 7 then
	io.write("\nThe day is Sunday")
else 
	io.write("\nError")
end

-- Outputs
-- QA: Jorge Chí
-- Entradas usadas: 1, 2, 3, 4, 5, 6, 7, hola, 14, 23
-- Salidas: Al insertar 1 - 7 se imprime correctamente el día respectivo, 14 y 23 no fueron aceptados y se reinserto otro número hasta que
-- de diera uno en el rango de 1 - 7, la cadena causó que el programa no corriera. El programa funciona correctamente.
