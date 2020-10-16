import java.util.Scanner;

public class Main{
     public static void main (String[] args) {
          
          Scanner scn = new Scanner(System.in);
          System.out.println("Enter Your Name:-");
          String name = scn.nextLine();
          System.out.println("Enter Your Age:-");
          int age = scn.nextInt();
          
          if (age <= 11){
               System.out.println("HeY There" + " " + name + " "  +  "you are a child.");
          } 
          else if (age >= 12 && age <= 17){
               System.out.println("HeY There" + " "  + name + " "  + "you are a Teenager.");
          } 
          else if (age >= 18 && age <= 40){
               System.out.println("HeY There" + " "  + name + " "  + "you are an Adult.");
          } 
          else if (age >= 41 && age <= 60){
               System.out.println("HeY There" + " "  + name+ " "  + "you are nor Child , nor Teenager, nor Adult, You are a gentle-person by soon getting old.");
          } 
          
          else{
               System.out.println("HeY There" + " "  + name + " "  + "Sorry to say Sir/Ma'am, You are old");
          } 
          
}
}

