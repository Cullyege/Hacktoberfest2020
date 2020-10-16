import java.util.*;
  
  public class Main {
  
  	  public static void main(String[] args) {
  	  	Scanner scn = new Scanner(System.in);
          int a = scn.nextInt();
          int b = scn.nextInt();
          int c = scn.nextInt();
  
          int maximum = a;
          if(b >= maximum)
              maximum = b;
  
          if(c >= maximum)
              maximum = c;
  
          if(maximum == a){
              System.out.println((b * b + c * c) == (a * a));
          } else if(maximum == b){
              System.out.println((a * a + c * c) == (b * b));
          } else {
              System.out.println((a * a + b * b) == (c * c));
          }
  	  }
  }
