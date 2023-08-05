//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int mod=(int)(1e9+7);
    int solve(int ind,int tar,vector<int>& arr,vector<vector<int>>&dp){
        if(ind==0){
            if(tar==0&&arr[0]==0)return 2;
            if(tar==0 || tar==arr[0])return 1;
            return 0;
        }
        if(dp[ind][tar]!=-1)return dp[ind][tar];
        int nottake=solve(ind-1,tar,arr,dp);
        int take=0;
        if(arr[ind]<=tar){
            take=solve(ind-1,tar-arr[ind],arr,dp);
        }
        return dp[ind][tar]=(take+nottake)%mod;
    }
  
    int countPartitions(int n, int d, vector<int>& arr) {
        // Code here
        //vector<vector<int>>dp(n,vector<int>(d+1,-1));
        int totsum=0;
        for(auto a:arr){
            totsum+=a;
        }
        int tar=(totsum-d)/2;
        if(totsum-d<0 || (totsum-d)%2)return false;
        vector<vector<int>>dp(n,vector<int>(tar+1,-1));
        return solve(n-1,tar,arr,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends