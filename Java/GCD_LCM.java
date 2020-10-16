import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		System.out.println("GCD and LCM");
		
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter 1st number:");
		int num1 = scn.nextInt();
		
		System.out.println("Enter 2nd number:");
		int num2 = scn.nextInt();
		
		int temp1 = num1;
		int temp2 = num2;
		
		while(temp1 % temp2 != 0){
		     int rem = temp1 % temp2;
		     temp1 = temp2;
		     temp2 = rem;
		}
	    
	    int GCD = temp2;
	    int LCM = (num1 * num2)/GCD;
	    
	    System.out.println("Greatest Common Divisor:"+GCD);
	    System.out.println("Lowest Common Multiple:"+LCM);
	    
	}
}

