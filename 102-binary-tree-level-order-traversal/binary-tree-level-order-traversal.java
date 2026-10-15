/*Logic kya karna hai?
1. Queue banao. Queue FIFO follow karti hai — First In, First Out.
2. Root ko queue mein daalo. Example: queue = [1]
3. Jab tak queue empty nahi hai, loop chalao.
4. Queue ke front se node nikalo aur print karo.
5. Agar us node ka left child exist karta hai, use queue mein daalo.
6. Agar right child exist karta hai, use queue mein daalo.
7. Queue empty hone tak repeat karo.*/



import java.util.*;
class TreeNode{
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int val){
        this.val=val;
    }
}

class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>>ans=new ArrayList<>();

        if(root==null){
            return ans;
        }
        Queue<TreeNode>q=new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            int size=q.size();       //Batata hai ki current level par kitne nodes process karne hain.
          List<Integer>level=new ArrayList<>(); // Current level ke processed nodes ki values ko ek list mein collect karta hai.

          for(int i=0;i<size;i++){
            TreeNode curr=q.poll();
            level.add(curr.val);
            if(curr.left!=null){
                q.add(curr.left);
            }
            if(curr.right!=null){
                q.add(curr.right);
            }

          }
            ans.add(level);
        }
          return ans;
    }
}