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
    int pairSum(ListNode* head) {
        ListNode* root=head;
        vector<int>v;
        while(root){
            v.push_back(root->val);
            root=root->next;
        }
        int n=v.size();
        int mx=0;
        for(int i=0;i<=(n/2)-1;i++){
            int sum=v[i]+v[n-1-i];
            mx=max(sum,mx);
        }
        return mx;
    }
};