import java.util.*;

public class Pattern_5
{
	public static void main(String[] args) {
		System.out.println("Pattern 5 (Diamond)");
		
		Scanner scn = new Scanner(System.in);
		int num = scn.nextInt();
		
		int no_of_spaces = num/2;
		int no_of_stars = 1;
		
	     for (int i = 1;i <= num ;i++ ){
	          for (int j = 1;j <= no_of_spaces ;j++ ){
	               System.out.print("\t");
	          } 
	          
	          for (int j = 1;j <= no_of_stars ;j++ ){
	               System.out.print("*\t");
	          } 
	          
	          if(i <= num /2){
	               no_of_spaces--;
	               no_of_stars+=2;
	          }else{
	               no_of_spaces++;
	               no_of_stars-=2;
	          }
	          System.out.println();
		 } 
		 scn.close();
	}
}

