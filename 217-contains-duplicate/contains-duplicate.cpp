class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {


        /*Har number ke liye check karo:

Agar number already map me present hai → duplicate mil gaya → true.
Nahi hai → map me insert kar do.*/
        unordered_map<int,int>mp;

            // Agar number pehle aa chuka hai
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]>0){
                return true;
            }
            // Number ko map me store karo
            mp[nums[i]]++;
        }
        return false ;
    }
};