
public class number_four {
	public static void main(String[] args) {
		int[] s = {1, 2, 3, 1};
		int a = findPeakElement(s);
		System.out.println(a);
	}
	
    public static int findPeakElement(int[] nums) {
    	for (int i = 1;i < nums.length - 1;i++) {
    		 if ((nums[i - 1] < nums[i])&&(nums[i + 1] < nums[i])) {
    			 return i;
    		 }		
    	}
		return 0;
        
    }

}
