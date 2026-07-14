class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans(nums.size());
        int leftsum=0;
        for(int i=0;i<nums.size();i++){
            ans[i]=leftsum;
            leftsum=leftsum+nums[i];
        }
        int rightsum=0;
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]=abs(ans[i]-rightsum);
            rightsum=rightsum+nums[i];
        }
        return ans;
    }
};