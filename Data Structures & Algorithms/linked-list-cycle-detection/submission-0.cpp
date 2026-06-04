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
    bool hasCycle(ListNode* head) {
        ListNode* temp=head;
        ListNode* tempi=head;
        while(temp!=NULL && temp->next!=NULL){
            temp=temp->next->next;
            tempi=tempi->next;
            if(temp==tempi){
                return true;
            }
           
        }
        
            return false;
    
    }
};
