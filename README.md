[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

TP1 - PUNTO 2
a) 📌 ¿Qué es el archivo .gitignore?
El archivo .gitignore es un archivo de configuración en Git que se utiliza para indicar qué archivos o directorios deben ser ignorados por el control de versiones.

✅ ¿Por qué es conveniente incluirlo?
    
    Es conveniente incluir un archivo .gitignore en nuestro repositorio para evitar la suba de archivos innecesarios como por ejemplo archivos .exe o .txt, así tener una mejor organizacion en el repositorio y sea una facil lectura para otros desarrolladores que ingresen a nuestro repositorio a buscar archivos puntuales en el mismo.

📌 ¿Cuándo se debe hacer?
Se recomienda crear y configurar un archivo .gitignore antes de hacer el primer commit, para evitar que archivos innecesarios sean rastreados desde el inicio.

🛠 ¿Cómo configuraría el archivo .gitignore?
    Lo haría indicando cuales son los tipos de archivos que quiero ignorar en la subida de mi repositorio como por ejemplo los archivos .txt,.pdf o .exe como en el siguiente ejemplo:
    ### Executable ###
    *.app
    *.bat
    *.cgi
    *.com
    *.exe
    *.gadget
    *.jar
    *.pif
    *.vb
    *.wsf

### VisualStudioCode ###
.vscode/*
!.vscode/settings.json
!.vscode/tasks.json
!.vscode/launch.json
!.vscode/extensions.json
!.vscode/*.code-snippets


3- Revise los archivos subidos en su repositorio de github. ¿Qué archivos
vé?¿Cuál cree que no hace falta que esté?
Al tener ya creado un archivo .gitignore solo tengo los archivos necesarios en vez de los archivos .exe creados al ejecutar el archivo tp1_1.c

