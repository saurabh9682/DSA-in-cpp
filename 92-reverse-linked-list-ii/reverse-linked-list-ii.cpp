
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==nullptr||left==right){
            return head;
        }
        ListNode* prev=nullptr;
        ListNode*curr=head;
        for(int i=1;i<left;i++){
            prev=curr;
            curr=curr->next;
        }
         // Step 2 : Connection aur Tail save karo
        ListNode* connection=prev;//1
        ListNode*tail=curr;//2

        ListNode* next=nullptr;
        for(int i=0;i<right-left+1;i++){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        //connect karo connection or tail ko
        if(connection!=nullptr){
            connection->next=prev;
        }
        else{
            head=prev;
        }
        tail->next=curr;
        return head;
    }
};