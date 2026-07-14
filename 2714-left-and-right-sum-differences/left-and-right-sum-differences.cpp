class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        int leftsum=0;
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++){
            int rightsum=sum-leftsum-nums[i];
            ans[i]=abs(leftsum-rightsum);
            leftsum=leftsum+nums[i];
        }
        return ans;
        
    }
};