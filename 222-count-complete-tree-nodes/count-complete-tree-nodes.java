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
    public int countNodes(TreeNode root) {
        if(root==null){
            return 0;
        }
      int leftheight=0;
      int rightheight=0;

      TreeNode left=root;
      TreeNode right=root;


      while(left!=null){
        leftheight++;
        left=left.left;
      }
      while(right!=null){
        rightheight++;
        right=right.right;
      }
      if(leftheight==rightheight){
        return (int ) (Math.pow(2,leftheight)-1);
      }
        return 1+countNodes(root.left)+countNodes(root.right);
    }
}