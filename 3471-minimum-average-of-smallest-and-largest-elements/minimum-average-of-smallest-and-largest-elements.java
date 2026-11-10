class Solution {
    public double minimumAverage(int[] nums) {
        Arrays.sort(nums);
        int i=0;
        int j=nums.length-1;
        double minavg=Double.MAX_VALUE;
        while(i<j){
            double avg=(nums[i]+nums[j])/2.0;
            minavg=Math.min(minavg,avg);
            i++;
            j--;
        }
        return minavg;
    }
}