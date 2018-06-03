#include <stdio.h>
#include <string.h>
 
int main()
{
  char numero_R[500];
  int numero_A[500];
  int suma = 0,ix;
 
  for(ix = 0;ix < 500;ix++)
    numero_A[ix] = 0;
 
  printf("Introduzca el numero Romano en mayusculas : ");
  scanf("%s",numero_R);
 
  for (ix = 0;ix < strlen(numero_R);ix++)
  {
    switch(numero_R[ix])
    {
      case 'I' :
        numero_A[ix] = 1;
        break;
 
      case 'V' :
        numero_A[ix] = 5;
        break;
 
      case 'X' :
        numero_A[ix] = 10;
        break;
 
      case 'L' :
        numero_A[ix] = 50;
        break;
 
      case 'C' :
        numero_A[ix] = 100;
        break;
 
      case 'D' :
        numero_A[ix] = 500;
        break;
 
      case 'M' :
        numero_A[ix] = 1000;
        break;
      default:
      {
        printf("El numero ingresado no es valido :\n");
        return (-1);
        break;
      }
    }
  }
 
  for(ix = 0;ix < strlen(numero_R);ix++)
  {
    if(numero_A[ix] < numero_A[ix+1])
      suma -= numero_A[ix];
    else
      suma += numero_A[ix];
  }
 
  printf("El numero : %s , corresponde a : %d\n",numero_R,suma);
 
  return (0);
}


