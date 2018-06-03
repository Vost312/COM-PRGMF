# -*- enconding: utf-8 -*-
import os
from COM.c_lexer import Analizador_lexico
import ply_build.armar as construir

#menu en el cual se mandan a llamar los archivos c_lexer.py, parcer.py y constuct.py
def menu():
    opcion = 0
    while (opcion != 8):
        os.system("cls")
        print (''' BIENVENIDO! :D
         \t1.- Programa Fuente
         \t2.- Analizador Lexico
         \t3.- Analizador Sintactico
         \t4.- Convertir a Codigo Objeto         (.o)
         \t5.- Convertir a Codigo Ensamblador    (.s)
         \t6.- Convertir a Codigo Ejecutable     (.exe)
         \t7.- Ejecutar Programa
         \t8.- Salir''')
        opcion =int(input("opcion: "))
        if opcion == 1:
            print ("Codigo Fuente")
            fuente = input("Fuente: ")
            os.system("notepad.exe " + fuente)
        elif opcion == 2:
            print ("Analizador Lexico")
            Analizador_lexico()
            os.system("pause")
        elif opcion == 3:
            print ("Analizador Sintactico")
            construir.Analizador_sintacito();
            os.system("pause")
        elif opcion == 4:
            print ("Convertir A Codigo Objeto")
            construir.OBJ()
        elif opcion == 5:
            print ("Convertir A Codigo Ensamblador")
            construir.ASEMBLER()
        elif opcion == 6:
            print ("Convertir A Codigo Ejecutable")
            construir.EXE()
        elif opcion == 7:
            print ("Ejecutar Programa")
            construir.RUN()
        elif opcion == 8:
            print ("Gracias por usar este programa, hasta luego \n")
        else:
            print ("Error")
    pass

if __name__ == '__main__':
    menu()
