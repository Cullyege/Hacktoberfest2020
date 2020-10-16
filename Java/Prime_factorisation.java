import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		System.out.println("Prime Facorisation of a Number");
		
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter the number for which you want prime Facorisation ");
		int num = scn.nextInt();
		
		for (int i=2;i*i<=num;i++){
		     while(num % i == 0){
		          System.out.println(i+" ");
		          num = num / i;
		     }
		  System.out.println(num);
		} 
		
		
	}
}

