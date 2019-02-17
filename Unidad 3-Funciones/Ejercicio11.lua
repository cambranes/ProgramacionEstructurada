function entrada()
    montoARetirar = io.read("*n")
    return montoARetirar
end
function proceso(montoARetirar)
  saldo = 3000
    if montoARetirar > 3000 or montoARetirar <= 0 then
    else
    saldo = saldo - montoARetirar
    end
  return saldo
end
function salida(saldo)
  io.write("Tu saldo es de .. saldo ..")
end
montoARetirar = entrada()
saldo = proceso(montoARetirar)
salida(saldo)
