class Solution {
    int max=Integer.MIN_VALUE;
    public int minMoves(int[] nums) {
        for(int i=0;i<nums.length;i++){
            max=Math.max(max,nums[i]);
        }
        int ans=0;
        for(int i=0;i<nums.length;i++){
            ans=ans+max-nums[i];
        }
        return ans;
    }
}