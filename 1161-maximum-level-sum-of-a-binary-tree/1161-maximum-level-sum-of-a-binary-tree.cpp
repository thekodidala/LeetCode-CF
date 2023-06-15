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
    int maxLevelSum(TreeNode* root) {
        //bfs is uesd
        int max_len=INT_MIN;
        int lvl=0,ans=-1;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int temp=0;
            lvl++;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                //q.pop();
                temp+=node->val;
                q.pop();
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
                
            }
            if(temp>max_len){max_len=temp;ans=lvl;}
        }
        return ans;
    }
};
