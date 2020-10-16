import java.util.*;

public class Pattern_7
{
     public static void main (String[] args) {
          System.out.println("Pattern 7 Diagonal");
          
          Scanner scn = new Scanner(System.in);
          int num = scn.nextInt();
          
          for (int i=1;i <= num ;i++ ){
               for (int j=1;j <= i;j++ ){
                    if(j == i){
                         System.out.print("*\t");
                    }else{
                         System.out.print("\t");
                    }
               } 
          System.out.println();
          } 
          scn.close();
     }
}
