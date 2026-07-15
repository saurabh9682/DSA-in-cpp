class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            //for negative as well as positive dry run karo samjh me ayega formula
            int rem=((sum%k)+k)%k;
            ans=ans+mp[rem];
            mp[rem]++;
        }
        return ans;
    }
};