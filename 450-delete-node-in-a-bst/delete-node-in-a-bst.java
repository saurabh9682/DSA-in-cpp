
class Solution {
    public TreeNode deleteNode(TreeNode root, int key) {
        if (root == null) {
            return null;
        }
        // Search for the node
        if (key < root.val) {
            root.left = deleteNode(root.left, key);
        } else if (key > root.val) {
            root.right = deleteNode(root.right, key);
        } else {
            // Case 1: No child
            if (root.left == null && root.right == null) {
                return null;
            }
            // Case 2: Only right child
            if (root.left == null) {
                return root.right;
            }
            // Case 2: Only left child
            if (root.right == null) {
                return root.left;
            }
            // Case 3: Find minimum in right subtree
            TreeNode temp = root.right;
            while (temp.left != null) {
                temp = temp.left;
            }
            // Replace value and delete original successor
            root.val = temp.val;
            root.right = deleteNode(root.right, temp.val);
        }
        return root;
    }
}
