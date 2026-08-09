class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        /*Kya ye frequencies repeat ho rahi hain?Iske liye ek aur unordered_set use karenge.*/
        unordered_set<int>st;
        for(auto x:mp){
            if(st.count(x.second)){
                return false;
            }
            st.insert(x.second);
        }
        return true;
    }
};