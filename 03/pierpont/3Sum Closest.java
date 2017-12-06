import java.util.ArrayList;

public class number_eight {
	public static void main(String[] args) {
		int[] s = {-1,2,1,-4};
		int target = threeSumClosest(s, 1);
		System.out.print(target);
		
	}
	
    public static int threeSumClosest(int[] nums, int target) {
    	int mini = 0;
    	for(int i = 0;i < nums.length;i++) {
    		for(int j = i + 1; j < nums.length;j++) {
    			for(int k = j + 1;k < nums.length;k++) {
    				int q = Math.abs(target - (nums[i] + nums[j] + nums[k]));
    				if (i == 0) {
    					mini = q;
    				} else {
    				mini = mini > q ? q : mini;
    				}
    			}
    		}
    	}
		return mini;
    }
}
