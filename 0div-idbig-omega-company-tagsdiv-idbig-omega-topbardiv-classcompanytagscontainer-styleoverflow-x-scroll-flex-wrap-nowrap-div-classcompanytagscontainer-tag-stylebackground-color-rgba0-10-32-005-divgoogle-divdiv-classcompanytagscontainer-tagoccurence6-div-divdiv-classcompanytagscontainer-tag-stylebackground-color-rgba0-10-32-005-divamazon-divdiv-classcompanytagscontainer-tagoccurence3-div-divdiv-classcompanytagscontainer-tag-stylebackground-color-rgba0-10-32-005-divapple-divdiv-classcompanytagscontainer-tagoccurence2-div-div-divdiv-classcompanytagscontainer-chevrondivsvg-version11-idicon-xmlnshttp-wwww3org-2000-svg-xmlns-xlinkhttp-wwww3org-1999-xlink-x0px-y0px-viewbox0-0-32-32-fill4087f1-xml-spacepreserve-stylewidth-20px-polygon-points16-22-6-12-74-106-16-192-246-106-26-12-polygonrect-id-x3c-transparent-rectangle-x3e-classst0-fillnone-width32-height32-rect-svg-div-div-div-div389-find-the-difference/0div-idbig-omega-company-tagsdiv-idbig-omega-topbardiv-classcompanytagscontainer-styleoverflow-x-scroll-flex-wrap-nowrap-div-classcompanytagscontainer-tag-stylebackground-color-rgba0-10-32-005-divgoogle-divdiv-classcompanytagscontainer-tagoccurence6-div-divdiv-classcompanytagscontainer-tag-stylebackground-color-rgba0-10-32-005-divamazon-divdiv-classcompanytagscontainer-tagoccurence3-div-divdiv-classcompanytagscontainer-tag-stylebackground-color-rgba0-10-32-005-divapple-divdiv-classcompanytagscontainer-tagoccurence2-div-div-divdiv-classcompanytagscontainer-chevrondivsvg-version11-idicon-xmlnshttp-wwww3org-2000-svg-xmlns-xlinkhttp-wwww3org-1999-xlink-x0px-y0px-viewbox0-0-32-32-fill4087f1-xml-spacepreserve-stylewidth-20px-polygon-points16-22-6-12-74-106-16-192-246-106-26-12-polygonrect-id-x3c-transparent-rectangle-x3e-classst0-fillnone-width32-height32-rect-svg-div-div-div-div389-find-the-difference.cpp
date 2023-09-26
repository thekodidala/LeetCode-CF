class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=t.length();
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            
        }
        for(int i=0;i<n;i++){
            if(mp.find(t[i])!=mp.end()&&mp[t[i]]>0){
                mp[t[i]]--;
                
                continue;
            }
            else{
                return t[i];
            }
        }
        char c;
        return c;
    }
};