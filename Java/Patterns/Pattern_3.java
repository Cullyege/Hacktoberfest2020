import java.util.Scanner;

public class Pattern_3
{
	public static void main(String[] args) {
		System.out.println("Pattern 3");
		
		Scanner scn = new Scanner(System.in);
		int num = scn.nextInt();
		
		int no_of_spaces = num - 1;
		int no_of_stars = 1;
		
		for (int i = 1;i <= num ;i++ ){
		     for (int j = 1;j <= no_of_spaces ; j++ ){
		          System.out.print("\t");
		     } 
		     
		     for (int j = 1;j <= no_of_stars ; j++ ){
		          System.out.print("*\t");
		     } 
		     
		    no_of_spaces--;
		    no_of_stars++;
		    System.out.println();
		} 
		scn.close();
	}
}

