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
    //1st index of preorder is root node so find pivot pos in inorder where can we find root node 
    TreeNode* solve(vector<int>& preorder,vector<int>& inorder,int &ind,int left,int right){
        if(left>right){
            return NULL;
        }
        int pivot=left;
        while(inorder[pivot]!=preorder[ind]){
            pivot++;
        }
        ind++;
        //create a tree
        TreeNode* newtree=new TreeNode(inorder[pivot]);
        newtree->left=solve(preorder,inorder,ind,left,pivot-1);
        newtree->right=solve(preorder,inorder,ind,pivot+1,right);
        return newtree;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        int ind=0;
        return solve(preorder,inorder,ind,0,n-1);
    }
};