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
    TreeNode Head=null;
    TreeNode curr=null;
    public TreeNode increasingBST(TreeNode root) {
        inorder(root);
        return Head;
    }
    void inorder(TreeNode root){
        if(root==null)return;
        inorder(root.left);
        root.left=null;
        if(Head==null){
            Head=root;
            curr=root;
        }
        else{
            curr.right=root;
            curr=root;
        }
        inorder(root.right);
    }
}