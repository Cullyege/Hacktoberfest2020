import java.util.*;
class Un {
    public static final String reg = "([a-zA-Z])(\\w){7,29}";
}
class TestClass{
    private static final Scanner scan = new Scanner(System.in);
    
    public static void main(String[] args) {
        int n = Integer.parseInt(scan.nextLine());
        String[] ans = new String[n];
        for(int i=0;i<n;i++) {
            String userName = scan.nextLine();

            if (userName.matches(Un.reg)) {
                ans[i] = "valid";
            } else {
                ans[i]  = "Invalid";
            }           
        }
        for(int i=0;i<n;i++)
        {
			System.out.println(ans[i]);
		}
    }
}

