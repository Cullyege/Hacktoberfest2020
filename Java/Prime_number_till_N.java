import java.util.Scanner;

public class Main{
     public static void main (String[] args) {
          
          System.out.println("This is a program to retrive the prime number till N");
          
          Scanner scn = new Scanner(System.in);
          int low = scn.nextInt();
          int high = scn.nextInt();
    
          for(int num = low; num <= high; num++){
          int div = 2;
          while(div * div <= num){
            if(num % div == 0){
                break;
            }
            div++;
          }
         
        if(div * div > num){
            System.out.println(num);
        }
    }
     }
}
