--[[
	Autor: Carlos Chan Gongora 12/02/2019
	Entradas: Dos numeros enteros.
	Salidas: El mayor y menor de los numeros o si son iguales imprime "Son iguales".
	Procedimiento general: Compara ambos numeros para encontrar al mayor y menor o de lo contrario
	imprimir que son iguales.
]]--

--[[
	Funciones
]]--
-- Lee una variable
function entrada()
	local num = 0
	io.write("Ingrese un numero: ")
	num = io.read("*n")
	return num
end
-- Compara y devuelve el numero mayor
function calcularMayor(num1, num2)
	local mayor = 0
	if (num1 > num2) then
		mayor = num1
	else
		mayor = num2
	end
	return mayor
end
-- Compara y devuelve el numero menor
function calcularMenor(num1, num2)
	local menor = 0
	if (num1 < num2) then
		menor = num1
	else
		menor = num2
	end
	return menor
end
-- Imprime los resultados o "son iguales" si los numeros que recibe son iguales
function salida(mayor, menor)
	if (mayor ~= menor) then
		io.write("El mayor es: "..mayor.." y el menor es: "..menor)
	else
		io.write("Los numeros son iguales")
	end
end

--[[
	Main
]]--

-- Entradas
numero1 = 0;
numero2 = 0;
numMayor = 0;
numMenor = 0;

numero1 = entrada()
numero2 = entrada()

-- Proceso
numMayor = calcularMayor(numero1, numero2)
numMenor = calcularMenor(numero1, numero2)

-- Salida
salida(numMayor, numMenor)