
public class Main
{
	public static void main(String[] args) {
		System.out.println("Hello World");
		
		Scanner scn = new Scanner(System.in);
          int t = scn.nextInt();
      
          for (int i=0;i<=t;i++){
          int n = scn.nextInt();
          
          int div = 2;
          while( div * div < =  n){
              if( n % div == 0){
                 break;
              }
            div++;
          }
        if(div * div > n ){
            System.out.println( n + "Is a Prime Number");
        }
        else{
            System.out.println(n + "Is not a prime number");
        }
      }
  
		
	}
	
}

