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
    public int rangeSumBST(TreeNode root, int low, int high) {

        // Empty node
        if(root == null) {
            return 0;
        }

        // Current value is smaller, go right
        if(root.val < low) {
            return rangeSumBST(root.right, low, high);
        }

        // Current value is larger, go left
        if(root.val > high) {
            return rangeSumBST(root.left, low, high);
        }

        // Current value is in range
        return root.val
            + rangeSumBST(root.left, low, high)
            + rangeSumBST(root.right, low, high);
    }
}