import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		System.out.println("Inverse of a Number");
		System.out.println("Enter The Number you want to Inverse: -");
		Scanner scn = new Scanner(System.in);
		int number = scn.nextInt();
		
		int inv = 0;
		int actual_pos = 1;
		
		while(number != 0){
		     int actual_digit = number % 10;
		     int inverted_digit = actual_pos;
		     int inverted_pos = actual_digit;
		     
		     inv += inverted_digit*(int)Math.pow(10 , inverted_pos-1);
		     number=number/10;
		     actual_pos++;
		}
		System.out.println(inv);
	}
}

