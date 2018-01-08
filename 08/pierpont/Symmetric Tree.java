public class Solution {
	boolean isSymmetric(TreeNode root) {
		return (root != null) ? compRoot(root.left,root.right) : true;   
	}
	
	public boolean compRoot(TreeNode left,TreeNode right) {
		if ((left == null) && (right == null)) {
			return true;
		} else if ((left != null && right == null) || 
				(left == null && right != null)) {
			return false;
		} else {
			return (left.val == right.val) && compRoot(left.left,right.right) && 
					compRoot(left.right,right.left);
		}	
	}
    
    public class TreeNode {
        int val;
    	TreeNode left;
    	TreeNode right;
    	TreeNode(int x) { val = x; }
    }
}
