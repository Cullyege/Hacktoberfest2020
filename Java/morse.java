

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class morse {
    public static void main(String[] args) throws IOException{
        Scanner inputuser = new Scanner(System.in);
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        System.out.println("add your message ? ");
        // String pesan = inputuser.next(); kata
        String pesan = br.readLine();       //kalimat
     
        pesan = pesan.toLowerCase();
        clear ();
              if (pesan.contains("A")||pesan.contains("a")){
            pesan = pesan.replace("a", ".-\t");
            
        }
         if (pesan.contains("B") || pesan.contains("b")){
            pesan = pesan.replace("b", "-...\t");
            
        }

         if (pesan.contains("C") || pesan.contains("c")){
            pesan = pesan.replace("c", "-.-.\t");
            
        }
         if (pesan.contains("D") || pesan.contains("d")){
            pesan = pesan.replace("d", "-..\t");

        }
         if (pesan.contains("E") || pesan.contains("e")){
            pesan = pesan.replace("e", ".\t");
            
        }
         if (pesan.contains("F") || pesan.contains("f")){
            pesan = pesan.replace("f", "..-.\t");
            
        }
         if (pesan.contains("G") || pesan.contains("g")){
            pesan = pesan.replace("g", "--.\t");
            
        }
         if (pesan.contains("H") || pesan.contains("h")){
            pesan = pesan.replace("h", "....\t");
            
        }
         if (pesan.contains("I") || pesan.contains("i")){
            pesan = pesan.replace("i", "..\t");
            
        }
         if (pesan.contains("J") || pesan.contains("j")){
            pesan = pesan.replace("j", ".---\t");
            
        }
         if (pesan.contains("K") || pesan.contains("k")){
            pesan = pesan.replace("k", "-.-\t");
            
        }
         if (pesan.contains("L") || pesan.contains("l")){
            pesan = pesan.replace("l", ".-.\t");
            
        }
         if (pesan.contains("M") || pesan.contains("m")){
            pesan = pesan.replace("m", "--\t");
            
        }
         if (pesan.contains("N") || pesan.contains("n")){
            pesan = pesan.replace("n", "-.\t");
            
        }
         if (pesan.contains("O") || pesan.contains("o")){
            pesan = pesan.replace("o", "---\t");
            
        }
         if (pesan.contains("P") || pesan.contains("p")){
            pesan = pesan.replace("p", ".--.\t");
            
        }
         if (pesan.contains("Q") || pesan.contains("q")){
            pesan = pesan.replace("q", "--.-\t");
            
        }
         if (pesan.contains("R") || pesan.contains("r")){
            pesan = pesan.replace("r", ".-.\t");
            
        }
         if (pesan.contains("S") || pesan.contains("s")){
            pesan = pesan.replace("s", "...\t");
            
        }
         if (pesan.contains("T") || pesan.contains("t")){
            pesan = pesan.replace("t", "-\t");
            
        }
         if (pesan.contains("U") || pesan.contains("u")){
            pesan = pesan.replace("u", "..-\t");
            
        }
         if (pesan.contains("V") || pesan.contains("v")){
            pesan = pesan.replace("v", "...-\t");
            
        }
         if (pesan.contains("W") || pesan.contains("w")){
            pesan = pesan.replace("w", ".--\t");
            
        }
         if (pesan.contains("X") || pesan.contains("x")){
            pesan = pesan.replace("x", "-..-\t");
            
        }
         if (pesan.contains("Y") || pesan.contains("y")){
            pesan = pesan.replace("y", "-.--\t");
            
        }
         if (pesan.contains("Z") || pesan.contains("z")){
            pesan = pesan.replace("z", "--..\t");
            
        }

    
        

        if (pesan.contains(" ")){
            pesan = pesan.replace(" ", "| ");
        
        }

        System.out.println(pesan);

    }



    private static void clear() {
        try {
            if (System.getProperty("os.name").contains("linux")) {
                new ProcessBuilder("konsole", "home", "clear").inheritIO().start().waitFor();
            } else {
                System.out.println("\033\143");

            }
        } catch (Exception ex) {
            System.err.println("tidak bisa clearscreen");
        }
    }

}