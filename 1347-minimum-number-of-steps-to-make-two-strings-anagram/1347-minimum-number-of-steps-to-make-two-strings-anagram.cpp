class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>v(26,0);
        //if(s.length()!=t.length()){return 0}
        for(int i=0;i<s.length();i++){
            v[s[i]-'a']++;
            v[t[i]-'a']--;
        }
        int count=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>0){
                count+=v[i];
            }
        }
        return count;
    }
};