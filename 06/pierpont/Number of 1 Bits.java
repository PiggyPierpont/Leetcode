
public class Solution {
	public static void main(String[] args) {
		int a = hammingWeight(666);
		System.out.println(a);
		
	}
    public static int hammingWeight(int n) {
        int result = 0;
        for (int i = 0;i < 32;i++) {
        	result += (n & 1);
        	n = n >> 1;
        }
        return result;
    }
}
