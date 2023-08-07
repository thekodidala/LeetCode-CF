class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col=matrix[0].size(),row=matrix.size();
        int left=0,right=row*col-1;
        //converting a[i][j] into a[i]
        while(left<=right){
            int mid=left+(right-left)/2;
            //converting array into 2d array
            if(matrix[mid/col][mid%col]<target){
                left=mid+1;
            }
            else if(matrix[mid/col][mid%col]==target){return true;}
            else{right=mid-1;}
        }
        return false;
    }
};