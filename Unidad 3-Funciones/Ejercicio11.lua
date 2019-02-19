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
        io.write("Tu saldo es de .. saldo .. ")
    end
end

entrada()
proceso()
salida()

