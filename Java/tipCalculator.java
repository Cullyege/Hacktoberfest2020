import java.math.BigDecimal;
import java.text.NumberFormat;
import java.util.Scanner;

public class tipCalculator {

    public static void main(String[] args) {


        //Tip Calculator Application

        //Add Scanner and choice Variable
        Scanner sc = new Scanner(System.in);
        String choice = "y";


        //Welcome
        System.out.println("Tip Calculator");
        System.out.println();

        while (choice.equalsIgnoreCase("y")) {

            //Collect Cost of Meal
            System.out.print("Cost of Meal: ");
            BigDecimal meal = sc.nextBigDecimal();
            System.out.println();

            //Number Formatting
            NumberFormat pf = NumberFormat.getPercentInstance();
            NumberFormat cf = NumberFormat.getCurrencyInstance();
            cf.setMaximumFractionDigits(2);
            pf.setMaximumFractionDigits(2);

            for (double t = .15; t <= .25; t +=.05) {
                BigDecimal tip = new BigDecimal(t);

                //Buisness Logic
                BigDecimal tAmount = meal.multiply(tip);
                BigDecimal fAmount = tAmount.add(meal);
                //Display
                System.out.println(pf.format(tip));
                System.out.println("Tip Amount: " +cf.format(tAmount));
                System.out.println("Total Amount: " +cf.format(fAmount));
                System.out.println();



            }

            System.out.print("Continue? (y/n): ");
            choice = sc.next();
            System.out.println();

        }

        System.out.println("Goodbye!");
        sc.close();
    }
}
