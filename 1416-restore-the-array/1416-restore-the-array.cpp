#define mod 1000000007;
class Solution {
public:
    int dp[10000001];
    int restore(string &s,int i,int k){
        if(i==s.size())return 1;
        if(dp[i]!=-1)return dp[i];
        else{
            if(s[i]=='0')return 0;
            long long num=0;
            int ans=0;
            
            for(int j=i;j<s.size();j++){
                num=num*10+s[j]-'0';
                if(num>k)break;
                ans+=restore(s,j+1,k);
                ans%=mod;
            }
            return dp[i]=ans;
        }
    }
    int numberOfArrays(string s, int k) {
        for(int i=0;i<s.size();i++){
            dp[i]=-1;
        }
        return restore(s,0,k);
    }
};