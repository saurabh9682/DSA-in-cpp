
class Solution {
    public TreeNode insertIntoBST(TreeNode root, int val) {
        //as hard node ke liye check karo ki vo given val se bada hai ya chota ,agar bad toh right or agar chota toh left me jao 

        if(root==null){
            return new TreeNode(val);
        }
        if(val<root.val){
            root.left=insertIntoBST(root.left,val);
        }
        else{
            root.right=insertIntoBST(root.right,val);
        }
        return root;
    }
}