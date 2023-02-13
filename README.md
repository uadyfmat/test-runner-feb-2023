# Ejercicios de Programación Estructurada

## Contenidos

- [Introducción](#introducción)
- [Requerimientos](#requerimientos)
- [Recomendaciones](#recomendaciones)
- [Documentación](#documentación)

## Introducción

Como parte de las actividades del Servicio Social 2023 para el proyecto "Sistema de Apoyo para el Aprendizaje de Programación para Estudiantes con Problemas de Rezago y Deserción", y en colaboración con los profesores M.I.T. Edwin Jesús León Bojorquez y Dr. Juan Pablo Ucán Pech, responsables de los cursos de Programación Estructurada 2023, se les presenta una serie de 12 ejercicios que deberán resolver y validar empleando la herramienta Test-runner.

Dicho esto, Test-runner es una aplicación de línea de comandos que es capaz de probar archivos de código contra casos de prueba de entrada y salida. Fue desarrollada por alumnos de la Facultad de Matemáticas y ha estado en constante evolución desde entonces.

Así, la meta de este ejercicio es obtener retroalimentación de los estudiantes respecto al estado actual del proyecto y, de esta manera, poder emprender acciones de mejora para adaptarlo a las necesidades actuales de los alumnos.

## Requerimientos

- Git
- NodeJs v12+
- NPM

## Recomendaciones

### Descarga del repositorio

Para tener de forma local el proyecto debes de realizar una serie de acciones, empezando por copiar la url del clonado del repositorio, misma que podrás encontrar en la ventana principal del repositorio.

<center>
    <img src="./.github/resources/get_url.png" width="300px">
</center>

Luego, elije la carpeta donde vas a trabajar. Una vez hecho esto, abre la terminal de `GitBash` en la carpeta dando click derecho y posteriormente seleccionando la opción _git bash here_, tal y como se ilustra a continuación:

<center>
    <img src="./.github/resources/git_bash_here_1.png" width="300px">
</center>

Lo cual abrirá una terminal como la siguiente:

<center>
    <img src="./.github/resources/terminal.png" width="300px">
</center>

Aquí es dónde deberás ejecutar los siguientes comandos:

```text
git init
git remote add origin <url que copiaste>
git pull origin main
```

Y listo, ya deberías tener el repositorio en tu computadora.

### Resolución de ejercicios

Primero, deberás seleccionar un lenguaje de programación que la aplicación sea capaz de evaluar, estos son:

- C
- C++
- Java
- Python

> Nota 1: Deberás tener previamente instalado el lenguaje seleccionado en tu computadora para poder ejecutar las pruebas.

> Nota 2: No olvides utilizar el lenguaje que haya especificado tu profesor.

Luego, el archivo donde tengas codificada tu respuesta deberá estar ubicado en la misma carpeta del ejercicio. Además, es súmamente importante que tu archivo tenga por nombre `Solution`, o no podrá ser detectado. Por ejemplo, suponiendo que elegiste Python, tu archivo deberá llamarse `Solution.py`.

> Nota 3: No modifiques o borres los archivos `README.md` ni `spec.inout`, ya que esto podría causar problemas más adelante.

Por último, **todas las salidas deben de ser idénticas** a las que especifica el problema, y cuando pidas la entrada del usuario no pongas textos adicionales porque te va a contar como salida. Por ejemplo:

_Escriba un programa que devuelva la palabra "Joven" si la persona ingresa una edad menor a 18 años, en caso contrario imprima "Adulto"._

|         | Correcto | Incorrecto            |
| :------ | :------- | :-------------------- |
| Entrada | `18`     | `Ingrese su edad: 18` |
| Salida  | `Adulto` | `Usted es: Adulto`    |

### Validación de resultados

Una vez hayas terminado tu ejercicio, para validar tu algoritmo primero deberás abrir una terminal (de tipo _bash_) en la carpeta raíz de este repositorio.

> Nota 4: Opciones como `Command Prompt` (`cmd`) y `PowerShell` no van a funcionar, por lo que, podrás usar `Git Bash` (debió instalarse junto con Git) en su lugar.

Ahora, la forma más sencilla de realizar lo previamente estipulado consiste en dar click derecho sobre la carpeta que contenga todos estos archivos (el `README.md`, el `.gitignore`, las carpetas de ejercicios y la carpeta de github) y dar click en la opción _git bash here_, como se muestra a continuación:

<center>
    <img src="./.github/resources/git_bash_here_2.png" width="300px">
</center>

Lo cual abrirá una terminal como la siguiente:

<center>
    <img src="./.github/resources/terminal.png" width="300px">
</center>

Aquí es dónde deberás ejecutar el siguiente comando:

```text
test-runner --language <código de lenguaje> <carpeta del ejercicio>
```

| Lenguaje | Código |
| :------: | :----: |
|    C     |   c    |
|   C++    |  cpp   |
|   Java   |  java  |
|  Python  |   py   |

Por ejemplo:

```text
test-runner --language py Ej_Test
```

<center>
    <img src="./.github/resources/success.png" width="300px">
</center>

### Subir la tarea

> Nota 5: Es muy recomendable que hayas configurado tu git con anterioridad para tener tu [nombre de usuario](https://docs.github.com/en/get-started/getting-started-with-git/setting-your-username-in-git) y [correo electrónico](https://docs.github.com/en/account-and-profile/setting-up-and-managing-your-personal-account-on-github/managing-email-preferences/setting-your-commit-email-address) de github correctos, ya que podrías presentar problemas más adelante.

Abre la terminal de `GitBash` tal y como hiciste en el primer paso para descargar el repositorio, exactamente en el directorio raíz del proyecto, es decir, el mismo en el que estuviste haciendo tus pruebas con anterioridad. Una vez hecho esto, deberás ejecutar los siguientes comandos.

```text
git add .
git commit -m "<Descripción del commit>"
git push origin main
```

## Documentación

Para más información, puede consultar la [documentación oficial](https://github.com/uadyfmat/test-runner) y la [documentación adicional](https://github.com/uadyfmat/test-runner-autoevaluacion-github), que contiene apartados dirigidos a:

- Alumnos
- Maestros
- Desarrolladores
- Preguntas Frecuentes
