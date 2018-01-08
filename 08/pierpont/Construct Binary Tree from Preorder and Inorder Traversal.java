import java.util.HashMap;

public class Solution {
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        if(inorder==null || preorder==null || inorder.length==0 || preorder.length==0)  
        {  
            return null;  
        }  
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();  
        for(int i=0;i<inorder.length;i++)  
        {  
            map.put(inorder[i],i);  
        }  
    	
        return helper(inorder,preorder,0,inorder.length-1, 0, preorder.length-1,map); 
    }
    
    private TreeNode helper(int[] inorder, int[] preorder, int inL, int inR, int preL, int preR, 
    		HashMap<Integer, Integer> map)  
    {  
        if(inL>inR || preL>preR)  
        	return null;  
        TreeNode root = new TreeNode(preorder[preL]);  
        int index = map.get(root.val);  
        root.left = helper(inorder,preorder,inL,index-1,preL + 1,preL+index-inL,map);  
        root.right = helper(inorder,preorder,index+1,inR,preR-(inR-index),preR,map);  
        return root;
    	
    }
    
    public class TreeNode {
        int val;
    	TreeNode left;
    	TreeNode right;
    	TreeNode(int x) { val = x; }
    }
}
