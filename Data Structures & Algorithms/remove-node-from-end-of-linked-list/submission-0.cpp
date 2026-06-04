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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur=head;
        ListNode* temp=head;
        int l=0;
        while(temp){
            l++;
            temp=temp->next;
        }
         if(n == l) {
            return head->next;
        }
        int x=l-n;
      int count = 1;
while(count<x) {
    cur = cur->next;
    count++;
}
cur->next=cur->next->next;
        
    

     return head;

    }
};
