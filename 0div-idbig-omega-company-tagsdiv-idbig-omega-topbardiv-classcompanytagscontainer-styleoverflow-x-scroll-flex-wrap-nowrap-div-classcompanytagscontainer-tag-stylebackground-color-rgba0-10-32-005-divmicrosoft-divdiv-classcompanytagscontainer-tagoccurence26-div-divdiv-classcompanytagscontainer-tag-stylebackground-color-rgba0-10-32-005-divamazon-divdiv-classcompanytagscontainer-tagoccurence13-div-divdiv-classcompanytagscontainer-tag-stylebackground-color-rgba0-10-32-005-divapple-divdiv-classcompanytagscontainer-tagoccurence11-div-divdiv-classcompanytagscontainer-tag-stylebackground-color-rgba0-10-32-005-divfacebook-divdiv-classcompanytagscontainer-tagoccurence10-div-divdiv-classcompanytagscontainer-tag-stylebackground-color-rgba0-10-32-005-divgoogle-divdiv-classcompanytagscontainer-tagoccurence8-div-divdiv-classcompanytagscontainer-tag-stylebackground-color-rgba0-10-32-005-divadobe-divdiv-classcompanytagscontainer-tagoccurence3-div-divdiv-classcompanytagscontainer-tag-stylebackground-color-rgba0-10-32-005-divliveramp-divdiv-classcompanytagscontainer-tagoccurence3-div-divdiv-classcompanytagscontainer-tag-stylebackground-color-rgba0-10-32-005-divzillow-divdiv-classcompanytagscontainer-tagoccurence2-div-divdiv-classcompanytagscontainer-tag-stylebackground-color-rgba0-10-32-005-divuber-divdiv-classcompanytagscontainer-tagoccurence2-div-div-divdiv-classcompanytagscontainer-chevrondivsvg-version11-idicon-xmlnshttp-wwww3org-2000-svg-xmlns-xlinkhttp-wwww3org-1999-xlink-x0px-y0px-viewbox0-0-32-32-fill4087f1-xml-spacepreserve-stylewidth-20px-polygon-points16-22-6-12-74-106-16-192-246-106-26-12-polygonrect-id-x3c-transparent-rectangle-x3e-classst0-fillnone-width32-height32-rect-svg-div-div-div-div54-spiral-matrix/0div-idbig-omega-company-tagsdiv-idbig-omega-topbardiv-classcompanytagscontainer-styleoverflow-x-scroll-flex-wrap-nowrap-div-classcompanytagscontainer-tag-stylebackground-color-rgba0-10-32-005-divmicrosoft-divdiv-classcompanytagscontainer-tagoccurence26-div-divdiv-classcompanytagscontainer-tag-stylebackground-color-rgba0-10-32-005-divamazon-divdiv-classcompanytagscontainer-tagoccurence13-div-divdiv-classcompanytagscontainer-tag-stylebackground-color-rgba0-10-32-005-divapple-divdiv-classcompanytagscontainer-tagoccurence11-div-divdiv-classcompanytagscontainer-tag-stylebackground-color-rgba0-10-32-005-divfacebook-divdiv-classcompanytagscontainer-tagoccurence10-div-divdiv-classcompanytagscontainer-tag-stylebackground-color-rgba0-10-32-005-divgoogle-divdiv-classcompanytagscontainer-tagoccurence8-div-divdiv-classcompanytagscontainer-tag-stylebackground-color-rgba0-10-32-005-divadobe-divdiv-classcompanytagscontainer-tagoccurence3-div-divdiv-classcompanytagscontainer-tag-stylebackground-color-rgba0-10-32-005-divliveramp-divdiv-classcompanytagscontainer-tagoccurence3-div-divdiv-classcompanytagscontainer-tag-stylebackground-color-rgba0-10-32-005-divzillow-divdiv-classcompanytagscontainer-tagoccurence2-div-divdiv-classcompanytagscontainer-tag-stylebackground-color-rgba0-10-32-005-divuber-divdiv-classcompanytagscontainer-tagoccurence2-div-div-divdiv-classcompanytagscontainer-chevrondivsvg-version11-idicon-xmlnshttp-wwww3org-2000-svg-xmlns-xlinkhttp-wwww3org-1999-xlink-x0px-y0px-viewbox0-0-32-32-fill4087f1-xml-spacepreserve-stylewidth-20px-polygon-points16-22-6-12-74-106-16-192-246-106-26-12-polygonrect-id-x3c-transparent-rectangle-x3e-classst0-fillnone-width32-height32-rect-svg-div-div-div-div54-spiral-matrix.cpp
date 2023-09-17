class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int left=0,right=mat[0].size()-1;
        int top=0,bottom=mat.size()-1;
        vector<int>v;
        while(left<=right&&top<=bottom){
            for(int i=left;i<=right;i++){
                v.push_back(mat[top][i]);
            }
            top++;
            
            for(int i=top;i<=bottom;i++){
                v.push_back(mat[i][right]);
            }
            right--;
            
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    v.push_back(mat[bottom][i]);
                }
            }
            bottom--;
            
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    v.push_back(mat[i][left]);
                }
            }
            left++;
        }
        return v;
    }
};