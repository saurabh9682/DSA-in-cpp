/*
Root ko queue me push karo.
Jab tak queue empty nahi hai:
Current queue ka size lo → ye current level ke nodes hain.
Itne nodes ko process karo.
Har node ki value current level list me add karo.
Uske left aur right child ko queue me push karo.
Har level ki list ko answer me add karte jao.*/
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> ans=new ArrayList<>();
        if(root==null){
            return ans;
        }
            Queue<TreeNode>q=new LinkedList<>();
                q.add(root);
            while(!q.isEmpty()){
                int size=q.size();
                List<Integer>temp=new ArrayList<>();
                while(size-->0){
                    TreeNode node=q.remove();// yani front weaala elent bahar nikle
                    temp.add(node.val);
                    if(node.left!=null){
                        q.add(node.left);
                    }
                    if(node.right!=null){
                        q.add(node.right);
                    }
                }
                    ans.add(temp);

            }
        
                return ans;
    }
}