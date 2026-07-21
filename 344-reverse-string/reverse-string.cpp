// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int left=0;
//         int right=s.size()-1;
//         while(left<right){
//             swap(s[left],s[right]);
//             left++;
//             right--;
//         }

//     }
// };



/// method 2 ana chaiya jo ki not the best solution fir bhi using stack 


class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }

        // Step 2 : Pop one by one and overwrite vector
        for(int i=0;i<s.size();i++){
            s[i]=st.top();
            st.pop();
        }
    }
};
