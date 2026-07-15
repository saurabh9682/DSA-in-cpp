class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int oddcount=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1){
                oddcount++;
            }
            int need=oddcount-k;
            if(mp.count(need)){
                ans=ans+mp[need];
            }
            mp[oddcount]++;
        }
        return ans;
    }
};