import java.util.Scanner; 
import java.util.LinkedList;

public class RomanoAArabigo {
   
      public static int NumRoman(String numeroRomano){
         int numero = 0, 
             aux=0;         
//Aqui se transforma de Romano a Arabigo
if (numeroRomano.charAt(0) == 'M')
    numero = numero + 1000;

if (     numeroRomano.contains("CM")){
    numero = numero+ 900;
}else
    if ( numeroRomano.contains("DCCC")){
        numero = numero + 800;
    }else
        if (numeroRomano.contains("DCC")){
            numero = numero + 700;
        }else
            if (numeroRomano.contains("DC")){
               numero = numero + 600;
            }else
                if (numeroRomano.contains("CD")){
                   numero = numero + 400;
                }else
                    if (numeroRomano.contains("D")){
                        numero = numero + 500;
                    }else
                        if (numeroRomano.contains("CCC")){
                            numero = numero + 300;
                        }else
                            if (numeroRomano.contains("CC")){
                               numero = numero + 200;
                            }else
                                aux = numeroRomano.indexOf("C");
                                if (aux != -1 && (numeroRomano.indexOf("I", aux-1)) == -1){
                                    numero = numero + 100;
                           }

if (     numeroRomano.contains("XC")){
    numero = numero+ 90;
}else
    if ( numeroRomano.contains("LXXX")){
        numero = numero + 80;
    }else
        if (numeroRomano.contains("LXX")){
            numero = numero + 70;
        }else
            if (numeroRomano.contains("LX")){
               numero = numero + 60;
            }else
                if (numeroRomano.contains("XL")){
                   numero = numero + 40;
                }else
                    if (numeroRomano.contains("L")){
                        numero = numero + 50;
                    }else
                        if (numeroRomano.contains("XXX")){
                            numero = numero + 30;
                        }else
                            if (numeroRomano.contains("XX")){
                               numero = numero + 20;
                            }else
                                aux = numeroRomano.indexOf("X");
                                if (aux != -1 && (numeroRomano.indexOf("I", aux-1)) == -1){
                                    numero = numero + 10;
                           }


if (     numeroRomano.contains("IX")){
    numero = numero+ 9;
}else
    if ( numeroRomano.contains("VIII")){
        numero = numero + 8;
    }else
        if (numeroRomano.contains("VII")){
            numero = numero + 7;
        }else
            if (numeroRomano.contains("VI")){
               numero = numero + 6;
            }else
                if (numeroRomano.contains("IV")){
                   numero = numero + 4;
                }else
                    if (numeroRomano.contains("V")){
                        numero = numero + 5;
                    }else
                        if (numeroRomano.contains("III")){
                            numero = numero + 3;
                        }else
                            if (numeroRomano.contains("II")){
                               numero = numero + 2;
                            }else
                                if (numeroRomano.contains("I")){
                                   numero = numero + 1;
                           }
   return numero;
}
    public static void main(String args[]) {
      
      LinkedList cola = new LinkedList();
      //Se inicializa la variable para el scan
      String numeroRomano="";
      Scanner teclado = new Scanner (System.in);
      
      System.out.print("Introduzca un número romano en mayusculas: ");
      numeroRomano = teclado.nextLine();
      cola.offer(numeroRomano);
      
      
     /* while(!cola.isEmpty()) {
      
        //NumRoman(numeroRomano);
        System.out.println(NumRoman(numeroRomano);
        cola.poll();
      }
      */
      System.out.println(NumRoman(numeroRomano));
            
   }
}