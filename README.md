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

Los pipes son una técnica de IPC (interprocess communication) que permite que la salida de un proceso 
se convierta en la entrada del otro proceso.
Cuando se crea un pipe, el shell establece una conexión entre el proceso emisor y el receptor, 
lo que permite que los datos se transmitan automáticamente de un proceso a otro.

pid_t es un tipo de dato muy importante en programación de sistemas operativos que se utiliza para identificar procesos y comunicarse con ellos a través de diversas funciones del sistema.

envp es un puntero a una matriz de cadenas que contiene las variables de entorno del sistema.

variables de entorno,

FUNCIONES

Pipe() es una función de sistema en C que se utiliza para crear un pipe o tubería entre dos procesos. 

La función acepta un array de enteros de dos elementos. Después de la llamada a pipe, el primer elemento del array almacena el descriptor de archivo utilizado para leer datos desde el pipe y el segundo elemento del array almacena el descriptor de archivo utilizado para escribir datos en el pipe.

La función pipe devuelve un valor entero, -1 si hay un error y 0 si la llamada es exitosa. Los posibles errores incluyen la falta de recursos del sistema, como la memoria, o la falta de permisos para crear un pipe.

Fork() es una función de sistema en C que se utiliza para crear un nuevo proceso. Después de una llamada a fork, el proceso original se divide en dos procesos diferentes: el proceso padre y el proceso hijo. Ambos procesos tienen un flujo de ejecución independiente y se ejecutan en paralelo.

La función fork no tiene argumentos y devuelve un valor entero. En el proceso padre, el valor devuelto es el PID (identificador de proceso) del proceso hijo, y en el proceso hijo, el valor devuelto es 0. Si ocurre un error durante la creación del nuevo proceso, fork devuelve -1.

El proceso hijo creado por fork es una copia exacta del proceso padre, incluyendo el código, los datos y el estado del proceso. Sin embargo, hay algunas diferencias importantes entre el proceso hijo y el proceso padre. Por ejemplo, el PID del proceso hijo es diferente del PID del proceso padre y los valores de retorno de fork son diferentes para el proceso hijo y el proceso padre.

La función perror() toma como argumento una cadena de caracteres y escribe en la salida estándar de error (stderr) la cadena de caracteres seguida de un dos puntos, un espacio y el mensaje de error correspondiente a la última llamada al sistema que falló. El mensaje de error se obtiene a partir del valor de la variable global errno.

Después de imprimir el mensaje de error, la función error llama a la función exit() para salir del programa con un código de error (EXIT_FAILURE). El código de error indica que el programa ha fallado y puede ser utilizado por el sistema operativo para identificar el tipo de error que se produjo durante la ejecución del programa.