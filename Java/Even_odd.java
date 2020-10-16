import java.util.Scanner;

public class Main{
     public static void main (String[] args) {
          
          Scanner scn = new Scanner(System.in);
          int num = scn.nextInt();
          
          if (num%2==0){
               System.out.println("You are In because you are an even Number");
          } 
          
          else{
               System.out.println("You are Out because you are an odd number");
          }
     }
}
