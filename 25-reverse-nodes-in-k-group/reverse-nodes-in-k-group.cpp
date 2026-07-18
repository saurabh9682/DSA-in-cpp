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
        ListNode* reverse(ListNode* head,int k){
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* next=nullptr;
        while(curr!=nullptr &&k--){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
        }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* point =dummy;
        while(true){
            //step1:check if k node exist or not
            ListNode* groupend=point;
            for(int i=0;i<k&&groupend!=nullptr;i++){
               groupend=groupend->next;
            }
            if(groupend==nullptr){
                break;
            }
            //step2: save pointer 
            ListNode* groupstart=point->next;
            ListNode* nextgroup=groupend->next;

            //step3 break the node 
            groupend->next=nullptr;

            //step4 reverse the node
            ListNode* newhead=reverse(groupstart,k);

            //step5 connection banao
            point->next=newhead;
            groupstart->next=nextgroup;

            //step6 move point to next grpoup
            point=groupstart;

        }
        return dummy->next;
    }
};