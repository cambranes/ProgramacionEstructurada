--[[
Autor: Chan Gongora Carlos 04/2/2019
Entradas: Un numero entero positivo mayor a cero
Salidas: El valor de e
Procedimiento general: Va calculando el factorial hasta el numero ingresado mientras hace la operacion 1/factorial
                        en cada iteracion
]]--

-- Inputs
factorial = 1.0
e = 1.0

repeat
	io.write("\nEnter a positive integer number greater than 0: ")
	value = io.read("*n")
until value >= 1

-- Process
for i = 1, value, 1 do
	factorial = factorial * i
    e = e + (1 / factorial);
end

-- Outputs
io.write("\nThe value of e for precision "..value.." is: "..e)
-- QA: Jorge Chí

-- Entradas usadas: 1, 3, 10, 47, 1000

-- Salidas: 2, 2.6666666666667, 2.7182818011464, 2.718253968254, 2.718281828459

--Aproxima correctamente
