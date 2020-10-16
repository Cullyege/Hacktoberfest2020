import java.util.*;

public class Pattern_2
{
	public static void main(String[] args) {
		System.out.println("Pattern 2");
		
		Scanner scn = new Scanner(System.in);
		int number = scn.nextInt();
		
		int temp = number;
		
		for(int i = 1 ;i <= number;i++){
		     for (int j = 1;j <= temp ;j++){
			  System.out.print("*\t");
		     } 
		     temp--;
		     System.out.println();
		}
		scn.close();
	}
}

