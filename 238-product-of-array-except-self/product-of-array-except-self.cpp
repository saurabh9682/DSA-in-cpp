class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {        
// Har index ke liye answer banana hai.
// Rule:
// Us index ke element ko chhodkar baaki sabka product nikalna hai
// Yahan sum nahi, product use hoga.
// Hum do arrays banayenge.left and right ke elements ke liye
        int n=nums.size();
        vector<int>left(n);
        vector<int>right(n);
        vector<int>ans(n);

    left[0]=1;
    for(int i=1;i<n;i++){
        left[i]=left[i-1]*nums[i-1];
    }
    right[n-1]=1;
    for(int i=n-2;i>=0;i--){
        right[i]=right[i+1]*nums[i+1];
    }
    for(int i=0;i<n;i++){
        ans[i]=left[i]*right[i];
    }
    return ans;

    }
};