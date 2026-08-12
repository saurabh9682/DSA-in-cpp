class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int frequency=mp[s[0]];
        for(auto x:mp){
                //agar different freq different
                if(x.second!=frequency){
                    return false;
                }
        }
        return true;
    }
};