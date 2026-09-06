
class Solution {
    public int minDepth(TreeNode root) {
        if (root==null){
            return 0;
        }
        Queue<TreeNode>q=new LinkedList<>();
        q.add(root);
        int depth=0;
        while(!q.isEmpty()){
            int size=q.size();
            depth++;
            while(size-->0){
                TreeNode node=q.remove();
                if(node.left==null&&node.right==null){
                    return depth;

                }
                if(node.left!=null){
                    q.add(node.left);
                }
                if(node.right!=null){
                    q.add(node.right);
                }
            }
        }
        return depth;

    }
}