--[[
Autor: Raul Rivadeneyra 2/2/2019
Entradas:(n € R+ | n < 2147483648)
Salidas: Media aritmetica de las diferentes entradas
Procedimiento general: Lee y suma numeros hasta que 999 haya sido ingresado y depues los divide
                       entre la cantidad de numeros ingresados
* Se puede ejecutar en https://www.jdoodle.com/execute-lua-online (Activar "Interactive mode")
]]--

--Inputs
n = 0
counter = 0
sum = 0

--Process
while (n ~= 999) do
  n = io.read("*n")
  if (n ~= 999) then
    sum = sum + n
    counter = counter + 1
  end
end
mean = sum / counter

--Outputs
io.write("The mean is: ".. mean)

-- QA: Jorge Chí

-- Entradas usadas: 2 - 3 - 999, 10 - 34 - 26 - 999, 999, 0 - 999

-- Salidas: 2.5, 23.33333333, -nan, 0.
-- Imprime correctamente la media.
