import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		System.out.println("This is a prime number program which specifies the number is prime number or not");
		
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter the number you want to check that it prime or not");
		int number = scn.nextInt();
		int divisor = 2;
		boolean flag = true;
		
		while(divisor<number-1){
		     if(number%2==0)
		     {
		          flag = false;
		     }
		  divisor++;   
		}
		
		if(flag == true){
		     System.out.println("The Number Is prime.");
		}
		else{
		     System.out.println("The Number is Not prime");
		}
	}
	
}

