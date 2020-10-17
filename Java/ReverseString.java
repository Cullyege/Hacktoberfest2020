public class MainClass {
	public static void main(String[] args) {  
    	System.out.println(StringFormatter.reverseString("Hello, world!"));  
    	System.out.println(StringFormatter.reverseString("This is an example of reversing a string."));      
    }  
	
	public class StringFormatter {
		public static String reverseString(String str) {
    		char ch[] = str.toCharArray();
    		String rev = "";
    		for(int i = ch.length - 1; i >= 0; i--){
        		rev += ch[i];  
    		}  
    		return rev;
		}
	}
}  
