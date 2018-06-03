import java.util.Scanner;
import java.util.StringTokenizer;

public class Letras{

   public static void main(String[] args) {
      // TODO Apéndice de método generado automáticamente
      Scanner entrada = new Scanner (System.in);
      String texto;
      //PETICION DE DATOS
      System.out.println("Introduzca un texto para calcular el numero de vocales y consonantes");
      texto = entrada.nextLine();
      
      //ALMACENAR TEXTO EN UN ARRAY DE CHAR
      
      char[] textocaracter = texto.toCharArray();
      
      //SABER NUMERO DE VOCALES Y CONSONANTES
      StringTokenizer palabra = new StringTokenizer(texto);
      int i;
      int longitud = textocaracter.length;
      int voc = 0;
      int esp = 0;
      int consonantes;
      for(i=0;i<longitud;i++)
      {
         if(textocaracter[i]=='a' || textocaracter[i]=='e' || textocaracter[i]=='i' || textocaracter[i]=='o' || textocaracter[i]=='u')
         {
            voc++;
         } else if (textocaracter[i]== ' ') {                  
                  esp++;
              }
         
      }
         consonantes=longitud-voc-esp;
         System.out.println("El numero de vocales son: " +voc);
         System.out.println("El numero de consonantes son: " +consonantes);
         System.out.println("El numero de espacios son: " +esp);
         System.out.println("El numero de palabras es: " +palabra.countTokens());
      }
   }
