

#include <stdio.h>  //librerias necesarias para utilizar las funciones y caracteriticas
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>

int main()
{
	char hola;
	int cont = 1;
	int cast  ;
	char sep;
	
	
	printf("Introduce el separador de palabras: ");
	scanf("%c",&sep);
	

	FILE * pFile;
  	pFile = fopen ("texto.txt","r");	
  	
  	do
	  {
  		
  		hola = fgetc(pFile);
  		cast = hola;
  		
  		if(cast==sep){
  			cont++;
		  }
  		
	  }
	  while(hola != EOF);
	fclose (pFile);
	
	printf("\nhay %i palabras con este separador : %c \n",cont,sep);
	system("pause");

	return 0;

}

