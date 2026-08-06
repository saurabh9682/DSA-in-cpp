class Solution {
public:
    string makeGood(string s) {
//         String ko left se right traverse karo.
// Har character ke liye:
// Agar stack empty hai → push kar do.
// Agar stack ka top aur current same letter hain, bas case alag hai (a-A, B-b), to pop kar do.
// Warna current character ko push kar do.
// End me stack me jo characters bachenge, unse answer bana lo.

    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(!st.empty()&&abs(st.top()-s[i])==32){
            st.pop();
        }
        else{
            st.push(s[i]);
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