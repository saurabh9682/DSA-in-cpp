class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minelement=nums[0];
        int ans=-1; //agar nahi mila toh -1 return kardega 
        for(int i=1;i<nums.size();i++){
            int diff=nums[i]-minelement;
            if(diff>0){
                ans=max(ans,diff);//as negativeme chota numbers bade hote hai so isiliye
            }
            minelement=min(minelement,nums[i]);
        }
        return ans;
    }
};