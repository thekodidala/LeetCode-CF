/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root,int i,vector<vector<int>>&v){
        if(!root){
            return;
        }
        if(v.size()==i){
            v.push_back(vector<int>());
        }
        v[i].push_back(root->val);
        solve(root->left,i+1,v);
        solve(root->right,i+1,v);
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(!root){
            return v;
        }
        solve(root,0,v);
        return v;
    }
};