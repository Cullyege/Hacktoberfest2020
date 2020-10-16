import java.util.Scanner;
public class Main{
    public static void main (String[] args) {
        Scanner scn = new Scanner(System.in);
        
        int a= scn.nextInt();
        int b= scn.nextInt();
        
        System.out.println("Hello");
        
        if (a < b) {
            System.out.println("In If Statement when the condition is true.");
        }
        else{
            System.out.println("In else Statement when the condition is false.");
       }
       System.out.println("Hello There , Bye");
    }
}
