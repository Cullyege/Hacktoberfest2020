import java.util.Scanner;
class Factorial{  
public static void main(String args[]){  
int n,i,fact=1;
System.out.println("Enter a number:");
Scanner in = new Scanner(System.in);
n = in.nextInt();
for(i=1;i<=n;i++){    
      fact=fact*i;    
  }    
  System.out.println("Factorial is: "+fact);    
 }  
}  
