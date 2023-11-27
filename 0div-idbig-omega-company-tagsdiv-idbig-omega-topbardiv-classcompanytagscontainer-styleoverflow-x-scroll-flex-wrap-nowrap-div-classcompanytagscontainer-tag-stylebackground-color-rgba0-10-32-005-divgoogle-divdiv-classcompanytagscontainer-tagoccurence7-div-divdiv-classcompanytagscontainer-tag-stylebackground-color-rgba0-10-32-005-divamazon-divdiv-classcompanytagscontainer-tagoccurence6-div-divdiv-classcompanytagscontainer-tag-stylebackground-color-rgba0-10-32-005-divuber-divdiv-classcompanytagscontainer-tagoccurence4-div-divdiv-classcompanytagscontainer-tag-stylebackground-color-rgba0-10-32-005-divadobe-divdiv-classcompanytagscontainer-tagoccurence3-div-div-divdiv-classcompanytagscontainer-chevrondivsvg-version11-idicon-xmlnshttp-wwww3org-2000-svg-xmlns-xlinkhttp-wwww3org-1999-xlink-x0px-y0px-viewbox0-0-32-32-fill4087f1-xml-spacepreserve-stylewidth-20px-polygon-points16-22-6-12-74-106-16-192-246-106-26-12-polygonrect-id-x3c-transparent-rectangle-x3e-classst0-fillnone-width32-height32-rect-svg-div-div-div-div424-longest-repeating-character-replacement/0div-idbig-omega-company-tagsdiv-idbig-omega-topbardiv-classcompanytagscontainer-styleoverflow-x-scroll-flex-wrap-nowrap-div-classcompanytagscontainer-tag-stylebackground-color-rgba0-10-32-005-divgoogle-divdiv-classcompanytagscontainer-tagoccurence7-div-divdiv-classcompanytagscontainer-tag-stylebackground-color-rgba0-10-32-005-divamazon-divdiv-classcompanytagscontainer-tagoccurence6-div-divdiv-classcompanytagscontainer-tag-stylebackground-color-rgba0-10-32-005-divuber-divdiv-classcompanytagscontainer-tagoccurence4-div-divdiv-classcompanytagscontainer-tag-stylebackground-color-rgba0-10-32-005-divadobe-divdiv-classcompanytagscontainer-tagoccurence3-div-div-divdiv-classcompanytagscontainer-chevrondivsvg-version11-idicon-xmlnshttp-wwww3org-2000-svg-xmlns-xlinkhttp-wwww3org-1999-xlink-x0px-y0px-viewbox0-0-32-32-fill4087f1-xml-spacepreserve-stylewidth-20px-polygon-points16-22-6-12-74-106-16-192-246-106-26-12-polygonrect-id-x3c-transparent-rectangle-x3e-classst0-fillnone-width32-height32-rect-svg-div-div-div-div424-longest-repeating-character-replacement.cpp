class Solution {
public:
    int characterReplacement(string s, int k) {
        //sliding window approach
        int left=0,n=s.length();
        int maxi=INT_MIN,cnt=0;
        unordered_map<char,int>mp;
        for(int right=0;right<s.length();right++){
            mp[s[right]]++;
            cnt=max(cnt,mp[s[right]]);
            while((right-left+1)-cnt>k){
                mp[s[left]]--;
                left++;
            }
            maxi=max(maxi,right-left+1);
        }
        return maxi;
    }
};