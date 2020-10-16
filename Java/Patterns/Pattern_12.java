import java.util.*;

public class Pattern_12
{
	public static void main(String[] args) {
		System.out.println("Fibonacci Pattern");
		
		Scanner sc = new Scanner(System.in);
		int number = sc.nextInt();
		
		int n1 = 0;
	     int n2 = 1;
	     
	     for (int i = 1;i <= number ;i++ ){
	          for (int j = 1;j <= i ;j++ ){
	               System.out.print(n1+"\t");
	               int n3 = n1+n2;
	               n1=n2;
	               n2=n3;
	          } 
	      System.out.println();
         }
         sc.close();
	}
}

