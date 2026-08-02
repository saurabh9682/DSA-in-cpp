class Solution {
public:
    int calPoints(vector<string>& operations) {
//         Stack me valid scores store karo.
// Har operation ko left se right process karo.
// Rules
// Number → Stack me push karo.
// + → Last 2 scores ka sum nikaal kar push karo.
// D → Last score ka 2× karke push karo.
// C → Last valid score pop kar do.
// End
// Stack ke saare elements ka sum hi final answer hai.

    stack<int>st;
    for(int i=0;i<operations.size();i++){
        string curr=operations[i];
        //remove last score
        if(curr=="C"){
            st.pop();
        }
        //double last score
        else if(curr=="D"){
            st.push(2*st.top());
        }
        //sumof last two scores
        else if(curr=="+"){
            int first=st.top();
            st.pop();
            int second=st.top();
            st.push(first);     //restore
            st.push(first+second);
        }
        //normal number
        //convert string to integer
        else{
            st.push(stoi(curr));
        }
    }
        int ans=0;
        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
        }
        return ans;
    }
};