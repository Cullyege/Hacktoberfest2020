import java.util.*;

public class Pattern_9
{
     public static void main (String[] args) {
          System.out.println("Pattern 9 The Cross");
          
          Scanner scn = new Scanner(System.in);
          int num = scn.nextInt();
          
          for (int i=1;i <= num ;i++ ){
               for (int j=1;j <= num;j++ ){
                    if(i+j == num+1||i==j){
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


