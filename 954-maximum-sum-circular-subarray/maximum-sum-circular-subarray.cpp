class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        //Same Kadane, but run it twice:once for the normal maximum subarray,once to compute the minimum subarray so you can handle wrapping.
        int total=nums[0];
        int bestmax=nums[0];
        int maxsum=nums[0];


        int bestmin=nums[0];
        int minsum=nums[0];
        for(int i=1;i<nums.size();i++){
            total=total+nums[i];
            int v1=bestmax+nums[i];
            int v2=nums[i];
            bestmax=max(v1,v2);
            maxsum=max(maxsum,bestmax);
            int v3=bestmin+nums[i];
            int v4=nums[i];
            bestmin=min(v3,v4);
            minsum=min(minsum,bestmin);
        }
        //sab negative ahain
        if(maxsum<0)
            return maxsum;
            return max(maxsum,total-minsum);
    }
};