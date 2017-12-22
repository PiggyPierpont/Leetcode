
public class Solution {
	public static void main(String[] args) {
		boolean ispower = isPowerOfTwo(666);
		System.out.println(ispower);
		
	}
    public static boolean isPowerOfTwo(int n) {
    	return ((n & (n -1)) == 0);
    }
}
