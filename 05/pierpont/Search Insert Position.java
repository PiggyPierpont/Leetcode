
public class number_three {
	public static void main(String[] args) {
		int[] s = {1,3,5,6};
		
		System.out.println(searchInsert(s,5));
		System.out.println(searchInsert(s,2));	
		System.out.println(searchInsert(s,7));
		System.out.println(searchInsert(s,0));
	}
    public static int searchInsert(int[] nums, int target) {
    	for (int i = 0;i < nums.length;i++) {
    		if (nums[i] == target ||
    				nums[i] > target) {
    			return i;}
    		
            if (i == nums.length - 1) {
    			return i + 1;
    		}
    	}
		return target;
    }
}
