/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        //linked list ko vector me convert 
        vector<int>nums;

        while(head!=NULL){
            nums.push_back(head->val);
            head=head->next;
        }
        //initially ans
        vector<int>ans(nums.size(),0);
        
        stack<int>st;
        //ab ye question next greater me convert higaya 
        for(int i=nums.size()-1;i>=0;i--){
            //current ke chotte ya equal element ko hata do
            while(!st.empty()&&nums[st.top()]<=nums[i]){
                st.pop();
            }
            //agar stack empty to next greater exisit nahi karta
            if(st.empty()){
                ans[i]=0;
            }
            //stack ke top index ki value hi answer hai as it is greater
            else{
                ans[i]=nums[st.top()];

            }
            //push current index 
            st.push(i);
        }
        return ans;
    }
};