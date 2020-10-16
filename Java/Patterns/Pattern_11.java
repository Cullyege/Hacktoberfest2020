import java.util.*;

public class Pattern_11
{
	public static void main(String[] args) {
		System.out.println("Number Pattern 2");
		
		Scanner sc = new Scanner(System.in);
		int num =  sc.nextInt();
		
		int var = 1;
		
		for(int i = 1;i <= num;i++){
		     for(int j= 1;j <= i;j++){
		          System.out.print(var + "\t");
		          var++;
		     }
		     System.out.println();
        }
        sc.close();
	}
}

