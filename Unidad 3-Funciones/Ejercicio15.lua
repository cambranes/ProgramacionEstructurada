--[[ Funciones ]]--
   diauno = 0
   mesuno = 0
   anouno = 0
   diados = 0
   mesdos = 0
   anodos = 0
function leerAmbasFechas()
   io.write("Escriba el dia uno:")
   diauno = io.read("*n")
   io.write("Escriba el mes uno:")
   mesuno = io.read("*n")
   io.write("Escriba el ano uno:")
   anouno = io.read("*n")
   io.write("Escriba el dia dos:")
   diados = io.read("*n")
   io.write("Escriba el mes dos:")
   mesdos = io.read("*n")
   io.write("Escriba el ano dos:")
   anodos = io.read("*n")
end

function compararAmbasFechas()
    if anouno < anodos then
        print("La segunda fecha ingresada es mayor: dia", diados, "mes" , mesdos, "ano", anodos)
    end
    if anouno > anodos then
        print("La primera fecha ingresada es mayor: dia", diauno,"mes", mesuno,"ano" anouno)
    end
    if anouno == anodos then
        if mesuno < mesdos then
            print("La segunda fecha ingresada es mayor: dia", diados, "mes" , mesdos, "ano", anodos)
        end
        if mesuno > mesdos then
            print("La primera fecha ingresada es mayor: dia", diauno,"mes", mesuno,"ano" anouno)
        end
        if mesuno == mesdos then
            if diauno < diados then
               print("La segunda fecha ingresada es mayor: dia", diados, "mes" , mesdos, "ano", anodos)
            end
            if diauno > diados then
                print("La primera fecha ingresada es mayor: dia", diauno,"mes", mesuno,"ano" anouno)
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
