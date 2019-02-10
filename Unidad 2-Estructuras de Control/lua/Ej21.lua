--[[
Autor: Chan Gongora Carlos 04/2/2019
Entradas: Un numero entero positivo
Salidas: El factorial del numero ingresado
Procedimiento general: Multiplica el valor de i por el valor de la variable factorial, i se incrementa de 1 en 1 hasta
                       llegar al numero que ingreso el usuario
]]--

-- Inputs
factorial = 1

repeat
	io.write("Enter a positive integer number: ")
	value = io.read("*n")
until value >= 0

-- Process
if value ~= 0 then
	for i = 1, value, 1 do
		factorial = factorial * i
	end
end

-- Outputs
io.write("\nThe factorial of "..value.." is: "..factorial)

-- Outputs

-- QA: Jorge Chí

-- Entradas usadas: 0, 1, 2, 3, 12.

-- Salidas: 1, 1, 2, 6, 479001600.
-- Imprime correctamente el factorial.
