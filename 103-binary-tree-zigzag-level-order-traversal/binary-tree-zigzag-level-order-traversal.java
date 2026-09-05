
class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>>ans=new ArrayList<>();
        if(root==null){
            return ans;
        }
        Queue<TreeNode>q=new LinkedList<>();
        q.add(root);
        boolean leftToright=true;
        while(!q.isEmpty()){
            int size=q.size();
            List<Integer>temp=new ArrayList<>();
            while(size-->0){
                TreeNode node=q.remove();
                temp.add(node.val);
                if(node.left!=null){
                    q.add(node.left);
                }
                if(node.right!=null){
                    q.add(node.right);
                }
            }
            if(!leftToright){
                Collections.reverse(temp);
            }
            ans.add(temp);
            leftToright=!leftToright;
        }
        return ans;
    }
}