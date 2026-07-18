/**
 Find Length
↓
k = k % length
↓
Make Circle
↓
Find New Tail
↓
New Head = Tail->next
↓
Break Circle
↓
Return New Head
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr||k==0){
            return head;
        }
        //count lenght
        int n=1;
        ListNode* tail=head;
        while(tail->next!=nullptr){
            tail=tail->next;
            n++;
        }
        k=k%n;//as when size of linklist>k
        if(k==0){
            return head;
        }
            //make circular list
            tail->next=head;
            int steps=n-k-1;// as we starting frm head
            ListNode* newtail=head;
            while(steps--){
                newtail=newtail->next;
            }

            //connection karo
            ListNode* newhead=newtail->next;

            //break the circle
            newtail->next=nullptr;

            return newhead;
        }
};