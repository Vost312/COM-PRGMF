# -*- enconding: utf-8 -*-
import os

#ompueba que la direccion exista y si existe, ejecuta el analizador sintactico mandandolo a la carpeta g++
def Analizador_sintacito():
    a = input("direccion: ")
    if (os.path.exists(a)):
        os.system("g++ -Wall -c " + a)
        if (os.path.exists("*.o")):
            os.system("del *.o")
    else:
        print ("Error en el nombre del archivo")

        
#una vez ejecutado el analizador sintactico y que no haya marcado errores
#se le da al usuario la opcion de elegir en que lenguaje lo quiere, ya sea
#objeto, ensamblador o ejecutable, se vuelve a madnar a g++ para que se construya y se ejecute
        

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

