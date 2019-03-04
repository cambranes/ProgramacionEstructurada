# Definición de Requerimientos
### Actores del sistema
#### Primer actor.

Nombre: Usuario


El usuario interactuará directamente con el sistema, es el que consumirá los servicios que este mismo le proporciona. El usuario podrá usar el programa para ver diferentes establecimientos para ver las ofertas que los mismos ofrecen, de igual forma podrá ver los datos de los establecimientos entre otras opciones.

#### Segundo actor.

Nombre: Programador


El programador es el que se encargara de mantener el programa. Su interacción con el programa es el de mantenerlo actualizado con los distintos datos de cada establecimiento poniendo datos recientes y quitando los obsoletos.

## Requerimientos funcionales


1. El usuario podrá crearse un perfil en el sistema para dar comentarios y calificar los establecimientos.  
1.1	El sistema generará la caja de comentarios y la opción de calificar el establecimiento al final de la sección de cada local.  
1.2 El sistema tomará cada comentario y calificación para ponerlos en la caja de comentarios y sumar la calificación dada, a la calificación final.


2. Cada usuario tendrá que identificarse con su e-mail y una contraseña de entre 8-12 dígitos.  
2.1	El sistema creará un perfil para cada usuario que desee registrarse.  
2.2	El sistema pedirá los datos del usuario, así como un e-mail y una contraseña.  
2.3	El sistema guardará los datos del usuario y creará el perfil

3.	El usuario podrá ver la información en la sección designada a cada establecimiento.  
3.1	El sistema generará la interfaz para mostrar el establecimiento.  
3.2	Se proyectará la información de cada establecimiento.  
3.3	Se proyectará la calificación promedio dada por los usuarios y los comentarios hechos por los mismos.  
3.4	Si el usuario esta registrado el sistema dará la opción de comentar.

4.	Los datos se recolectaran a través de técnicas de web scrapping  
4.1	Se buscaran en las redes sociales de los bares las publicaciones referentes a promociones.  
4.2	Como se obtendrá texto tendremos que seleccionar que partes del texto incluir y que partes no.  
4.3	En caso de tener alguna página oficial también se incluiría dentro del web scrapping.  

5.	El sistema será actualizado en periodos de entre 1 a 2 días.

Requerimientos no funcionales  
--
1.	El sistema será hecho con lenguaje JavaScript.
2.	El sistema estará disponible las 24 hrs para todos los usuarios registrados y no registrados.
3.	El uso de los datos de los usuarios estará apegado a lo que marca la Ley Federal de Protección de Datos Personales.
4.	El usuario podrá ver y buscar entre los establecimientos disponibles en el sistema.
5.	El sistema generara una interfaz para proyectar cada establecimiento.
6.	Se generará una lista con el nombre y la imagen de cada establecimiento
7.	Cada elemento de la lista al ser seleccionada mostrará la información del establecimiento almacenado en ese elemento.
8.	El sistema le mostrará al usuario las ofertas principales de los establecimientos en la página de inicio.
9.	 El Sistema proyectará debajo de las opciones principales las ofertas.
10.	 Al ser seleccionado el elemento que abrirá la sección del establecimiento que la ofrece. 


