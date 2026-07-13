
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* next=nullptr;
        while(curr!=nullptr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        //Steps
    // Find middle
    // Reverse second half  //Kyuki Linked List me backward traverse nahi kar sakte.
    // Compare
    if(head==nullptr|| head->next==nullptr){
        return true;
        //agar list me kuch bhi nahi ya 1 element hua to list humesha pallindrome hogi
    }
    ListNode* slow=head;//middle nikalo
    ListNode*fast=head;
    while(fast!=nullptr&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    } //as slow is the middle element
    ListNode* second=reverse(slow);
    ListNode* first=head;
    while(second!=nullptr){
        if(first->val!=second->val){
            return false;
        }
        first=first->next;
        second=second->next;
    }
    return true;

    }
};