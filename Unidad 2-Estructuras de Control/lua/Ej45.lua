--[[
Autor: Raul Rivadeneyra 2/2/2019
Entradas:(n € N | n < 2147483648)
Salidas: Texto el cual dice si es primo o no
Procedimiento general: Saca el modulo de todos lo numeros menores al ingresado, si alguno da 0 entonces rompe el loop
* Se puede ejecutar en https://www.jdoodle.com/execute-lua-online (Activar "Interactive mode")
]]--

--Inputs
n = io.read("*n")
isPrime = true

--Process
for i = 2, n - 1, 1 do
  if (math.fmod(n,i) == 0) then
    isPrime = false
    break
  end
end

--Outputs
if isPrime then
  print("El numero ".. n .." es primo")
else
  print("El numero ".. n .." no es primo")
end
