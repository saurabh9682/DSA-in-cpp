
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        //Iske liye 2 chahiye.Yaani previous node.
        if(head==nullptr||head->next==nullptr){
            return nullptr;
        }
        ListNode* prev=nullptr;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr&&fast->next!=nullptr){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        delete slow;
        return head;
    }
};