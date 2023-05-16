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
    ListNode* swapPairs(ListNode* head) {
        ListNode *dummy=new ListNode(0);
        ListNode *prev=dummy;
        dummy->next=head;
        ListNode* cur=head;
        while(cur && cur->next){
            prev->next=cur->next;
            cur->next=cur->next->next;
            prev->next->next=cur;
            cur=cur->next;
            prev=prev->next->next;
        }
        return dummy->next;
    }
};