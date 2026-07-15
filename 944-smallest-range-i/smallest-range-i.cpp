class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mini=nums[0];
        int maxi=nums[0];
        for(int i=1;i<nums.size();i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        int diff=maxi-mini;
        return max(0,diff-2*k);
    }
};