# -*- enconding: utf-8 -*-
import os

#comprueba que el archivo exista  si existe lo manda a la carpeta G++ la cual realiza el analizador sintectico
def Analizador_sintacito():
    a = input("direccion: ")
    if (os.path.exists(a)):
        os.system("g++ -Wall -c " + a)
        if (os.path.exists("*.o")):
            os.system("del *.o")
    else:
        print ("Error en el nombre del archivo")
#luego del analisis dependdiendo de la eleccion del usuario se manda a la carpeta g++ nuevamente para que se transforme en alguno de los codigos.
def OBJ():
    a = input("direccion: ")
    if (os.path.exists(a)):
        os.system("g++ -Wall -c " + a)
        os.system("pause")

def ASEMBLER():
    a = input("direccion: ")
    if (os.path.exists(a)):
        os.system("g++ -Wall -S " + a)
        os.system("pause")

def EXE():
    a = input("direccion: ")
    if (os.path.exists(a)):
        os.system("g++ -m32 -Wall -o exe " + a)
        os.system("pause")
    

def RUN():
    os.system("exe.exe")
#ejecuta el programa final en caso de ser un exe.
