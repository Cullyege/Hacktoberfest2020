import java.util.*;

public class Pattern_16 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int num = scn.nextInt();
        int stars = 1;
        int spaces = num / 2;
        int oval = 1;
        for(int i = 1; i <= num; i++){
            int val = oval;
            for(int j = 1;  j <= spaces; j++){
                System.out.print("\t");
            }
            for(int j = 1;  j <= stars; j++){
                System.out.print(val + "\t");
                if(j <= stars / 2){
                    val++;
                }else{
                    val--;
                }
            }
            System.out.println();
            if(i <= num / 2){
                oval++;
                stars += 2;
                spaces--;
            }else{
                oval--;
                stars -= 2;
                spaces++;
            }
        }
        scn.close();
    }
}