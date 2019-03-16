"""
Creado por: Hector A. V. Cosgalla
Entradas: un numero n positivo natural
Salidas: el triangulo de pascal invertido
Procedimiento: Se inicia la matriz con las primeras 2 posiciciones del triangulo
de pascal, posteriormente se inicia un ciclo con un vector, con ayuda de un
ciclo for, se suman los numeros de en medio y se guardan en el vector, despues
al vector se le agrega el 1 del final de la linea y a la matriz se le aumenta el
vector, este proceso se repite n-1 veces, esto es por que la primera posicion ya
la tenemos, cuando se termina de formar el triangulo se le da la vuelta y se
manda a imprimir
"""

def entradas():
    breik = 1
    while breik < 2:
        print("ingresa un numero")
        n=int(input())
        if n > 0:
            breik = breik + 1
        else:
            print("Ingresa un numero valido")
    return n

def procedimiento(n):
    triangulo = [[1],[1, 1]]
    for i in range(1, n-1):
        numsEnMedio = [1]
        for m in range(0,len(triangulo[i])-1):
            numsEnMedio.extend([triangulo[i][m] + triangulo[i][m+1]])
        numsEnMedio = numsEnMedio + [1]
        triangulo.append(numsEnMedio)
    resultado = triangulo
    resultado.reverse()
    return resultado

def salidas(resultado):
    for i in resultado:
        print(i)

n = entradas()
resultado = procedimiento(n)
salidas(resultado)

"""
QA: Amaury Morales Cerecedo

(Funcion entradas)
Entradas: 1, 20, 0, -3.
Salidas: Se aceptaron todos los valores exceptuando los que son menores a cero.

(Funcion procedimiento)
Entradas: 1, 20, 0, -3.
Salidas: El procedimiento es correcto.

(Funcion salidas)
Entradas: 1, 20, 0, -3.
Salidas: La impresion del triangulo, pero no tiene forma del triangulo invertido.

--Notas--
+El codigo no corre porque en la linea 42 la funcion se llama ''procedimiento'' y no ''procedimientos''.
+El codigo no imprime los valores como el triangulo invertido. Lo imprime como si estuviera pegado
al lado izquierdo de la consola y el unico lado visible del triangulo es del lado derecho.

Ejemplo:

Sale asi:
[1, 9, 36, 84, 126, 126, 84, 36, 9, 1]                                                                                              
[1, 8, 28, 56, 70, 56, 28, 8, 1]                                                                                                    
[1, 7, 21, 35, 35, 21, 7, 1]                                                                                                        
[1, 6, 15, 20, 15, 6, 1]                                                                                                            
[1, 5, 10, 10, 5, 1]
[1, 4, 6, 4, 1]                                                                                                                     
[1, 3, 3, 1]                                                                                                                        
[1, 2, 1]                                                                                                                           
[1, 1]                                                                                                                              
[1] 

Cuando deberia salir asi:

[1, 9, 36, 84, 126, 126, 84, 36, 9, 1]                                                                                              
   [1, 8, 28, 56, 70, 56, 28, 8, 1]                                                                                                    
     [1, 7, 21, 35, 35, 21, 7, 1]                                                                                                        
       [1, 6, 15, 20, 15, 6, 1]                                                                                                            
         [1, 5, 10, 10, 5, 1]
           [1, 4, 6, 4, 1]                                                                                                                     
             [1, 3, 3, 1]                                                                                                                        
              [1, 2, 1]                                                                                                                           
                [1, 1]                                                                                                                              
                  [1] 
edit del autor: considero irrelevante el como aparece el triangulo pues al final aparece el 
triangulo quizá no de la forma correcta pero aparece
"""

