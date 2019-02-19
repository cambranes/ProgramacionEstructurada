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
