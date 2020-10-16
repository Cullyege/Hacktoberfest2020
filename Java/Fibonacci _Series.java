import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		System.out.println("Print Fibonacci Series");
		
		Scanner scn = new Scanner(System.in);
	     System.out.println("Enter the number to find the Fibonacci Series till that range:- ");
		int n = scn.nextInt();
		
		int n1 = 0;
		int n2 = 1;
		
		for (int i=0;i<n;i++){
		      System.out.println(n1);
		     int n3 = n1 + n2;
		     n1 = n2;
		     n2 = n3;
		} 
	}
}


