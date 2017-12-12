
public class number_one {
	public static void main(String[] args) {
		int[][] s = {{1,3,5,7},
				     {10,11,16,20},
				     {23,30,34,50}};
		boolean check = searchMatrix(s,3);
		System.out.print(check);
	}
    public static boolean searchMatrix(int[][] matrix, int target) {
    	int m = matrix.length;
    	int n = matrix[0].length;
    	boolean check = false;
    	
    	for(int i = 0;i < m;i++) {
    		if (target <= matrix[i][n - 1]) {
    			for (int j = 0;j < n;j++) {
    				if(target == matrix[i][j]) {
    					check = true;
    					break;
    				}
    			}
    			break;
    		}
    	}
		return check;
    }

}
