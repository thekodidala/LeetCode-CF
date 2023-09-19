//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int solve(int ind,int coins[],vector<vector<int>>&dp,int sum,int M){
	    if(ind<0 || sum<0){return 1e8;}
	    if(sum==0){return 0;}
	    if(dp[ind][sum]!=-1){return dp[ind][sum];}
	    //int ans=0;
	    int pick,notpick;
	    pick=1+solve(ind,coins,dp,sum-coins[ind],M);
	    notpick=solve(ind-1,coins,dp,sum,M);
	    return dp[ind][sum]=min(pick,notpick);
	}
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    vector<vector<int>>dp(M+1,vector<int>(V+1,-1));
	    int res=solve(M-1,coins,dp,V,M);
	    return (res>=1e8)?-1:res;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends