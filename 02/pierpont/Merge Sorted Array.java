
public class number_five {
	public static void main(String[] args) {
		int[] nums1 = {1,3,6,7,9,0,0,0,0,0,0};
		int[] nums2 = {2,4,7,8,0,0};
		merge(nums1,5,nums2,4);
		for(int a = 0;a < 9;a++) {
			System.out.print(nums1[a]);
		}
	}
	
    public static void merge(int[] nums1, int m, int[] nums2, int n) {
    	m--;
    	n--;
        for(int i = m + n + 1;i >= 0; i--) {
        	if (m < 0||n < 0) {
        		if (m < 0) {
        			nums1[i] = nums2[n];
        			n--;
        		} else if (n < 0) {
        			nums1[i] = nums1[m];
        			m--;
        		}
        	}  else {
        		if (nums1[m] > nums2[n]) {
            		nums1[i] = nums1[m];
            		m--;
            	} else if (nums1[m] < nums2[n] ||
            			nums1[m] == nums2[n]) {
            		nums1[i] = nums2[n];
            		n--;
            	}
           }
      }
   }
}