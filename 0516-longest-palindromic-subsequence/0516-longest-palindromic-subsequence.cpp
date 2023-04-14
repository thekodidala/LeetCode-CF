class Solution {
public:
        int longestPalindromeSubseq(string rev) {
        string s=rev;
        int n=s.length();
        int dp[n+1][n+1];
        reverse(rev.begin(),rev.end());
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0||j==0)
                    dp[i][j]=0;
                else{
                    if(s[i-1]==rev[j-1])
                        dp[i][j]=dp[i-1][j-1]+1;
                    else
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][n];
    }
};