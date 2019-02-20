--[[ Funciones ]]--
function entradaNCeldas()
    n = io.read("*n")
end

function seleccionEspacioCelda()
    for i = 0, n - 1, 1 do
        for j = 0, n - 1, 1 do
            if i >= j then
                print(i, j, " ") --En Lua no deja imprimir seguido--
            end
            print ("    ")
        end
    end
end


--[[ Main ]]--
entradaNCeldas()
seleccionEspacioCelda()
--[[
QA: Realizo: Daniel
Entradas: Numero 5
Salidas: Diagonal superior de una matriz de 5 por 5
No tiene el formato requerido

]]