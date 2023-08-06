class Solution {
public:
    int MOD = 1e9 + 7;
    long long numberOfPlaylists(int i, int j,int n,int k,vector<vector<long>>&dp){
            // Base cases
            if (i == 0 && j == 0) {
                return 1LL;
            }
            if (i == 0 || j == 0) {
                return 0LL;
            }
            if (dp[i][j] != -1) {
                return dp[i][j];
            }
            // DP transition: add a new song or replay an old one
            dp[i][j] = (numberOfPlaylists(i - 1, j - 1,n,k,dp) * (n - j + 1)) % MOD;
            if (j > k) {
                dp[i][j] += (numberOfPlaylists(i - 1, j,n,k,dp) * (j - k)) % MOD;
                dp[i][j] %= MOD;
            }
            return dp[i][j];
        }
    
    int numMusicPlaylists(int n, int goal, int k) {
        
        vector<vector<long>>dp(goal + 1, vector<long>(n + 1, -1));
        return numberOfPlaylists(goal, n,n,k,dp);
    }
};