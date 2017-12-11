
public class number_two {
	public static void main(String[] args) {
		int[] s = {5, 7, 7, 8, 8,10};
		int[] n = Solution.searchRange(s,8);
		System.out.print(n[0] + "and" + n[1]);
 	}
	
	static class Solution {
	    public static int[] searchRange(int[] nums, int target) {
	    	
	    	int m = Dicfind(0,nums.length,nums,target);
	    	int n = Dicfind(m + 1,nums.length,nums,target);
	    	int[] s = {m,n};
			return s;
	    }
	    
	    public static int Dicfind(int min,int max,int a[],int value) {
	    	int mid = (min + max) / 2;
	    	if (a[mid] > value) {
	    		return Dicfind(min,mid-1,a,value);
	    	} else if (a[mid] < value) {
	    		return Dicfind(mid+1,max,a,value);
	    	} else {
	    		return mid;
	    	}
	    	
	    }
	}
}
