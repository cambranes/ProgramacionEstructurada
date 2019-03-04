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


![](https://github.com/HectorCosgalla/ProgramacionEstructuradaEQ4/blob/RonssonSantos/casosdeUso.PNG)


**Ver los bares disponibles**: Los usuarios podrán ver desde la app los establecimientos que se han puesto en interfaz de la aplicación, cada uno con su respectivo espacio.  

**Ver horarios**: Los usuarios podrán ver los horarios de servicio que tiene cada establecimiento entrando a al apartado del establecimiento en la app.  

**Ver los menús:** Los usuarios podrán ver los productos y/o servicios que ofrece el establecimiento, así como su precio por cada uno de ellos.  

**Ver las direcciones:** Los usuarios puede ver la dirección del establecimiento de preferencia para ver cómo llegar y así mismo ver si es de su conveniencia.  

**Ver las promociones:** Los usuarios podrán ver desde la pagina de inicio de la app las promociones que los establecimientos ofrecen al público así mismo si seleccionan el anuncio los llevará al apartado del establecimiento en la pp.
Ver o dejar comentarios: Los usuarios podrán ver los comentarios que dejan otros usuarios sobre su experiencia en el establecimiento, así como podrán dejar sus propios comentarios, (la caja de comentarios se encontrará hasta abajo en el apartado de cada apartado.  

**Calificar establecimiento:** Los usuarios podrán usar un sistema de calificación por medio de estrellas con el cual podrán darle una calificación al establecimiento, (esta ira antes de la caja de comentarios).  

**Ver contactos:** Así mismo los usuarios podrán contar con los números del establecimiento para poder hacer reservaciones, aclarar sus dudas, etc.  

**Actualizar menús:** Los programadores estarán a cargo de mantener actualizados los productos y/o servicios de cada local.  

**Actualizar promociones:** Los programadores estarán al tanto de las promociones por lo cual constantemente estarán poniendo las nuevas y descontinuando las que vaya quitando cada establecimiento.  

**Actualizar horarios:** Los programadores en caso de que el establecimiento cambie de horario tendrán el deber de actualizarlo.  

**Actualizar contactos:** De igual forma si el establecimiento cambia su número, correo, etc. Los programadores lo actualizarán.  

### Proceso de desarrollo  

#### Modelo de trabajo:  

El modelo de trabajo va a ser sencillo nos apegaremos al ciclo de vida de software de cascada, donde teniendo todos los requisitos, procederemos al diseño del cual se encargaran al menos dos de los miembros del equipo uno dedicado a la parte de las interfaces o bien del front in y otro que se encargue del back in.  

Teniendo los requisitos y el diseño todos los miembros del equipo pasaríamos al proceso de implementación donde basándonos en el diseño generaríamos los módulos de trabajo necesarios para el funcionamiento óptimo del software, cabe mencionar que durante este proceso se realizaran las pruebas necesarias para que al final los errores sean mínimos.  

El siguiente paso sería una verificación final para comprobar que el sistema funciona correctamente y en caso de tener un fallo se pueda corregir lo más pronto posible.  

Vamos a mantener una comunicación constante por medio de un grupo de whatsapp en el que estaremos mandándonos reportes de  nuestra actividad, también tendremos al menos una reunión semanal para mantenernos al corriente de todo lo que sea necesario, ajustar algún detalle, cambios de fecha, etc. y cada reunión será registrada en un bitácora, así como el avance y cualquier otro evento importante durante el proceso.  

Para medir el avance del proyecto se establecerán los siguientes porcentajes:  

Requisitos – 5%
Diseño – 20%
Código – 50%
Validación e implementación – 25%  

Y se espera que se lleven a cabo estas etapas en las siguientes fechas:  

Diseño: 28/febrero/2018 – 12/Marzo/2018  

Codificación: 12/marzo/2018 – 22/abril/2018  

Validación e implementación: 22/abril/2018 – 14/mayo/2018    


Estas fechas en caso de ser MUY necesario se cambiarían.
Para medir el avance personal de cada miembro del equipo se espera que haya al menos 3 a 4 contribuciones a la semana en el repositorio, esperan que el miembro del equipo le dedique 1 o 2 horas al proyecto.





