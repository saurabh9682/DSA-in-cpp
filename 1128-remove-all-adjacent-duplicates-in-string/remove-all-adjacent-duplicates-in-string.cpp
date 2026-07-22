class Solution {
public:
    string removeDuplicates(string s) {
//  Yahan stack me characters store karenge.
//         Rule:
// Agar current character stack ke top ke barabar hai → Pop karo.
// Warna → Push karo.

        stack<char>st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
             // Agar stack empty hai ya current character top ke equal nahi hai
            // to push kar do.
            if(st.empty()||st.top()!=ch){
                st.push(ch);
            }
            else{
                 // Agar same character mila to dono remove ho jayenge.
                 st.pop();

            }
        }
        string ans="";
        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};