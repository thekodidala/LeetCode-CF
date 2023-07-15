class Solution {
public:
    bool isAnagram(string s, string t) {
        //int v[26]={0};
        vector<int>v(26,0);
        if(s.length()!=t.length()){return false;}
        int n=s.length();
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
            v[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(v[i]){return false;}
        }
        return true;
    }
};