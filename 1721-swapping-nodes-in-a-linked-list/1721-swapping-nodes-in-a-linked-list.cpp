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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *root=head;
        vector<int>v;
        while(root){
            v.push_back(root->val);
            root=root->next;
        }
        int n=size(v);
        swap(v[k-1],v[n-k]);
        root=head;
        for(int i=0;i<n;root=root->next,i++){
            root->val=v[i];
        }
        return head;
    }
};