import java.util.*;
public class Pattern_10
{
  public static void main (String[]args)
  {
    System.out.println ("Pattern 10");
    Scanner scn = new Scanner(System.in);
    int num = scn.nextInt();
    
    int no_outer_space = num / 2;
    int no_inner_space = -1;
    for (int i = 1; i <= num; i++)
      {
	for (int j = 1; j <= no_outer_space; j++)
	  {
	    System.out.print ("\t");
	  }
	System.out.print ("*\t");

	for (int j = 1; j <= no_inner_space; j++)
	  {
	    System.out.print ("\t");
	  }
	if (i > 1 && i < num)
	  {
	    System.out.print ("*\t");
	  }

	if (i <= num / 2)
	  {
	    no_outer_space--;
	    no_inner_space += 2;
	  }
	else
	  {
	    no_outer_space++;
	    no_inner_space -= 2;
	  }

	System.out.println ();
      }
    scn.close();
  }
}

