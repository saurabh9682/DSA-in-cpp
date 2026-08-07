class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
//         Ek stack lo.
// pushed array ko left se right traverse karo.
// Jab tak stack ka top popped[j] ke equal nahi hota, tab tak push karte jao.
// Jaise hi stack ka top popped[j] ke equal ho jaye:
// Pop kar do.
// Fir dubara check karo.
// Agar fir se top popped[j] ke equal hai, to fir pop kar do.
// Aise hi jitna match ho sake, pop karte raho.
// End me agar stack empty hai → true
// Nahi to → false
        stack<int>st;
        int j=0;
         // Keep popping while top matches expected pop
        for(int i=0;i<pushed.size();i++){
            st.push(pushed[i]);
            while(!st.empty()&&st.top()==popped[j]){
                st.pop();
                j++;
            }
        }
          // If stack becomes empty,sequence is valid
        return st.empty();
    }
};