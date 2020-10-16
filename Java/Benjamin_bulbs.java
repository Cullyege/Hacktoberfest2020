import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		System.out.println("The Curious Case of Benjamin Bulbs:");
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter The Number OF Bulbs:");
		int nob = scn.nextInt();
		
		for (int n=1;n*n<=nob;n++){
		     System.out.println(n * n);
		} 
	}
}

