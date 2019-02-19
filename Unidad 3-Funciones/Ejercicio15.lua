--[[ Funciones ]]--
   diauno = 0
   mesuno = 0
   anouno = 0
   diados = 0
   mesdos = 0
   anodos = 0
function leerAmbasFechas()
   diauno = io.read("*n")
   mesuno = io.read("*n")
   anouno = io.read("*n")
   diados = io.read("*n")
   mesdos = io.read("*n")
   anodos = io.read("*n")
end

function compararAmbasFechas()
    if anouno < anodos then
        print("La segunda fecha ingresada es mayor: ", diados, mesdos, anodos)
    end
    if anouno > anodos then
        print("La primera fecha ingresada es mayor: ", diauno, mesuno, anouno)
    end
    if anouno == anodos then
        if mesuno < mesdos then
            print("La segunda fecha ingresada es mayor: ", diados, mesdos, anodos)
        end
        if mesuno > mesdos then
            print("La primera fecha ingresada es mayor: ", diauno, mesuno, anouno)
        end
        if mesuno == mesdos then
            if diauno < diados then
               print("La segunda fecha ingresada es mayor: ", diados, mesdos, anodos)
            end
            if diauno > diados then
                print("La primera fecha ingresada es mayor: ", diauno, mesuno, anouno)
            end
            if diauno == diados then
                print("las fechas son las mismas")
            end
        end
    end
end

--[[ Main ]]--
leerAmbasFechas()
compararAmbasFechas()
