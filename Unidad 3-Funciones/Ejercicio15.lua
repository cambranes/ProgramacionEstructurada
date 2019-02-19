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
--[[
QA: Hector Abraham V. Cosgalla
Entradas:
10--|24--|10--|
2---|3---|2---|
1998|1995|1995|
24--|10--|10--|
3---|2---|2---|
1995|1998|1995|
Salidas:
La primera fecha ingresada es mayor | la segunda fecha ingresada es mayor | las fechas son las mismas
Comentarios: Esta bien solo que falta un poco de informacion al momento de pedir las fechas
]]
