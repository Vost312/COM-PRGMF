%{
#include <stdio.h>
#include <stdlib.h>
%}
%option noyywrap
prohibidas [ABEFGHJKNÑOPQRSTUWYZa-z0-9]
permitidas [IVXLCDM]
%%
.*{prohibidas}.*   { printf("No es un numero romano, o esta mal escrito\nDigita un numero Romano\n");}
(III(I)+) { printf("No es un numero romano, o esta mal escrito\nDigita un numero Romano\n");}
(I+(IV))   { printf("No es un numero romano, o esta mal escrito\nDigita un numero Romano\n");}
((IV)I+)   { printf("No es un numero romano, o esta mal escrito\nDigita un numero Romano\n");}
((IV)V+)   { printf("No es un numero romano, o esta mal escrito\nDigita un numero Romano\n");}
(V(V)+) { printf("No es un numero romano, o esta mal escrito\nDigita un numero Romano\n");}
(I+V(I+))   { printf("No es un numero romano, o esta mal escrito\nDigita un numero Romano\n");}
(VI((V)(I))+)   { printf("No es un numero romano, o esta mal escrito\nDigita un numero Romano\n");}
(VIII(I)+)  { printf("No es un numero romano, o esta mal escrito\nDigita un numero Romano\n");}
(I+(IX)) { printf("No es un numero romano, o esta mal escrito\nDigita un numero Romano\n");}
((IX)X+) { printf("No es un numero romano, o esta mal escrito\nDigita un numero Romano\n");}
(XXX(X)+) { printf("No es un numero romano, o esta mal escrito\nDigita un numero Romano\n");}
(XIII({permitidas})+) { printf("No es un numero romano, o esta mal escrito\nDigita un numero Romano\n");}

(I) { printf("1\nDigita un numero Romano\n");}
(II) { printf("2\nDigita un numero Romano\n");}
(III) { printf("3\nDigita un numero Romano\n");}
(IV) { printf("4\nDigita un numero Romano\n");}
(V) { printf("5\nDigita un numero Romano\n");}
(VI) { printf("6\nDigita un numero Romano\n");}
(VII) { printf("7\nDigita un numero Romano\n");}
(VIII) { printf("8\nDigita un numero Romano\n");}
(IX) { printf("9\nDigita un numero Romano\n");}
(X) { printf("10\nDigita un numero Romano\n");}
(XI) { printf("11\nDigita un numero Romano\n");}
(XII) { printf("12\nDigita un numero Romano\n");}
(XIII) { printf("13\nDigita un numero Romano\n");}
(XIV) { printf("14\nDigita un numero Romano\n");}
(XV) { printf("15\nDigita un numero Romano\n");}
(XVI) { printf("16\nDigita un numero Romano\n");}
(XVII) { printf("17\nDigita un numero Romano\n");}
(XVIII) { printf("18\nDigita un numero Romano\n");}
(XIX) { printf("19\nDigita un numero Romano\n");}
(XX) { printf("20\nDigita un numero Romano\n");}
(XXI) { printf("21\nDigita un numero Romano\n");}
(XXII) { printf("22\nDigita un numero Romano\n");}
(XXIII) { printf("23\nDigita un numero Romano\n");}
(XXIV) { printf("24\nDigita un numero Romano\n");}
(XXV) { printf("25\nDigita un numero Romano\n");}
(XXVI) { printf("26\nDigita un numero Romano\n");}
(XXVII) { printf("27\nDigita un numero Romano\n");}
(XXVIII) { printf("28\nDigita un numero Romano\n");}
(XXIX) { printf("29\nDigita un numero Romano\n");}
(XXX) { printf("30\nDigita un numero Romano\n");}


. { printf("No es un numero romano, o esta mal escrito\nDigita un numero Romano\n");}

%%
int main(){

    printf("Digita un numero Romano\n");
    yylex();
    
}
