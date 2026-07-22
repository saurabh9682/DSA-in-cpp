class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        //har charchter traverse karvao
        for(int i=0;i<s.size();i++){
            //if opening bracket mila to push
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            //closeing bracket 
            else{
                //stack empty hain
                if(st.empty()){
                    return false;
                }
                if(s[i]==')'&&st.top()=='('){
                    st.pop();
                }
                else if(s[i]=='}'&&st.top()=='{'){
                    st.pop();
                }
                else if(s[i]==']'&&st.top()=='['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};