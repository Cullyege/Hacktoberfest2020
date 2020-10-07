import java.util.*;

public class PhonebookHashMap {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		Map <String, String> book = new HashMap <String, String>();
		
		for(int i = 1;;i++) {
			
			System.out.println("\nWelcome to PhoneBook\n Enter 1 to add contact\n Enter 2 to search contact\n Enter 3 to exit\n");
			
			int n = sc.nextInt();
			sc.nextLine();
		
			if(n == 1) {
				System.out.println("Enter name: ");
				
				String name = sc.nextLine();
				System.out.println("Enter Number: ");
				String number = sc.nextLine();
				
				book.put(name,number);
				
				System.out.println("Number "+ number + " is saved by name "+name +"\n");
			}
			
			if(n == 2) {
				System.out.println("Enter name: ");
				String key = sc.nextLine();
				System.out.println("Number: "+book.get(key)+"\n");
			}
			
			if(n == 3) {break;}
		}
		sc.close();
	}
}
