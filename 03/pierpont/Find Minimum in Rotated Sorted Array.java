
public class number_ten {
	public static void mian(String[] args) {
		int[] s = {4,5,6,7,0,1,2,3};
		//int m = findMin(s);
		System.out.print("a");
	}
	
    public static int findMin(int[] nums) {
    	int a = nums[0];
    	for(int i = 1;i < nums.length;i++) {
    		if (a > nums[i]) {
    			a = nums[i];
    		}
    	}
		return a;
    }

}
