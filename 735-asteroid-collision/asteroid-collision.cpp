class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
//         Collision Rules
// Top chhota hai (abs(top) < abs(curr))
// Top explode → pop
// Current abhi bhi zinda hai → aur check karo.
// Dono equal hain
// Dono explode → pop
// Current ko mat push karo.
// Top bada hai
// Current explode → push mat karo.

        stack<int>st;
        for(int i=0;i<asteroids.size();i++){
            int curr=asteroids[i];
            bool destroyed=false; //current value destroyed
            //colision tabhi hoga jab
            while(!st.empty()&&st.top()>0&&curr<0){
                //case 1 top chota ho
                if(abs(st.top())<abs(curr)){
                    st.pop();
                }
                //case2 dono equal ho
                else if(abs(st.top())==abs(curr)){
                    st.pop();
                    destroyed=true;
                    break;
                }
                //top bada ho 
                else {
                    destroyed=true;
                    break;

                }
                //agar current destroy nahi hua to stack me daal do
            }
                if(!destroyed){
                    st.push(curr);
                }
        }
            vector<int>ans;
            while(!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};