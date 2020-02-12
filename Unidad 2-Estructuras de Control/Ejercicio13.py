# Ejercicio 13
# Escribir el programa para convertir una hora leída en horario militar (número de cuatro dígitos) y la imprima a una hora en formato estándar (hh:00 am/pm).
# Autor: Jorge Reyes (Equipo 'about:blank')

# Dato de entrada: valor numérico (hora militar)
# Dato de salida: string con el valor de la hora correspondiente

def timeTranslate(time):
    # bandera am/pm
    amPm = 'am'

    # obtención de los primeros 2 números
    hours = time // 100

    # obtención de los últimos 2 números
    minutes = time - (time // 100) * 100

    # dar formato
    if (hours > 12):
        hours = hours - 12
        amPm = 'pm'

    return (str(hours).zfill(2) + ':' + str(minutes).zfill(2) + ' ' + amPm)

time =  int(input())
print(timeTranslate(time))
