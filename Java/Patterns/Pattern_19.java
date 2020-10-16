import java.util.*;

public class Pattern_19
{
	public static void main(String[] args) {
		System.out.println("Pattern 5 (Diamond)");
		
		Scanner scn = new Scanner(System.in);
		int num = scn.nextInt();
		
		int no_of_spaces = num/2;
		int no_of_stars = 1;
		int val = 1;
	     for (int i = 1;i <= num ;i++ ){
	          for (int j = 1;j <= no_of_spaces ;j++ ){
	               System.out.print("\t");
	          } 
	          
	          for (int j = 1;j <= no_of_stars ;j++ ){
	               System.out.print(val + "\t");
	          } 
	          
	          if(i <= num /2){
	               no_of_spaces--;
	               no_of_stars+=2;
	          }else{
	               no_of_spaces++;
	               no_of_stars-=2;
              }
              val++;
	          System.out.println();
		 } 
		 scn.close();
	}
}

