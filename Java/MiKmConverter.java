import java.util.Scanner;

public class MiKmConverter {
    public static void main(String args[]) {
        int choice;
        double val;
        Scanner input = new Scanner(System.in);
        do {
            System.out.println("Please select:");
            System.out.println("1 : Convert miles to kilometers");
            System.out.println("2 : Convert kilometers to miles");
            choice = input.nextInt();
        }while(!(choice == 1 || choice == 2));

        if(choice == 1) {
            System.out.println("==[Convert miles to kilometers]==");
            System.out.println("Please input miles :");
            val = input.nextDouble();
            System.out.println(val + " miles is equal to "+val*1.60934+" kilometers");
        } else if (choice == 2) {
            System.out.println("==[Convert kilometers to miles]==");
            System.out.println("Please input kilometers :");
            val = input.nextDouble();
            System.out.println(val + " kilometers is equal to "+val/1.60934+" miles");
        }
    }
}
