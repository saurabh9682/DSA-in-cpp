class Solution {
    public int maxProduct(int[] nums) {
        Arrays.sort(nums);
        int n=nums.length;
        int max1=nums[n-1];
        int max2=nums[n-2];
        return (max1-1)*(max2-1);
    }
}