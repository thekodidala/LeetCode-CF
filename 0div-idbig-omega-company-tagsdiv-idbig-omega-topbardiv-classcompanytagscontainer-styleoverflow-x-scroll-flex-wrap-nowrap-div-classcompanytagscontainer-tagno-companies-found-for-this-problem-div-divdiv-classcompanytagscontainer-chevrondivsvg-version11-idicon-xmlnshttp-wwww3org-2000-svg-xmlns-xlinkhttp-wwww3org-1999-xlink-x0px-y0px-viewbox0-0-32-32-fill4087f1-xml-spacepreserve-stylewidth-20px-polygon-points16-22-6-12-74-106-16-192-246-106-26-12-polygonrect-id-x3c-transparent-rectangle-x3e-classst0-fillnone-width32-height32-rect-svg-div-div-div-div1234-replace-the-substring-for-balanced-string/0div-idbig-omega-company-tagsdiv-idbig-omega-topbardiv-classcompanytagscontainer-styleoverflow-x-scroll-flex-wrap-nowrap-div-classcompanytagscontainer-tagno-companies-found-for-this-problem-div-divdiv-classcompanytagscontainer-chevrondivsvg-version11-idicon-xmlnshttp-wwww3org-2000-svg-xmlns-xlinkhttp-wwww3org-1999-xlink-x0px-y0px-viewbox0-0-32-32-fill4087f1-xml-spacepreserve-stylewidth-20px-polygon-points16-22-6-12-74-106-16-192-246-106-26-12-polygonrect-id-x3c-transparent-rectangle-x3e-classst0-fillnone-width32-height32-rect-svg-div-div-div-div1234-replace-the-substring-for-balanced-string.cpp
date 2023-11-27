class Solution {
public:
    int balancedString(string s) {
        int n=s.length(),sz=n/4;
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int left=0,cnt=n;
        for(int r=0;r<n;r++){
            mp[s[r]]--;
            while(left<n && mp['Q']<=sz && mp['W']<=sz && mp['E']<=sz && mp['R']<=sz){
                cnt=min(cnt,r-left+1);
                mp[s[left]]++;
                left++;
            }
        }
        return cnt;
    }
};