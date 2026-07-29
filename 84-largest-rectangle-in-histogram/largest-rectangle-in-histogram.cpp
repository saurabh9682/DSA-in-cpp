class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        /*Idea
Har bar (height[i]) ko minimum height maan kar socho ki ye bar kitni door tak rectangle bana sakta hai.
Uske liye 2 cheezein chahiye:
Left me nearest smaller element (L)
Right me nearest smaller element (R)
Ye dono milte hi rectangle ki width nikal jayegi.*/
    int n=heights.size();
    vector<int>left(n),right(n);
    stack<int>st;
    // Previous Smaller Index
    for(int i=0;i<n;i++){
        while(!st.empty()&&heights[st.top()]>=heights[i]){
            st.pop();
        }
        if(st.empty()){
            left[i]=-1;
        }
        else{
            left[i]=st.top();
        }
        st.push(i);
    }
    //clear stack
    while(!st.empty()){
        st.pop();
    }
    // Next Smaller Index
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&&heights[st.top()]>=heights[i]){
            st.pop();
        }
        if(st.empty()){
            right[i]=n;
        }
        else{
            right[i]=st.top();
        }
        st.push(i);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int width=right[i]-left[i]-1;  //index ka difference
        int area=heights[i]*width;
        ans=max(ans,area);
    }
    return ans;

    }
};