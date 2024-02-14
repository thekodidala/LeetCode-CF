class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>v(26,0);
        if(s.size()!=t.size()){return false;}
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']=++v[s[i]-'a'];
            v[t[i]-'a']=--v[t[i]-'a'];
        }
        for(int j=0;j<26;j++){
            if(v[j]!=0){
                return false;
            }
        }
        return true;
    }
};