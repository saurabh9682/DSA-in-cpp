class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*
        Har number ki frequency count karo:
        Ab HashMap ko traverse karo:
        x.first = number
x.second = us number ki frequency
x.second == 1 wala x.first return kar do.
        */
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;

        }
        for(auto x:mp){
             // Agar number sirf 1 baar aaya hai
            if(x.second==1){
                 // Number return karo
                return x.first;
            }
        }
        return -1;
    }
};