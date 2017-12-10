
public class number_two {
	public static void main(String[] args) {
		int [][] s = {{0,0,0,0},
		              {1,1,1,1},
		              {1,1,1,0},
		              {0,1,0,0}};
		
		int big = maximalRectangle(s);
		System.out.print(big);
		
	}
	
    public static int maximalRectangle(int[][] matrix) {
		int m = matrix.length;
		int n = matrix[0].length;
		int big = 0;
		
		for (int i = 0;i < m;i++) {
			for (int j = 0;j < n;j++) {
				if (matrix[i][j] != 0) {
					int height = 0;
					int length = 1;
					
					int i2 = i;
					while (i2 < m &&
							matrix[i2][j] != 0) {
						height++;
						i2++;}
					
					int a = j - 1;
					int b = j + 1;
					
					while (a >= 0) {
						int height1 = 0;
						int i3 = i;
						
						while (i3 < m && 
								matrix[i3][a] != 0) {
							height1++;
							i3++;}
						
						if (height1 >= height) {
		    				length++;
		    				a--;
		    			} else {break;}
		    		}
		    		
					while (b < n) {
						int height2 = 0;
						int i4 = i ;
						
						while (i4 < m && 
								matrix[i4][b] != 0) {
							height2++;
							i4++;}
						
		    			if (height2 >= height) {
		    				length++;
		    				b++;
		    			} else {break;}
		    		}
		    		
					if (big < height * length) {
		    			big = height * length;
		    		}
				}
			}
		}
		return big;
        
    }
}
