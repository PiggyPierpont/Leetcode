
public class Solution {
	public static void main(String[] args) {
		int[] s = {9,6,4,2,3,5,7,0,1};
		int a = missingNumber(s);
		System.out.print(a);
		
	}
    public static int missingNumber(int[] nums) {
    	int a = 0;
    	for (int i = 0;i < nums.length;i++) {
    		a ^= nums[i] ^ (i + 1);
    	}
    	return a;
    }
}
