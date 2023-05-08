<img src="https://raw.githubusercontent.com/JaeSeoKim/badge42/main/public/badge42_logo.svg" width ="10%"/>
<h1 align="center">
	Pipex
</h1>

<p align="center">
	<b><i>Development repo for 42 projects</i></b><br>

---
Este proyecto busca profundizar un poco en dos conceptos que ya conoces: Las redirecciones y los pipes. 
Es un proyecto de introducción para proyectos de UNIX más grandes que verás más tarde en el cursus.

El programa pipex debe repetir el comportamiento del siguiente comando shell

$> < archivo1 cmd1 | cmd2 > archivo2
y tiene el siguiente aspecto

$> ./pipex archivo1 cmd1 cmd2 archivo2
Todos los errores como: comandos erróneos, permisos a archivos y etc, deben ser manejados.

Un pipe se crea mediante el operador vertical "|". Se utiliza para conectar la salida de un proceso 
con la entrada de otro proceso en una secuencia de comandos (shell script) o en una línea de comandos. 
Cuando se crea un pipe, el shell establece una conexión entre el proceso emisor y el receptor, 
lo que permite que los datos se transmitan automáticamente de un proceso a otro.
