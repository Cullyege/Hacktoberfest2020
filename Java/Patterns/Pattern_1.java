import java.util.*;

public class Pattern_1
{
	public static void main(String[] args) {
		System.out.println("Pattern 1");
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter the rows for the stars:");
		int number = scn.nextInt();
		
		for (int i = 1;i <= number ;i++ ){
		     for (int j = 1;j <= i ;j++ ){
		          System.out.print("*\t");
		     }
		     System.out.println();
		} 
		scn.close();
	}
}

