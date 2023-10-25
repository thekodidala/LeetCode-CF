class Solution {
public:
    int solve(int n,int k){
        if(n==1){
            return 0;
        }
        int total=pow(2,n-1);
        int mid=total/2;
        if(k>mid){
            return 1-solve(n,k-mid);
        }
        return solve(n-1,k);
    }
    int kthGrammar(int n, int k) {
        return solve(n,k);
    }
};