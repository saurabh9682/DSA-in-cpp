class Solution {
public:
    int evalRPN(vector<string>& tokens) {
//         Tokens ko left se right traverse karo.
// Number mile → push kar do.
// Operator (+, -, *, /) mile →
// Stack se 2 numbers pop karo.
// Operation perform karo.
// Result ko wapas push kar do.
// End me stack me ek hi value bachegi, wahi answer hai.

    stack<int>st;
    for(int i=0;i<tokens.size();i++){
        string curr=tokens[i];
        if(curr=="+"){
            int first=st.top();
            st.pop();
            int second=st.top();
            st.pop();
            st.push(second+first);
        }
         else if(curr=="-"){
            int first=st.top();
            st.pop();
            int second=st.top();
            st.pop();
            st.push(second-first);
        }
           else if(curr=="/"){
            int first=st.top();
            st.pop();
            int second=st.top();
            st.pop();
            st.push(second/first);
        }
           else if(curr=="*"){
            int first=st.top();
            st.pop();
            int second=st.top();
            st.pop();
            st.push(second*first);
        }
        //normal nnumber
        else{
            st.push(stoi(curr));
        }
    }
        return st.top();

    }
};