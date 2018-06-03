
#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
using namespace std;

int i;
int k;
int pos;
int unq=0;
int unqwrds = 0;
int nsame=0;
int longitud;
int eof=0;
int numdepalabras=0;
int caracteres = 0;
int flag;


char tabladecaracteres[80][2];        //arreglo donde se guardan los caracteres individuales
char tabladepalabras[80][15];			//arreglo donde se guardan las palabras individuales despues de ser limpiadas de caracteres.

int main()
{	//abrir archivo
	char archivo[50];
	ifstream lector;
	cin.getline(archivo, 50);
	lector.open(archivo);
	//error si no encuentra archivo
	if (!lector.is_open()) {
		exit(EXIT_FAILURE);
	}
	i = 0;
	char arreglo[80][15];
	//leer archivo hasta el final
	while (!lector.eof()) {
		numdepalabras++;		//como el while es un ciclo hasta que acabe el archivo, se puede tomar facilmente el numero total de palabras
		lector >> arreglo[i]; //guarda las palabras en arreglo 
		i++;
	}


	//longitud de archivo

		for (i = 0; eof != 1; i++) {						//funcion que cuenta todos los caracteres de un archivo
			flag = 0;
			if (i==numdepalabras)
				eof = 1;
			for (int j = 0;flag != 1 && eof !=1 ; j++) {
				if (arreglo[i][j] == '\0') {
					flag = 1;
				}
				else
				caracteres++;

				for (k = 0, pos = -1;k < 80;k++) {					//funcion que toma los caracteres unicos anidado en el for principal de la funcion anterior
					if (arreglo[i][j] == tabladecaracteres[k][0]) {	//funcion que compara el caracter que se esta leyendo con la lista de caracteres unicos, si se encuentra que ya existe este
						pos = k;									//se toma la posicion en la que se encontro dentro de la tabla
					}
				}
					if (pos != -1) {								//si el caracter se encuentra en la tabla, se suma el contador de este caracter
						tabladecaracteres[pos][1]++;
					}
					else {
						tabladecaracteres[unq][0] = arreglo[i][j];	//si no se encuentra dentro de la tabla se añade a esta y se incrementa el contador de caracteres unicos
						unq++;
					}
				
				
			}
		}
	



	// limpiador de palabras
		for (i = 0, eof=0; eof != 1; i++) {
			flag = 0;
			if (i == numdepalabras)
				eof = 1;
			for (int j = 0;flag != 1 && eof != 1; j++) {		//funcion que vuelve a leer las palabras y cuando llega al final de estas, pregunta si el caracter anterior es un simbolo
				if (arreglo[i][j] == '\0') {					//en caso de que lo sea se elimina y se ingresa un caracter nulo despues de marcar el final de la palabra
					if (ispunct(arreglo[i][j - 1])) {
						arreglo[i][j - 1] = '\0';
						arreglo[i][j] = -52;
					}
					flag = 1;
				}
			}
		}
		
	//contador de palabras
		pos = -1;
		for ( i = 0; i <= numdepalabras; i++)									//funcion similar al contador de caracteres, como las palabras son ingresadas a un arreglo bidimensional de char,
		{																		//estas se comparan por sus 14 caracteres totales, dejando el decimoquinto espacio como contador, en caso de que estos
			for (int j = 0; j < 15; j++)										//14 caracteres sean iguales, se suma 1 al contador, si no esta la palabra se añade a la tabla y se suma el contador de palabras unicas.
			{
				if (arreglo[i][0]==tabladepalabras[j][0])
				{
					for ( int ciclo = 0, nsame = 0, igual =0; ciclo < 14 && nsame==0; ciclo++)
					{
						if (arreglo[i][ciclo]!=tabladepalabras[j][ciclo])
						{
							nsame = 1;
						}
						else {
							igual++;
						}
						if (igual==14)
						{
							pos = j;
						}
					}
				}
				
			}
			if (pos != -1) {
				tabladepalabras[pos][14]++;
				pos = -1;
			}
				else {
					for ( k = 0; k < 15; k++)
					{
						tabladepalabras[unqwrds][k] = arreglo[i][k];
						
						
					}
					unqwrds++;
					
					
				}
			
		}


		cout << "numero de palabras totales: "<<numdepalabras<<"\n";
		cout << "numero de palabras unicas: " << unqwrds-1 << "\n";
		cout << "numero de caracteres totales: " << (caracteres+numdepalabras)-1<< "\n";
		cout << "numero de caracteres unicos:" << unq+1 << "\n";

		system("pause");
		
			cout << "caracteres: \n";
		for (i = 0; i < unq; i++)
		{
			cout << tabladecaracteres[i][0] << "----";
			cout << (int)tabladecaracteres[i][1]+1 << "\n";
		}
			cout << "espacio----"<< numdepalabras-1 << "\n";




		system("pause");
		cout << "palabras: \n";
		for (i = 0; i < unqwrds-1; i++)
		{
			cout << tabladepalabras[i] << "----";
			int diff=tabladepalabras[0][14];
						//int diff = std::abs((-52 - ((int)tabladepalabras[0][14]));
			cout << diff+1 << "\n";

		}
		


	system("pause");
	
	return 0;

}


