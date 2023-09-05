class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        //two pointer technique
        int i=0,j=0,cnt=0,n=arr.size();
        int res=INT_MIN;
        while(j<n){
            
            if(arr[j]==0){cnt++;}
            
            while(cnt>k){
                if(arr[i]==0){cnt--;}
                i++;
            }
            res=max(res,j-i+1);
            j++;
        }
        return res;
    }
};