import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		System.out.println("To display the digits in the given Number");
		
		Scanner scn = new Scanner(System.in);
		int number = scn.nextInt();
		
		int counter = 0;
		int temp = number;
		while(temp != 0){
		     temp /= 10;
		     counter++;
		}
		
		int divisor = (int)Math.pow(10,counter-1);
		
		while (divisor != 0){
		     int quotient = number/divisor;
		     System.out.println(quotient);
		     
		     number=number%divisor;
		     divisor=divisor/10;
		     
		}
	}
}


