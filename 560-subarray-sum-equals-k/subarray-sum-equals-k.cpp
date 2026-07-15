class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>f;
        int n=nums.size();
        f[0]=1;
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            // Step 1 : Current Prefix Sum
            sum=sum+nums[i];
             // Step 2 : Required Old Prefix
            int need=sum-k;

            // Agar mil gaya to frequency add karo
            if(f.count(need)){
                ans=ans+f[need];
            }
            // Current Prefix Store karo
            f[sum]++;
        }
        return ans;
    }
};