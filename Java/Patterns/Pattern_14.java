import java.util.*;

public class Pattern_14
{
	public static void main(String[] args) {
		System.out.println("Number Pattern 1");
		
		Scanner scn = new Scanner(System.in);
		int number = scn.nextInt();
		
		int temp = number;
		
		for (int i = 1;i <= number ;i++ ){
		     for (int j=1;j <= i  ;j++ ){
		          System.out.print(temp +"\t");
		         temp++;
		     }
		   System.out.println();
        } 
        scn.close();
	}
}

