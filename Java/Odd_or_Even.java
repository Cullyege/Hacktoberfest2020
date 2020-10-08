import java.util.Scanner;

class CheckEvenOdd
{
  public static void main(String args[])
  {
    int num;
    System.out.println("Enter an Integer number:");

    //The input provided by user is stored in num
    Scanner input = new Scanner(System.in);
    num = input.nextInt();

    /* If number is divisible by 2 then it's an even number
     * else odd number*/
    if ( num % 2 == 0 )
        System.out.println("Entered number is even");
     else
        System.out.println("Entered number is odd");

    /*
     * Another way to check if a number is odd or even is to use Bits 
     * A number (say 5, which is odd) when AND with 1 gives 1. 
     * Whereas an even number will give 0.
     * This method is a little faster than using Modulo operator as it works 
     * directly on bits.
     */
    if ((num & 1) == 1) System.out.println("Entered Number is Odd");
    else System.out.println("Entered number is Even");  
  }
}