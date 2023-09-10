class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0,right=0,n=s.length();
        int maxi=INT_MIN,cnt=0;
        unordered_map<char,int>mp;
        while(right<n){
            mp[s[right]]++;
            cnt=max(cnt,mp[s[right]]);
            if((right-left+1-cnt)>k){
                mp[s[left]]--;
                left++;
            }
            maxi=max(maxi,right-left+1);
            right++;
        }
        //cout<<left<<" "<<right;
        return maxi;
    }
};