import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class number_nine {
	public static void main(String[] args) {
		int[] s = {1, 0, -1, 0, -2, 2};
		Arrays.sort(s);
		List<List<Integer>> solution =fourSum(s, 0);
		for(List<Integer> nums:solution) {
			System.out.print(nums);
		}
	}
	
    public static List<List<Integer>> fourSum(int[] nums, int target) {
    	List<List<Integer>> solution =new ArrayList<>();
    	int q = 0;
    	for(int i = 0;i < nums.length;i++) {
    		for(int j = i + 1; j < nums.length;j++) {
    			for(int k = j + 1;k < nums.length;k++) {
    				for(int p = k + 1;p < nums.length;p++) {
    					if((nums[i] + nums[j] + nums[k] + nums[p]) == target) {
        					solution.add(new ArrayList<Integer>());
        					solution.get(q).add(nums[i]);
        					solution.get(q).add(nums[j]);
        					solution.get(q).add(nums[k]);
        					solution.get(q).add(nums[p]);
        					q++;
        				}
    				}
    			}
    		}
    	}
    	
    	for (int i = 0; i <solution.size()-1; i++) {
            for (int j = solution.size()-1; j >i; j--) {
                if (solution.get(j).equals(solution.get(i))) {
                    solution.remove(j);
                }
            }
        }
		return solution;
    }

}
