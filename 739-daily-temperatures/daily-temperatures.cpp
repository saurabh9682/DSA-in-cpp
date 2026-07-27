class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;           //stores indices
        int n=temperatures.size();
        vector<int>ans(n,0);
        // Traverse Right -> Left to find Next Greater       
        for(int i=n-1;i>=0;i--){
         // Remove all smaller or equal temperatures
            while(!st.empty()&&temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            //  Top index is next warmer day
            if(!st.empty()){
                ans[i]=st.top()-i;
            }
            st.push(i);
        }
        return ans;
    }
};