class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        //twist circular loop 
        //hum isme array ko double kardenge 
        //then bade inces ko nums[i%n] to get original indices
      //  Matlab hum virtually traverse kar rahe hain without making a new array.
      int n=nums.size();
      vector<int>ans(n,-1);
      stack<int>st;
      for(int i=2*n-1;i>=0;i--){
        int curr=nums[i%n];
        while(!st.empty()&&st.top()<=curr){
            st.pop();
        }
        if(i<n){
            if(!st.empty()){
                ans[i]=st.top();
            }
        }
            st.push(curr);
      }
      return ans;
    }
};