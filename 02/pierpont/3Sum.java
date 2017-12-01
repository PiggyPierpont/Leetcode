import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class number_seven {
	public static void main(String[] args) {
		int[] s = {-1, 0, 1, 2, -1, -4};
		Arrays.sort(s); 
		List<List<Integer>> solution = threeSum(s);
		for(List<Integer> nums:solution) {
			System.out.print(nums);
		}
	}
	
    public static List<List<Integer>> threeSum(int[] nums) {
    	List<List<Integer>> solution =new ArrayList<>();
    	int q = 0;
    	for(int i = 0;i < nums.length;i++) {
    		for(int j = i + 1; j < nums.length;j++) {
    			for(int k = j + 1;k < nums.length;k++) {
    				if((nums[i] + nums[j] + nums[k]) == 0) {
    					solution.add(new ArrayList<Integer>());
    					solution.get(q).add(nums[i]);
    					solution.get(q).add(nums[j]);
    					solution.get(q).add(nums[k]);
    					q++;
    				}
    			}
    		}
    	}
		return solution;
    }
}
