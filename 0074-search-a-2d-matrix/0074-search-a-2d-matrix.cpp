class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int left=0,right=0;
        for(int i=0;i<n;i++){
            left=matrix[i][0];
            right=matrix[i][m-1];
            if(target>=left&&target<=right){
                int cnt=0;
                for(int j=0;j<m;j++){
                    if(target==matrix[i][j]){return true;}
                    cnt++;
                }
                if(cnt==m)return false;
            }
        }
        return false;
    }
};