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
            if(st.count(x.second)){//x.second means ki as we need to check for value not key
                return false;
            }
            st.insert(x.second);
        }
        return true;
    }
};






/*class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> mp;

        // Step 1: frequency count
        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }

        // Step 2: frequencies ko vector mein store karo
        vector<int> freq;

        // HashMap ke elements ko access karne ke liye
        // array ke elements se loop chala rahe hain
        for(int i = 0; i < arr.size(); i++) {

            if(mp[arr[i]] != 0) {

                freq.push_back(mp[arr[i]]);

                mp[arr[i]] = 0;
            }
        }

        // Step 3: duplicate frequencies check karo
        for(int i = 0; i < freq.size(); i++) {

            for(int j = i + 1; j < freq.size(); j++) {

                if(freq[i] == freq[j]) {
                    return false;
                }
            }
        }

        return true;
    }
};*/