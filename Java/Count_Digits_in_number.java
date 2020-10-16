import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		System.out.println("This program counts the number in the given digit:-");
		
		Scanner scn = new Scanner(System.in);
		int number = scn.nextInt();
		
		int counter = 0;
		
		while(number!=0){
		     number /= 10;
		     counter++;
		} 
		System.out.println("The number have"+" "+counter+" "+"Digits");
	}
}

