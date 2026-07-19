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
    ListNode* oddEvenList(ListNode* head) {
        //Hum list ko 2 lists me tod denge.
        //ek odd ek even then hum list ko paahle odd then evven me jodenge
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenhead=even;//humne isi is liye banyae hai kyuki hume last me jodna hai odd ke baad

        while(even!=nullptr&&even->next!=nullptr){
            odd->next=even->next;
            odd=odd->next;//to move the iinitial odd pointer 

            even->next=odd->next;
            even=even->next;

        }
        //connect karo at the end
        odd->next=evenhead;
        return head;
    }

};