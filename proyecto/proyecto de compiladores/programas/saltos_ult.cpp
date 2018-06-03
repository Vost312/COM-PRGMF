

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
	char ult;
	
	
	

	FILE * pFile;
  	pFile = fopen ("texto.txt","r");	
  	
  	do
	  {
  		ult = cast;	
  		hola = fgetc(pFile);
  		cast = hola;
  		
  		if(cast=='\n'){
  			printf("\nUltimo caracter de linea %i: %c",cont,ult);
  			cont++;
  			
		  }
  		
	  }
	  while(hola != EOF);
	fclose (pFile);
	printf("\nUltimo caracter de linea %i: %c\n",cont,ult);
	system("pause");

	return 0;

}

