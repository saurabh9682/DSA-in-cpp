
class Solution {
    public int sumOfLeftLeaves(TreeNode root) {
        if(root==null){
            return 0;
        }
        Queue<TreeNode>q=new LinkedList<>();
        q.add(root);
        int sum=0;
        while(!q.isEmpty()){
            int size=q.size();
            while(size-->0){
            TreeNode node=q.remove();
            if(node.left!=null&&node.left.left==null&&node.left.right==null){
                sum=sum+node.left.val;
            }
            if(node.left!=null){
                q.add(node.left);
            }
            if(node.right!=null){
                q.add(node.right);
            }

        }
        }
        return sum;
    }
}