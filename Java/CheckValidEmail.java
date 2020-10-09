import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class CheckValidEmail {
    public  boolean isValidEmail(String email) {
        String emailRegex = "^[\\w\\d_+&*-]+(?:\\.[\\w\\d__+&*-]+)*@(?:[\\w\\d_-]+\\.)+[a-zA-Z]{2,7}$";
        Pattern p = Pattern.compile(emailRegex);
        Matcher m = p.matcher(email);
        return m.matches();
    }


    public static void main(String[] args) {
        CheckValidEmail c = new CheckValidEmail();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter email-id to check validity:");
        String email = sc.nextLine();
        if (c.isValidEmail(email))
            System.out.print("Valid Email ID");
        else
            System.out.print("Invalid Email ID");
    }
} 
