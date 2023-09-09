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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right){return head;}
        ListNode *temp=new ListNode(0);
        ListNode *prev=temp;
        prev->next=head;
        for(int i=0;i<left-1;i++){
            prev=prev->next;
        }
        ListNode *cur=prev->next;
        for(int i=0;i<right-left;i++){
            ListNode *forw=cur->next;
            cur->next=forw->next;
            forw->next=prev->next;
            prev->next=forw;
        }
        return temp->next;
    }
};