class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        for(int i=0;i<num.size();i++){
            char curr=num[i];
              // Remove bigger previous digits
            while(k>0&&!st.empty()&&st.top()>curr ){
                st.pop();
                k--;
            }
            st.push(curr);
        }
        //k jab tak khatam ni ho jata
        while(k>0){
            st.pop();
            k--;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
          // Reverse because stack gives reverse order
        reverse(ans.begin(), ans.end());

        // Remove leading zeros
        int i = 0;
        while(i < ans.size() && ans[i] == '0')
        {
            i++;
        }

        ans = ans.substr(i);

        // If all digits removed
        if(ans == "")
            return "0";

        return ans;
    }
};