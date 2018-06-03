
#include <stdio.h>  //librerias necesarias para utilizar las funciones y caracteriticas
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>

int main()           //inicio del programa
{
	
	int ascci[256];           // variable de identificador de codigo ascii
	for(int i=0;i<256;i++)             // preparandor de los espacios para los caracteres
	{
		ascci[i]=0;
	}
	char hola;           // declaracion de la variable que almacenara una cadena de caracteres 
	int cont = 0;           
	int cast ;                      //variable para ir comparar los caracteres


	FILE * pFile;           //  archivo 
  	pFile = fopen ("texto.txt","r");        	// nombre de el archivo y tip de accion a realizar, read
  	
  	do
	  {
  		cont++;
  		hola = fgetc(pFile);
  		cast = hola;               // le da el valor de la cadena hola a cast
  	
  		ascci[cast]++;             // compara los caracteres y los va contando 		
	  }
	  while(hola != EOF);
	fclose (pFile);
	
	
	for(int i=0;i<256;i++)           // para que solo muestre los caracteres que existen en el archivo se hace un filtro
	{
		if(ascci[i]>>0){            // ciclo para pintar los caracteres
			printf("%c : %i \n",i,ascci[i]);  // esta se encarga de pintar el caracter y cuantos hay de cada uno y dar un salto de linea 
		}
		
	}
	
  	system("pause");
	return 0;

}   // fin del programa 
