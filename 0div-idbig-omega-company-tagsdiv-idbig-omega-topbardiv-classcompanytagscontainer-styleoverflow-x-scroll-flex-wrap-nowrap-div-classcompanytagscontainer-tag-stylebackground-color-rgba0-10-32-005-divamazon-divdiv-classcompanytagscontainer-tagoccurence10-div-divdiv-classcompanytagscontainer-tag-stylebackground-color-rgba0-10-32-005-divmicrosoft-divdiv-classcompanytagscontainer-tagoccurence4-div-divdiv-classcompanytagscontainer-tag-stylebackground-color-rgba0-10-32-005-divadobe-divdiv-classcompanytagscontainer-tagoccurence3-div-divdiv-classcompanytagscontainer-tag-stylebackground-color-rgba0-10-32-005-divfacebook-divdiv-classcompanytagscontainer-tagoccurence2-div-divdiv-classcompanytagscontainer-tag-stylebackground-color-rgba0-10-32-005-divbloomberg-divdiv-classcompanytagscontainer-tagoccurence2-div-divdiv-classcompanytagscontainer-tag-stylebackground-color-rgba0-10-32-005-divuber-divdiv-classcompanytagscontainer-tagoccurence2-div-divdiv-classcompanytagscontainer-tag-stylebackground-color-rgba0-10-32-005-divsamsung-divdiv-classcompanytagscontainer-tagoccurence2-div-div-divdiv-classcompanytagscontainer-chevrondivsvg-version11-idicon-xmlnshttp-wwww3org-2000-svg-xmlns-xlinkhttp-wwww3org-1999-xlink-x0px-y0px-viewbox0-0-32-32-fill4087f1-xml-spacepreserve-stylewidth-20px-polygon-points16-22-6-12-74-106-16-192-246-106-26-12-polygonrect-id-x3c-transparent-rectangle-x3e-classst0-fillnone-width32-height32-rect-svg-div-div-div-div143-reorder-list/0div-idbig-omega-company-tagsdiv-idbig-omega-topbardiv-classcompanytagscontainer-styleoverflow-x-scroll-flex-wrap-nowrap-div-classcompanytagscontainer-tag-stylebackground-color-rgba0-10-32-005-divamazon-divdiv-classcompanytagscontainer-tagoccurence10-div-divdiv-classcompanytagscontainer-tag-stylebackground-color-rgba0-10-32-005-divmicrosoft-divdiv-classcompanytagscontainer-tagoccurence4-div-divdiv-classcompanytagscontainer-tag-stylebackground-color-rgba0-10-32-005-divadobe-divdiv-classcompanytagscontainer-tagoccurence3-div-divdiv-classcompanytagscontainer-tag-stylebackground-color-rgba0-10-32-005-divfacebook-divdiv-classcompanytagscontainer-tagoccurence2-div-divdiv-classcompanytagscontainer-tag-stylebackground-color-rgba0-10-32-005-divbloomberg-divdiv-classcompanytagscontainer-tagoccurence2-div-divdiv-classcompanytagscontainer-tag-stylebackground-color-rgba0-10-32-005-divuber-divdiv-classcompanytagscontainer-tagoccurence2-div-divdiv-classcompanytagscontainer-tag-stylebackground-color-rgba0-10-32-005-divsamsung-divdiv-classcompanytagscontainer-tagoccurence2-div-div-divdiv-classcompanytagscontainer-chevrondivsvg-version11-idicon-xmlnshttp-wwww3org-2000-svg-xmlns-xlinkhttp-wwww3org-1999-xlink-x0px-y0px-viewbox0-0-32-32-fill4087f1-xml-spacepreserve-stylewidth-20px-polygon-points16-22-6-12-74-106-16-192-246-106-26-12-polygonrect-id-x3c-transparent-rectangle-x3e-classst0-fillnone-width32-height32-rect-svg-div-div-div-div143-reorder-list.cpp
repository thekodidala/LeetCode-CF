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
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next){
            return;
        }
        ListNode* cur=head;
        stack<ListNode*>st;
        int sz=0;
        while(cur!=NULL){
            st.push(cur);
            sz++;
            cur=cur->next;
        }
        int j=st.size();
        ListNode* ptr=head;
        for(int i=0;i<j/2;i++){
            ListNode *temp=st.top();
            st.pop();
            temp->next=ptr->next;
            ptr->next=temp;
            ptr=ptr->next->next;
        }
        ptr->next=NULL;
    }
};