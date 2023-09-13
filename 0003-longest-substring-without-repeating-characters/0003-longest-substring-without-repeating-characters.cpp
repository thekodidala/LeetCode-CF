class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,maxi=0;
        int n=s.length();
        //vector<int>v(26,0);
        unordered_map<char,int>mp;
        while(right<n){
            mp[s[right]]++;
            while(mp[s[right]]>1){
                mp[s[left]]--;
                left++;
            }
            maxi=max(right-left+1,maxi);
            right++;
        }
        return maxi;
    }
};