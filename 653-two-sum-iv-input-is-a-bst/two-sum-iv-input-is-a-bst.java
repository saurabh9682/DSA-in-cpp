
class Solution {
    HashSet<Integer>set=new HashSet<>();
    public boolean findTarget(TreeNode root,int k){
        return find(root,k);
    }
    public boolean find(TreeNode root, int k) {
        if(root==null){
            return false;
        }
        int need=k-root.val;
        if(set.contains(need)){
            return true;
        }
        set.add(root.val);
        return find(root.left,k)||find(root.right,k);
    }
}