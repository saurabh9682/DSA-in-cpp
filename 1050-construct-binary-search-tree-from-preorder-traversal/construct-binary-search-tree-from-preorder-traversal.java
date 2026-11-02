/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int idx=0;
    public TreeNode bstFromPreorder(int[] preorder) {
        return build(preorder,Long.MIN_VALUE,Long.MAX_VALUE);
    }
    TreeNode build(int[] preorder,long min,long max){
        if(idx==preorder.length){
            return null;
        }
        int val=preorder[idx];
        //check value allowed range me hai ya nahi 
        if(val<=min || val>=max){
            return null;
        }
        idx++;
        TreeNode root=new TreeNode(val);
        root.left=build(preorder,min,val);
        root.right=build(preorder,val,max);
        return root;

    }
}