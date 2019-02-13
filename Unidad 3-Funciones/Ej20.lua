--[[
	Autor: Carlos Chan Gongora 13/02/2019
	Entradas: Un numero entero positivo mayor a cero.
	Salidas: La sumatoria de los numeros hasta el valor ingresado.
	Procedimiento general: Lee un numero y valida que sea mayor a cero o de lo contrario
	solicita de nuevo el numero, tras validarlo mediante un for, suma los numeros desde 1 hasta
	el numero ingresado y lo imprime.
]]--

--[[
	Funciones
]]--
-- Lee una variable
function entrada()
	local num = 0
	io.write("Ingrese un numero entero mayor que cero: ")
	num = io.read("*n")
	return num
end
-- Validar que el numero sea mayor a cero
function validarNumero(num)
	local validado = false
	if (num > 0) then
		validado = true
	else
		validado = false
	end
	return validado
end
-- Suma los numeros desde 1 hasta el numero ingresado
function sumar(num)
	local sumatoria = 0
	for i = 1, num, 1 do
		sumatoria = sumatoria + i
	end
	return sumatoria
end
-- Imprime los resultados
function imprimir(num, resultado)
	io.write("El valor de la sumatoria de 1 hasta "..num.." es: "..resultado)
end

--[[
	Main
]]--

-- Entradas
n = 0
resultado = 0

repeat
	n = entrada();
until validarNumero(n)

-- Proceso
resultado = sumar(n)

-- Salidas
imprimir(n, resultado)
