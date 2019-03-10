--[[
Autor: Guillermo Canto Dzul
Entradas: Monto a retirar del cajero
Salidas: Saldo luego del retiro
]]
--Funciones
function entrada()
    montoARetirar = io.read("*n")
end

function proceso()
  saldo = 3000
    if montoARetirar > 3000 or montoARetirar <= 0 then
        flag = 0
    else
        saldo = saldo - montoARetirar
        flag = 1
    end
end

function salida()
    if flag == 0 then
        io.write("La operacion no pudo realizarse")
    else
        io.write("Tu saldo es de " .. saldo )
    end
end
--Main
entrada()
proceso()
salida()
--[[
QA: Hector Abraham V. Cosgalla
Entradas:3000, 500, 4000
Salidas: Tu saldo es de .. saldo .. , Tu saldo es de .. saldo .. , La operacion no puede realizarse
Comentarios: Falta documentacion (corregido)
]]
