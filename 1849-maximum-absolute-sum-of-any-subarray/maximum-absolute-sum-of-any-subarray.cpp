class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxending=nums[0];
        int maxsum=nums[0];
        int minending=nums[0];
        int minsum=nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=maxending+nums[i];
            int v2=nums[i];
            maxending=max(v1,v2);
            maxsum=max(maxsum,maxending);
            int v3=minending+nums[i];
            int v4=nums[i];
            minending=min(v3,v4);
            minsum=min(minsum,minending);
        }
        return max(abs(maxsum),abs(minsum));
    }
};