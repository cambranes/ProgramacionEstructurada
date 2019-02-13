--[[
    Autor: Carlos Chan Gongora 13/02/2019
    Entradas: Ninguna.
    Salidas: Las tablas de multiplicar desde la tabla del 2 hasta la del 9.
    Procedimiento general: Utiliza un for dentro de otro para ir imprimiendo las multiplicaciones.
]]--

--[[
	Funciones
]]--
-- Imprime las multiplicaciones
function imprimirTabla()
	local multiplicacion = 0;
	for i = 2, 9, 1 do
		for j = 1, 10 do
			multiplicacion = i * j
			io.write(i.." * "..j.." = "..multiplicacion.."\n")
		end
		io.write("\n")
	end
end

--[[
	Main
]]--

imprimirTabla()