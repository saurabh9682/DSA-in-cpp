
 /*Queue (BFS) use karo, same Level Order wala pattern.

Har level ka size lo.
Us level ke nodes ko process karo.
Level ka last node answer me add karo.
Left aur right children ko queue me push karo.

Har level ka last processed node = right side se visible node.*/

class Solution {
    public List<Integer> rightSideView(TreeNode root) {
          List<Integer>ans=new ArrayList<>();
        if(root==null){
            return ans;
        }
    
    Queue<TreeNode>q=new LinkedList<>();
    q.add(root);
    while(!q.isEmpty()){
        int size=q.size();
        while(size-->0){
                TreeNode node=q.remove();
                if(size==0){
                    ans.add(node.val);
                }
                if(node.left!=null){
                    q.add(node.left);
                }
                if(node.right!=null){
                    q.add(node.right);
                }
        }
    }
    return ans;
        
    }
}