import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		System.out.println("Rotate the given Number:-");
		
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter the Number to Rotate");
		int num = scn.nextInt();
		System.out.println("Enter the Rotation Place");
		int k = scn.nextInt();
		
		int temp = num;
		int counter = 0;
		
		while(temp!=0){
		     temp = temp/10;
		     counter++;
		}
		
		k=k%counter;
		if(k < 0){
		     k+=counter;
		}
		
		
          int div =1;
		int mult = 1;
		for (int i=1;i<=counter;i++){
	      if(i <= k){
		     div = div*10;
		   }
		 else{
               mult = mult*10;
		    }
	    }       
		      int q = num / div;
		      int r = num % div;
		      
		      int rotate = r * mult + q;
		      System.out.println(rotate);
		      
		}
	}



