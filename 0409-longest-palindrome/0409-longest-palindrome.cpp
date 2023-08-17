class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto a:s){
            mp[a]++;
        }
        int count=0;
        for(auto i:mp){
            if(i.second%2!=0){
                count++;
            }
        }
        int n=s.length();
        if(count>1){
            return (n-count)+1;
        }
        return n;
    }
};