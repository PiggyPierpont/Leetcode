
public class number_one {
	public static void main(String[] args) {
		int[] s = {2,1,5,6,2,3};
		int h = largestRectangleArea(s);
		System.out.print(h);
	}
	
    public static int largestRectangleArea(int[] heights){
    	int big  = heights[0];
    	
    	for(int i = 0;i < heights.length;i++) {
    		int a = i - 1;
    		int b = i + 1;
    		int length = 1;
    		
    		while (a >= 0) {
    			if (heights[a] >= heights[i]) {
    				length++;
    				a--;
    			} else {break;}
    		}
    		
    		while (b < heights.length) {
    			if (heights[b] >= heights[i]) {
    				length++;
    				b++;
    			} else {break;}
    		}
    		
    		
    		if (big < heights[i] * length) {
    			big = heights[i] * length;
    		}
    		
    	}
		return big;
    }
}
