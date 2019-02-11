#Entradas: El año que es propuesto por el usuario (linea 10, 11).
#Salidas: El año es bisiesto o no.
#Procedimiento general:Para la parte más "complicada" que es discernir cuando los años múltipos de 100 son también de 400, usé la evaluación
#de los módulos 100 y 400. A su vez, para sólo hacer el de 4, usé el módulo de 4.

gets x
if (x % 100) == 0 then
  if (x % 400) == 0 then
    print "Si es bisiesto\n"
  else
    print "No es bisiesto\n"
  end
else
    if (x % 4) == 0 then
      print "Si es bisiesto\n"
  else
    print "No es bisiesto\n"
  end
end
