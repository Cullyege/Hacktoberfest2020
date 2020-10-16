
import java.util.Scanner;

public class Main {
    public static void main(final String[] args) {

        Scanner sc = new Scanner(System.in);

        int principal = sc.nextInt();
        int rate = sc.nextInt();
        int time = sc.nextInt();

        int si = (principal * rate * time);

        System.out.println(si);
    }
}
