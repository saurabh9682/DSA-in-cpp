class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
// treverse each charachter
    for(int i=0;i<s.size();i++){
        char ch=s[i]; //current character
        if (ch=='('){
            st.push(')');
        }
        else if (ch=='{'){
            st.push('}');
        }
        else if (ch=='['){
            st.push(']');
        }
        else if(st.empty()|| st.top()!=ch){
            return false;
        }
        else {
            st.pop();
        }

    }
        return st.empty();//agar last me empty hogaya to valid parenthesis hua
    }
};