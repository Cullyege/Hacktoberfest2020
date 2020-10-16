import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		System.out.println("To reverse the given number");
		
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter the number of your choice which is to be reversed");
		int number = scn.nextInt();
		
		while(number!=0){
		     
		     int digit = number % 10;
		     number=number/10;
		     System.out.println(digit);
		}
	}
}

