
class Solution {
public:
    void reorderList(ListNode* head) {
        //middle find
        //scond half reverse
        //merge alternatively


       // Agar list khali hai ya sirf ek node hai
        // to reorder karne ki zarurat nahi
         if (head==nullptr || head->next==nullptr){
            return;
         }//middle find
         ListNode* slow=head;
         ListNode* fast=head;
         while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
         }
         // Reverse middle ke baad wali list
         ListNode* prev=nullptr;
         ListNode* curr=slow->next;
         slow->next=nullptr;
         while(curr!=nullptr){
           ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
         }
         //merge alternatively
//          First List se 1 node
// ↓
// Second List se 1 node
// ↓
// First List se 1 node
// ↓
// Second List se 1 node
// ↓
    ListNode* first=head;
    ListNode* second=prev;//reverse hone ke baad
    while(second!=nullptr){
        //Pehle next nodes ko save karoKyuki ab hum links change karne wale hain.Agar save nahi karoge to original list ka next node kho jaayega.
        ListNode* temp1=first->next;
        ListNode* temp2=second->next;
        /// First ke baad second lagao
        first->next=second;
        //// Second ke baad first ki next node lagao
        second->next=temp1;

         // Dono pointer aage badhao
         first=temp1;
         second=temp2;

    }
    }
};