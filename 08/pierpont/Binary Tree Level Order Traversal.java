import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

	class Solution {
	    public List<List<Integer>> levelOrder(TreeNode root) {
	    	List<List<Integer>> list = new ArrayList<List<Integer>>();
	    	if (root == null) {
	    		return list;
	    	}
	    	
	    	LinkedList<TreeNode> queue = new LinkedList<TreeNode>();
	    	queue.add(root);
	    	int curLevCnt = 1;
	    	int nextLevCnt = 0;
	    	ArrayList<Integer> levelList = new ArrayList<>();
	    	
	    	while(!queue.isEmpty()) {
	    		TreeNode cur = queue.poll();
	    		curLevCnt--;
	    		levelList.add(cur.val);
	    		
	    		if(cur.left != null) {
	    			queue.add(cur.left);
	    			nextLevCnt++;
	    		}
	    		
	    		if(cur.right != null) {
	    			queue.add(cur.left);
	    			nextLevCnt++;
	    		}
	    		
	    		if(curLevCnt == 0) {
	    			curLevCnt = nextLevCnt;
	    			nextLevCnt = 0;
	    			list.add(levelList);
	    			levelList = new ArrayList<>();
	    		}
	    	}
			return list;
	    }
	    
		public class TreeNode {
			 int val;
			 TreeNode left;
			 TreeNode right;
			 TreeNode(int x) { val = x; }
		}
	}
