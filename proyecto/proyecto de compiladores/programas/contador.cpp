
#include <stdio.h> // ficheros o librerias  necesarios para  la utilizacionde las funciones 
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
int main(){                    // inicioo de programa 
	

	char hola;                  // declaracion de la variable que almacenara una cadena de caracteres 
	int cont = 0;               // contador  de los caracteres 

	FILE * pFile;                   // llamadp a el archivo 
  	pFile = fopen ("texto.txt","r");	// nombre de el archivo y tip de accion a realizar, read
  	
  	do{                                   // si el archivo tiene  contenido 
  		cont++;                       // el contador empiesa a incrementarse 
  		hola = fgetc(pFile);         // la cadena de caracteres se llena con la informacion del documento abierto 
  		printf("%c\n",hola);         // pinta caracter por caracter y da un salto de linea cada vez que lo pinta 
	}while(hola != EOF);
        
	fclose (pFile);                  // cierre del archivo 
	
	              
	printf("El numero de letras es: %i  \n",cont);
    system("pause");         // detiene el programa para poder ser visible 
	return 0; // cierre del programa 

}  // fin del programa 
