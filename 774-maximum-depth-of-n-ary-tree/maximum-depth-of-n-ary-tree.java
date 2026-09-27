

class Solution {
    public int maxDepth(Node root) {
        if (root==null){
            return 0;
        }
        int max=0;
        for(int i=0;i<root.children.size();i++){
            int depth =maxDepth(root.children.get(i));
            max=Math.max(max,depth);
        }
        return 1+max;
    }
}