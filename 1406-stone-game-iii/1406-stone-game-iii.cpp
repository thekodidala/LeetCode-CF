class Solution {
public:
    //dp problem top down approach(memoization)
    int stonegame(vector<int>&dp,int i,vector<int>& stoneValue){
        int n=stoneValue.size();
        if(i>=n){return 0;}
        if(dp[i]!=INT_MAX)return dp[i];
        int first=stoneValue[i]-stonegame(dp,i+1,stoneValue);
        int second=INT_MIN;
        if(i+1<n)second=stoneValue[i]+stoneValue[i+1]-stonegame(dp,i+2,stoneValue);
        int third=INT_MIN;
        if(i+2<n)third=stoneValue[i]+stoneValue[i+1]+stoneValue[i+2]-stonegame(dp,i+3,stoneValue);
        return dp[i]=max({first,second,third});
        
    }
    string stoneGameIII(vector<int>& stoneValue) {
        vector<int>dp(stoneValue.size(),INT_MAX);
        int val=stonegame(dp,0,stoneValue);
        if(val>0){return "Alice";}
        else if(val<0){return "Bob";}
        else{return "Tie";}
    }
};