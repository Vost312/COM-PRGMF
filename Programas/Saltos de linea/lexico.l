%{
#include <stdio.h>
#include <stdlib.h>
int words=0;
int chars=0;
int lines=0;
%}
%option noyywrap
%%
[a-zA-Z]+ { words++; chars += strlen(yytext); }
[0-9]+ { words++; chars += strlen(yytext); }
\n { lines++; }
. { chars++; }
%%
int main(int argc, char **argv){
  FILE *fp;
   int c;
   fp = fopen("leer.txt","r");
   while(c = fgetc(fp)!=EOF) {
      if( feof(fp) ) {
         break;
      }
   }
   rewind(fp);
   yyin = fp;
yylex();
printf("Tenemos: %i lineas\n", lines);
   

}
