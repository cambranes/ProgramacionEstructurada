--[[
Autor: Raul Rivadeneyra 2/2/2019
Entradas:(n € N | n < 2147483648)
Salidas: Numero de cuantos multiplos de 5 hay entre 1 y n
Procedimiento general: Saca el numero entero de la division de n - 1 entre 5
* Se puede ejecutar en https://www.jdoodle.com/execute-lua-online (Activar "Interactive mode")
]]--
n = io.read("*n")
multiplier = math.floor((n - 1)  / 5)
io.write("There are ".. multiplier .. " multipliers of 5 between 1 and "..n)
