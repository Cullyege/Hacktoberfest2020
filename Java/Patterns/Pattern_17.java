import java.util.*;

public class Pattern_17 {

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    
    int nsp = 2 * n - 3;
    int nst = 1;
    for(int i = 1; i <= n; i++){
        int ival = 1;

        for(int j = 1; j <= nst; j++){
            System.out.print(ival + "\t");
            ival++; 
        }

        for(int j = 1; j <= nsp; j++){
            System.out.print("\t");
        }

        ival = i < n? ival - 1: ival - 2;
        nst = i < n? nst: nst - 1;
        for(int j = 1; j <= nst; j++){
            System.out.print(ival + "\t");
            ival--; 
        }

        nst++;
        nsp -= 2;

        System.out.println();
    }
   scn.close();
 }
}