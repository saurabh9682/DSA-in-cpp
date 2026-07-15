class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            int need=sum-goal;
            if(mp.count(need)){
                ans=ans+mp[need];
            }
            mp[sum]++;
        }
        return ans;
    }
};