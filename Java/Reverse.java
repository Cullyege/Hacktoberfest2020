public class Reverse
{
	
public static void main(string args[])
{

Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
System.out.println("Enter a number:");
int reverse=0;


while(i!=0)
{

int remainder=i%10;
reverse=reverse*10+remainder;
n/=10;
System.out.println("Reverse of a number:",+reverse);

}
sc.close();
}
}