
public class number_three {
	public static void main(String[] args) {
		int s = 33433;
		boolean check = isPalindrome(s);
		System.out.print(check);
	}
	
    public static boolean isPalindrome(int x) {
    	int a = x;
    	int b = 0;
    	while (a != 0) {
    		int n = a % 10;
    		a /= 10;
    		b = (b * 10) + n;
    	}
    	if (b == x) {
    		return true;
    	} else {return false;}
        
    }
}
